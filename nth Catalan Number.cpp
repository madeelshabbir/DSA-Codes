#include<iostream>
using namespace std;
int nThCatalan(int n)
{
	if (n == 0)
		return 1;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += nThCatalan(i) * nThCatalan(n - i - 1);
	}
	return sum;
}
int main()
{
	cout << nThCatalan(3) << endl;
	system("pause");
}