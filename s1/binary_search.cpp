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

int main()
{
	int a[]={2,4,6,8,10,12,14,16,18,20};
	int q=24;
	int a_size=sizeof(a)/sizeof(a[0]);

	clock_t t;
   	t = clock();
    	
	search(a,a_size,q);
	
    t = clock() - t;
    double runtime = ((double)t)/CLOCKS_PER_SEC;
 
    cout<<"\n\nTime Complexity : "<<runtime<<"s";

	return 0;
}