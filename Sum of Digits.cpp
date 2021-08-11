#include<iostream>
using namespace std;
int sod(int n)
{
	if (n < 10)
		return n;
	return n%10 + sod(n/10);
}
int main()
{
	int num;
	cout << "input any number to find sum of digits : ";
	cin >> num;
	cout << sod(num) << endl;
	system("pause");
}