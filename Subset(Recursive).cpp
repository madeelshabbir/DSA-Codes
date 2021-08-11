#include<iostream>
#include<string>
using namespace std;
void powerSet(string str, int index = -1, string curr = "")
{
	if (index == str.length())
		return; 
	cout << "{" << curr << "}\n";
	for (int i = index + 1; i < str.length(); i++)
	{
		curr += str[i];
		powerSet(str, i, curr); 
		curr.erase(curr.length() - 1);
	}
}
int main()
{
	string str = "abc";
	powerSet(str);
	system("pause");
	return 0;
}