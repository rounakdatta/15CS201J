#include<iostream>
using namespace std;

void search(int* x, int big, int query)
{
	int small=0, mid;
	bool v=0;
	while((big-small)>1)
	{
		mid=((big+small)/2);
		if(query==x[mid])
		{
			cout<<"Found!";
			v+=1;
			break;
		}
		else if(query>x[mid])
			small=mid;
		else
			big=mid;
	}
	if(v==0)
		cout<<"Not found!";
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
	int a[]={2,4,19,6,8,0,10,12,7,14,16,18,5,20,3};
	int q=24;
	int a_size=sizeof(a)/sizeof(a[0]);

	clock_t t;
   	t = clock();
    	
	bubblesort(a,a_size);
	search(a,a_size,q);
	
    	t = clock() - t;
    	double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    	cout<<"\n\nTime Complexity : "<<runtime<<"s";

	return 0;
}
