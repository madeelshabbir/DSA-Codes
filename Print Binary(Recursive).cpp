#include<iostream>
using namespace std;
void printBin(int n)
{
	if (n == 0 || n == 1)
	{
		cout << n;
		return;
	}
	printBin(n / 2);
	cout << n % 2;
}
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	printBin(n);
	system("pause");
}