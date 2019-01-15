#include "pch.h"
#include <iostream>

using namespace std;

void perm()
{
	int A[4] = { 2,3,4,5 };
	int c[4] = { 0,0,0,0 };
	int i = 0, j = 0;
	cout << "2, 3, 4, 5," << endl;
	while (i < 4)
	{
		if (c[i] < i)
		{
			if (i % 2 == 0) swap(A[0], A[i]);
			else swap(A[c[i]], A[i]);
			while (j < 4)
			{
				cout << A[j] << ", ";
				j++;
			}
			cout << "\n";
			j = 0;
			c[i] += 1;
			i = 0;
		}
		else
		{
			c[i] = 0;
			i++;
		}
	}
}
int main()
{
	cout << "Permutations:";
	perm();
}
