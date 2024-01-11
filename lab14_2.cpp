#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

void inputMatrix(double a[][N])
{
	for (int i = 0; i < N; i++)
	{
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < N; j++)
		{
			cin >> a[i][j];
		}
	}
}

void findLocalMax(const double A[][N], bool B[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			B[i][j] = (bool)0;
			if (i != 0 && j != 0 && i != N - 1 && j != N - 1)
			{
				double x = A[i][j];
				if (x >= A[i][j] && x >= A[i + 1][j] && x >= A[i][j + 1] && x >= A[i - 1][j] && x >= A[i][j - 1])
					B[i][j] = (bool)1;
			}
		}
	}
}

void showMatrix(const bool A[][N])
{
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			cout << (A[i][j]) << " ";
		}
		cout << endl;
	}
}