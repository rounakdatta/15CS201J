#include <iostream>
#include <stdlib.h>
using namespace std;

void merge(int* c, int* a, int* b, int m, int n){
	int i = 0, j = 0, k = 0;
	while(i < m && j < n){
		if(a[i] < b[j])
			c[k++] = a[i++];
		else
			c[k++] = b[j++];
	}

	while(i < m)
		c[k++] = a[i++];

	while(j < n)
		c[k++] = b[j++];
}

void mergesort(int* x, int sizex){
	if (sizex < 2)
		return;

	int mid = sizex / 2;
	int *left;
	int *right;

	left = (int*)malloc(mid * sizeof(int));
	right = (int*)malloc((sizex - mid) * sizeof(int));

	for(int i = 0; i < mid; i++){
		left[i] = x[i];
	}

	for(int i = mid; i < sizex; i++){
		right[i - mid] = x[i];
	}

	mergesort(left, mid);
	mergesort(right, sizex - mid);
	merge(x, left, right, mid, sizex - mid);


	free(left);
	free(right);
}

void binsearch(int* x, int big, int query)
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

void bins()
{
	int a[]={2,4,6,8,10,12,1,14,5,16,18,11,20};
	int q=14;
	int a_size=sizeof(a)/sizeof(a[0]);

	mergesort(a, a_size);
	
	clock_t t;
   	t = clock();
    
    	
	binsearch(a,a_size,q);
	
    t = clock() - t;
    double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    cout<<"\n\nTime Complexity : "<<runtime<<"s";
}