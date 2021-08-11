#include<iostream>
using namespace std;
void dyn2DAlloc(bool **a, int n, int k)
{
	if (k == 1)
	{
		a[0] = new bool[n];
		return;
	}
	dyn2DAlloc(a, n, k - 1);
	a[k - 1] = new bool[n];
}
void assignHadamard(bool **a, int t, int l, int n, bool v)
{
	if (n == 1)
	{
		a[t][l] = v;
		return;
	}
	assignHadamard(a, t, l, n / 2, v);
	assignHadamard(a, t + n / 2, l, n / 2, v);
	assignHadamard(a, t, l + n / 2, n / 2, v);
	assignHadamard(a, t + n / 2, l + n / 2, n / 2, !v);
}
void printArray(bool *a, int n)
{
	if (n == 1)
	{
		cout << a[0];
		return;
	}
	printArray(a, n-1);
	cout << a[n - 1];
}
void printMatrix(bool **a, int n, int k)
{
	if (k == 1)
	{
		printArray(a[0], n);
		return;
	}
	printMatrix(a, n, k - 1);
	cout << endl;
	printArray(a[k - 1], n);
}
void Hadamard(int n)
{
	if ((n / 2) % 2 != 0)
		throw 0;
	bool **arr = new bool*[n];
	dyn2DAlloc(arr, n, n);
	assignHadamard(arr, 0, 0, n, false);
	printMatrix(arr, n, n);
}
int main()
{
	Hadamard(4);
	system("pause");
}