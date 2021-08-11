#include<iostream>
using namespace std;
class SquareMatrix
{
private:
	int size;
	int *arr;
public:
	SquareMatrix()
	{
		size = 0;
		arr = NULL;
	}
	SquareMatrix(int n)
	{
		size = n;
		arr = new int[n*n];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[i*size + j] = i*size + j + 1;
			}
		}
	}
	SquareMatrix(int n, int v)
	{
		size = n;
		arr = new int[n*n];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[i*size + j] = v;
			}
		}
	}
	SquareMatrix(const SquareMatrix &m)
	{
		size = m.size;
		arr = new int[m.size*m.size];
		for (int i = 0; i < m.size; i++)
		{
			for (int j = 0; j < m.size; j++)
			{
				arr[i*size + j] = m.arr[i*size + j];
			}
		}
	}
	~SquareMatrix()
	{
		delete[] arr;
	}
	SquareMatrix& operator=(const SquareMatrix &m)
	{
		if (this != &m)
		{
			delete[] arr;
			size = m.size;
			arr = new int[m.size*m.size];
			for (int i = 0; i < m.size; i++)
			{
				for (int j = 0; j < m.size; j++)
				{
					arr[i*size + j] = m.arr[i*size + j];
				}
			}
		}
		return *this;
	}

	void inputMatrix()
	{
		cout << "Enter Size: ";
		cin >> size;
		if (size == 0)
			return;
		arr = new int[size*size];
		cout << "Enter Values:- " << endl;
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cin >> arr[i*size + j];
			}
		}
	}
	void showMatrix()
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				cout << arr[i*size + j] << " ";
			}
			cout << endl;
		}
	}
	SquareMatrix transPose()
	{
		int *tarr = new int[size*size];
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				tarr[i*size + j] = arr[j*size + i];
			}
		}
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
			{
				arr[i*size + j] = tarr[i*size + j];
			}
		}
		delete[] tarr;
		return *this;
	}
};
int main()
{
	SquareMatrix s;
	s.inputMatrix();
	s.showMatrix();
	s.transPose();
	cout << "Transpose:-" << endl;
	s.showMatrix();
	system("pause");
}