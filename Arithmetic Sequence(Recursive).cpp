#include<iostream>
using namespace std;
int artSeq(int n, int a, int d)
{
	if (n == 1)
		return a;
	return d + artSeq(n - 1, a, d);
}
int main()
{
	int n, a, d;
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter first term: ";
	cin >> a;
	cout << "Enter common difference: ";
	cin >> d;
	cout << artSeq(n, a, d) << endl;
	system("pause");
}