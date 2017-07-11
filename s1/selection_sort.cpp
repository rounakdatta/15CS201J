#include "bubble_sort.h"
#include<iostream>
using namespace std;

void display(int* v, int sizex)
{
	for(int i=0;i<sizex;i++)
	{
		cout<<v[i]<<"\n";
	}
}

void swap(int* m, int* n)
{
	int q = (*m) ^ (*n);
	*m = q^(*m);
	*n = q^(*n);
}

int findmin(int* set, int start, int end)
{
	int min=set[start], id=start;
	for(int i=start+1; i<end; i++)
	{
		if(set[i]<min)
		{
			id=i;
			min=set[i];
		}
	}
	return id;
}

void selectionsort(int* x, int sizex)
{
	for(int i=0; i<sizex; i++)
	{
		int min=findmin(x,i,sizex);
		swap(x[min],x[i]);
	}
}

int main()
{
	int a[]={2,5,1,15,12,11,21,7,3,20,31,4,17,0,19,28};
	int a_size=sizeof(a)/sizeof(a[0]);
	clock_t t;
   	t = clock();
    	
	selectionsort(a, a_size);
	display(a, a_size);
	
    t = clock() - t;
    double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    cout<<"\n\nTime Complexity : "<<runtime<<"s";
	return 0;
}