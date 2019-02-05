#include "MatrixLib.h"
#include <iostream>
#include <cstdlib>

#define SIZE 3
using namespace std;

void addMat(int a[SIZE][SIZE], int b[SIZE][SIZE])
{
int c[SIZE][SIZE];
for (int i = 0; i < SIZE ; i++)
	{
	for (int j = 0; j < SIZE; j++)
		{	
		c[i][j] = a[i][j] + b[i][j];
		cout << c[i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
return;
}


void subMat(int a[SIZE][SIZE], int b[SIZE][SIZE])
{
int c[SIZE][SIZE];
for (int i = 0; i < SIZE ; i++)
	{
	for (int j = 0; j < SIZE; j++)
		{	
		c[i][j] = b[i][j] - a[i][j];
		cout << c[i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
return;
}
