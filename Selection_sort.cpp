
//This is code for sorting an array using selection sort algorithm

/* 
* The selection sort algorithm sorts an array by repeatedly finding 
the minimum element  from unsorted part and putting it at the beginning.    

* Time complexity : O(n²)
* Auxiliary space : O(1)
* In-Place sorting : Yes
* Stable : No
*/


#include<iostream>
using namespace std;
#define size 10

void selection_sort(int *a)
{
    for(int i=0;i<size-1;i++)
    {
        int key = i;
        for(int j=i+1;j<size;j++)
        {
            if(a[key]>a[j])
                key = j;
        }
        int temp = a[key];
        a[key] = a[i];
        a[i] = temp;
    }
    for(int i=0;i<size;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int *a = new int[size];
    cout<<"enter the 10 elements of an array : ";
    for(int i=0;i<size;i++)
        cin>>a[i];
    selection_sort(a);
    return 0;
}


/* INPUT : 0 4 6 1 8 2 9 3 7 5
* OUTPUT : 0 1 2 3 4 5 6 7 8 9 
*/
