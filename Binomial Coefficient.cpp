#include<iostream>
using namespace std;
int B(int n, int k)
{
	if (k == 0 || n == k)
		return 1;
	else if (1 <= k < n)
		return B(n - 1, k - 1) + B(n - 1, k);
}
int main()
{
	cout << B(5, 2) << endl;
	cout << B(3, 1) << endl;
	cout << B(6, 9) << endl;
	system("pause");
}