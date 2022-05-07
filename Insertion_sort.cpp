//In insertion sort we first take one element, iterate it through the sorted array. 

//It is not appropriate for large data sets as the time complexity of insertion sort in the average case and worst case is O(n^2).

//But in best case it take O(n) time i.e already sorted array.

//It is STABLE sorting technique.

//___________________________________________________________________________________________________________________________________________________________________

#include<iostream>
using namespace std;

void insertion_sort(int *a,int n)
{
	for(int i=1;i<n;i++)
	{
		int temp = a[i],j;
		for(j=i-1 ; j>=0 && temp < a[j] ;j--)
		{
				a[j+1] = a[j];
		}
		a[j+1] = temp;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}

int main()
{
	int n,x,i;
	int *a = new int [20];
    	cout<<"Size : ";
    	cin>>n;
	cout<<"Enter the elements : ";
	for(i=0;i<n;i++)          
		cin>>a[i];
	
	insertion_sort(a,n);
	
	delete[] a;
	return 0;
}
