#include<iostream>
#include<list>
using namespace std;
list<int> basek(int n, int k)
{
	if (k < 1 || k > 9)
		throw 0;
	if (n < k)
	{
		list<int> l;
		l.push_back(n);
		return l;
	}
	list<int> l(basek(n / k, k));
	l.push_back(n % k);
	return l;
}
int main()
{
	int n, b;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Enter a base: ";
	cin >> b;
	list<int> l(basek(n, b));
	cout << n << " in base " << b << " is ";
	list<int>::iterator ptr;
	for (ptr = l.begin(); ptr != l.end(); ptr++)
		cout << *ptr;
	system("pause");
}