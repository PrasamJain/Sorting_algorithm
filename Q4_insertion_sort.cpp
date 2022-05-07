//Q4 and Q9 are same but in Q4 we write simple insertion sort 
//in Q9 we insert an element in sorted array using insertion sort.

#include<iostream>
//#include"array_rdm.h"
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
	//rdm(n);     //Q4 logic
	for(i=0;i<n;i++)  //Q9 logic        
		cin>>a[i];
	cout<<"Enter the element to be insert : ";
	cin>>a[i];	
	n++;
	insertion_sort(a,n);
	delete[] a;
	return 0;
}
