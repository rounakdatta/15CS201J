#include <iostream>

void swap(int* m, int* n)
{
	int q = (*m) ^ (*n);
	*m = q^(*m);
	*n = q^(*n);
}