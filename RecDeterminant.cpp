#include<iostream>
using namespace std;
double det2D(double **m, int n)
{
	double **sm = new double*[n];
	for (int t = 0; t < n; t++)
		sm[t] = new double[n];
	double d = 0;
	if (n == 1)
		return m[0][0];
	for (int k = 0; k < n; k++)
	{
		int y = 0;
		for (int i = 1; i < n; i++)
		{
			int x = 0;
			for (int j = 0; j < n; j++)
				if (j != k)
					sm[y][x++] = m[i][j];
			y++;
		}
		if (k % 2 == 0)
			d += m[0][k] * det2D(sm, n - 1);
		else
			d -= m[0][k] * det2D(sm, n - 1);
	}
	return d;
}
double det1D(double *m, int n)
{
	double *sm = new double[n*n];
	double d = 0;
	if (n == 1)
		return m[0];
	for (int k = 0; k < n; k++)
	{
		int y = 0;
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < n; j++)
				if (j != k)
					sm[y++] = m[i*n + j];
		}
		if (k % 2 == 0)
			d += m[k] * det1D(sm, n - 1);
		else
			d -= m[k] * det1D(sm, n - 1);
	}
	return d;
}

int main()
{
	double **mat = new double*[3];
	int k = 0;
	for (int i = 0; i < 3; i++)
	{
		mat[i] = new double[3];
	}
	mat[0][0] = 2;
	mat[0][1] = -3;
	mat[0][2] = 1;
	mat[1][0] = 2;
	mat[1][1] = 0;
	mat[1][2] = -1;
	mat[2][0] = 1;
	mat[2][1] = 4;
	mat[2][2] = 5;
	cout << det2D(mat, 3) << endl;
	system("pause");
}