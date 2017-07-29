#include<iostream>
using namespace std;

void insert(int* set, int cur, int tar)
{
	int temp=set[cur];
	
	for(int i=cur; i>=tar; i--)
		set[i]=set[i-1];

	set[tar]=temp;
}

void insertionsort(int* x, int sizex)
{
	for(int i=1; i<sizex; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(x[i]<x[j])
				insert(x, i, j);
		}
	}
}

void ins()
{
	cout<<"INSERTION SORT :\n";
	int a[]={2,5,33,1,15,12,11,21,7,3,20,31,17,19,28};
	int a_size=sizeof(a)/sizeof(a[0]);
	clock_t t;
   	t = clock();
    	
	insertionsort(a, a_size);
	display(a, a_size);
	
    t = clock() - t;
    double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    cout<<"\n\nTime Complexity : "<<runtime<<"s";
	
}