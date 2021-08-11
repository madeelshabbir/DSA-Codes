#include<iostream>
using namespace std;
int evens(int *A, int n)
{
	if (n == 1)
		return A[0] % 2 == 0 ? 1 : 0;
	return A[n-1] % 2 == 0 ? 1 + evens(A, n - 1) : evens(A, n - 1);
}
int main()
{
	int a[] = { 0, 2, 4, 5 };
	cout << evens(a, 4) << endl;
	system("pause");
}