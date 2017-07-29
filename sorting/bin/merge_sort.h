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

void mrg()
{
	cout<<"MERGE SORT :\n";
	int a[]={2,5,1,15,12,11,21,7,3,20,31,4,17,0,19,28};
	int a_size=sizeof(a)/sizeof(a[0]);
	clock_t t;
   	t = clock();
    	
	mergesort(a, a_size);
	display(a, a_size);
	
    t = clock() - t;
    double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    cout<<"\n\nTime Complexity : "<<runtime<<"s";
}