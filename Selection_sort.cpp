
//This is code for sorting an array using selection sort algorithm
//Time complexity : O(n²)


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


