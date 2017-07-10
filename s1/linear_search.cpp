#include<stdio.h>

void linearsearch(int x[8], int y[4], int m, int n)
{
	int i, j;
	bool c;
	for(i=0; i<n; i++)
	{
		c = 0;
		printf("\nsearch query[%d] : ",y[i]);
		for(j=0;j<m;j++)
		{
			if(y[i]==x[j])
			{
				printf("found at position[%d] ",j);
				c=1;
			}
		}
		if(c==0)
			printf("not found!");
	}
}

int main()
{
	
	int a[]={1,2,3,4,5,6,7,8,15,31,77,101,43,2};
	int q[]={0,2,5,8,52,79,11};
	int a_size=sizeof(a)/sizeof(a[0]);
	int q_size=sizeof(q)/sizeof(q[0]);

	linearsearch(a,q,a_size,q_size);
	return 0;
}
