// This is the main DLL file.

#include "stdafx.h"

#include "MatrixLib.h"


int Random (int)
{
int i =rand () %20;
return i;
}


void main()
{
int ayy[3][3];
int bee[3][3];
for (int i = 0; i < 3; i++)
	{
	for (int j = 0; j <3; j++)
		{
		ayy[i][j] = Random (0);	//generating matrix A
		cout << myarray1 [i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
for (int i = 0; i < 3 ; i++)
	{
	for (int j = 0; j < 3; j++)
		{	
		bee[i][j] = Random (0);	//generating matrix B
		cout << myarray2 [i][j] << "\t";
		}
		cout << endl;
	}
cout << endl;
addMat(ayy, bee); //calling addition method
cout << endl;
subMat(ayy,bee); //calling subtraction method

}

