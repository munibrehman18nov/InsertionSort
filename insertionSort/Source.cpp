#include<iostream>
using namespace std;
void insertionSort(int *, int);
void selectionSort(int *, int);
void swapp(int *A, int i, int j);
int findMin(int *A, int s, int e);


int main()
{
	int Array[] = { 1,8,6,8,4,3,9,7,5 };
	selectionSort(Array, 9);
	for (int i = 0; i < 9; i++)
	{
		cout << Array[i] << "  ";
	}
	cout << endl;
}

void insertionSort(int *A, int n)
{
	int temp = 0;
	int j = 0;
	for (int i = 1; i < n; i++)
	{
		temp = A[i];
		j = i - 1;
		while (j > -1 && A[j] >= temp)
		{
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = temp;
	}
}
void selectionSort(int *A, int n)
{
	for (int i = 0; i < n; i++)
	{
		int min = findMin(A, i, n);
		swapp(A, min, i);
	}
}
void swapp(int *A,int i, int j)
{
	int temp = A[i];
	A[i] = A[j];
	A[j] = temp;
}
int findMin(int *A, int s, int e)
{
	int min = A[s];
	int ind = s;
	for (s; s < e; s++)
	{
		if (A[s] < min)
		{
			min = A[s];
			ind = s;
		}
	}
	return ind;
}