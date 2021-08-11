#include<iostream>
using namespace std;
int GCD(int n1, int n2)
{
	if (n1 < n2)
	{
		int r = n2;
		n2 = n1;
		n1 = r;
	}
	if (n2 == 0)
		return n1;
	return GCD(n2, n1%n2);
}
int main()
{
	cout << GCD(5, 8) << endl;
	cout << GCD(109, 678) << endl;
	cout << GCD(11, 77) << endl;
	system("pause");
}