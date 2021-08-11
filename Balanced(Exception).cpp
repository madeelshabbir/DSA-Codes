#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int sumL(const string &str)
{
	int sum = 0;
	for (int i = 0; i < str.length() / 2; i++)
		sum += str[i] - 48;
	return sum;
}
int sumR(const string &str)
{
	int sum = 0;
	for (int i = str.length() / 2; i < str.length(); i++)
		sum += str[i] - 48;
	return sum;
}
void permute(const string &str, int  low, int high)
{
	string nstr = str;
	if(low == high)
	{
		if (sumL(str) == sumR(str))
			throw 0;
		return;
	}
	for (int i = low; i < high; i++)
	{
		swap(nstr[i], nstr[low]);
		permute(nstr, low + 1, high);
		swap(nstr[i], nstr[low]);
	}
}
int main()
{
	int num;
	ifstream inp("in1.txt");
	inp >> num;
	inp.ignore();
	string *str = new string[num];
	for (int i = 0; i < num; i++)
	{
		getline(inp, str[i]);
		try
		{
			permute(str[i], 0, str[i].length());
			cout << "FALSE" << endl;
		}
		catch (int x)
		{
			cout << "TRUE" << endl;
		}
	}
	system("pause");
}