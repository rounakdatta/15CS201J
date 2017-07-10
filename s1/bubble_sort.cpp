#include<iostream>
using namespace std;

void display(int* v, int sizex)
{
	for(int i=0;i<sizex;i++)
		cout<<v[i]<<"\n";
}

void swap(int* m, int* n)
{
	int q = (*m) ^ (*n);
	*m = q^(*m);
	*n = q^(*n);
}

void bubblesort(int* x, int sizex)
{
	bool c=0;
	do
	{
		c=0;
		for(int i=0;i<(sizex-1);i++)
		{
			if(x[i] > x[i+1])
			{
				swap(&x[i], &x[i+1]);
				c=1;
			}
		}
	}while(c!=0);
}

int main()
{
	int a[]={2,5,1,15,12,11,21,7,3,20,31,17,0,19,28};
	int a_size=sizeof(a)/sizeof(a[0]);
	clock_t t;
   	t = clock();
    	
	bubblesort(a, a_size);
	display(a, a_size);
	
    	t = clock() - t;
    	double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    	cout<<"\n\nTime Complexity : "<<runtime<<"s";
	
	return 0;
}
