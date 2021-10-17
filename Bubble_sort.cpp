// Bubble sort algorithm using c/c++.


/* Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.

* Basic Steps:
            1. Move from left to right end.
            2. Compare the two adjacent elements and swap them if needed.

* Worst and Average Case Time Complexity: O(n2). 
  Worst case occurs when array is reverse sorted.

* Best Case Time Complexity: O(n). 
  Best case occurs when array is already sorted.

* Auxiliary Space:   O(1)
* Sorting In Place:  Yes
* Stable:  Yes
*/

/*  SOURCE CODE  */

#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	int a[n];
	cout<<"Enter the elements of array"<<endl;
	for(int i=0;i<n;i++)
		cin>>a[i];
	int flag=0;
	for(int i=0;i<n-1;i++)
	{
		flag = 0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
				flag = 1;
			}
		}
		if(flag == 0)
			break;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}



/* INPUT :-
          Enter the size of array : 10
          Enter the elements of array : 5 15 2 4 51 9 20 1 41 12
   OUTPUT :-
          1 2 4 5 9 12 15 20 41 51
*/
