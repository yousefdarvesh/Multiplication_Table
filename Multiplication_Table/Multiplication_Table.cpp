// Multiplication Table.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	cout << "Multiplication Table" << endl;
	cout << "0\t0\t1\t2\t3\t4\t5\t6\t7\t8\t9\t10" << endl;
	int c = 0;
	int i = 0;
	for (int c = 0; c < 11; c++)
	{
		cout << c << "\t";
		for (int i = 0; i < 11; i++)
		{
			cout << i * c << '\t';
		}
		cout << endl;
	}
	return 0;
}

