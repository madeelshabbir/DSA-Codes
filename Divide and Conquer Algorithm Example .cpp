#include<iostream>
using namespace std;
void merge(int *&a, int s, int m, int e)
{
	int i = s, k = s, j = m + 1;
	int *c = new int[e];
	while (i <= m && j <= e)
	{
		if (a[i] < a[j])
			c[k++] = a[i++];
		else
			c[k++] = a[j++];
	}
	while (i <= m)
		c[k++] = a[i++];
	while (j <= e)
		c[k++] = a[j++];
	for (i = s; i < k; i++)
		a[i] = c[i];
}
void mergeSort(int *a, int s, int e)
{
	if (s >= e)
		return;
	int m = (s + e) / 2;
	mergeSort(a, s, m);
	mergeSort(a, m+1, e);
	merge(a, s, m, e);
}
int main()
{
	int arr[7] = { 7,21,5,16,71,3,4 };
	mergeSort(arr, 0, 6);
	for(int i = 0; i < 7; i++)
		cout << arr[i] << endl;
	system("pause");
}