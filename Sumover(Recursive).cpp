#include<iostream>
using namespace std;
double sumover(int n)
{
	if (n == 1)
		return 1.0;
	return 1.0 / n + sumover(n - 1);
}
int main()
{
	int n;
	cout << "Enter a number: ";
	cin >> n;
	cout << sumover(n) << endl;
	system("pause");
}