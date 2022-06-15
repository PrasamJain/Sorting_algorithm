//C++ Code for QuickSort.
//Note : Please import "array_rdm.h" hearder file for randomly generate array numbers.

//taking last element as pivot.



#include<iostream>
#include"array_rdm.h"
using namespace std;

int partition(int *a,int lb,int ub)
{
	int pivot = a[ub];
	int i = lb-1;
	for(int j=lb ; j<ub ; j++)
	{
		if(a[j] < pivot)
		{
			i++;
			int temp = a[i];
			a[i] = a[j];
			a[j] = temp;
		}
	}
	int temp = a[i+1];
	a[i+1] = a[ub];
	a[ub] = temp;
	return i+1;
}

void quick_sort(int *a,int lb,int ub)
{
	static int n=ub,i=0;
	if(lb<ub)
	{
		int key = partition(a,lb,ub);
		cout<<"Pass "<<++i<<" : ";
		for(int i=0;i<=n;i++)
			cout<<a[i]<<" ";
		cout<<endl;
		quick_sort(a,lb,key-1);
		quick_sort(a,key+1,ub);
	}

}

int main()
{
	int n;
    	cout<<"Size : ";
    	cin>>n;
	rdm(n);
	quick_sort(a,0,n-1);
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	delete[] a;
	return 0;
}
