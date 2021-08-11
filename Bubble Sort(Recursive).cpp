#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
	int k = a;
	a = b;
	b = k;
}
void bubble(int arr[], int n)
{
	if (n == 1)
		return;
	bubble(arr, n - 1);
	if (arr[n - 2] > arr[n - 1])
		swap(arr[n - 2], arr[n - 1]);
}
void sort(int a[], int n)
{
	if (n == 0)
		return;
	bubble(a, n);
	sort(a, n - 1);
}
int main()
{
	int arr[] = { 3,6,2,5,1,4 };
	sort(arr, 6);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << " ";
	system("pause");
}