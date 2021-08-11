#include<iostream>
using namespace std;
bool checkBin(long n)
{
	if (n < 0)
	{
		return false;
	}
	while (n > 10)
	{
		if (n % 10 > 1)
			return false;
		n /= 10;
	}
	if (n % 10 > 1)
		return false;
	return true;
}
int countZeros(long n)
{
	if (!checkBin(n))
	{
		throw 0;
	}
	if (n == 0)
		return 1;
	else if (n == 1)
		return 0;
	int c = countZeros(n / 10);
	if (n % 10 == 0)
		c++;
	return c;
}
int countOnes(long n)
{
	if (!checkBin(n))
	{
		throw 0;
	}
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	int c = countOnes(n / 10);
	if (n % 10 == 1)
		c++;
	return c;
}
int main()
{
	try
	{
		int num;
		cin >> num;
		cout << countZeros(num) << endl;
		cout << countOnes(num) << endl;
	}
	catch (int x)
	{
		cout << "Number is not binary" << endl;
	}
	system("pause");
	return 0;
}