#include<iostream>
using namespace std;
void towerOfHanoi(int n, char a, char b, char c)
{
	if (n == 1)
	{
		cout << "Move disk from " << a << " to " << c << endl;
		return;
	}
	towerOfHanoi(n - 1, a, c, b);
	cout << "Move disk from " << a << " to " << c << endl;
	towerOfHanoi(n - 1, b, a, c);
}
int main()
{
	towerOfHanoi(5, 'A', 'B', 'C');
	system("pause");
}