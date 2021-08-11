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
bool permute(const string &str, int  low, int high)
{
	string nstr = str;
	if (low == high)
	{
		if (sumL(str) == sumR(str))
			return true;
		return false;
	}
	for (int i = low; i < high; i++)
	{
		swap(nstr[i], nstr[low]);
		if(permute(nstr, low + 1, high))
			return true;
		swap(nstr[i], nstr[low]);
	}
	return false;
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
		if (permute(str[i], 0, str[i].length()))
			cout << "TRUE" << endl;
		else
			cout << "FALSE" << endl;
	}
	system("pause");
}