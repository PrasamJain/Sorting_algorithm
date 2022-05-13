#include<iostream>
#include<stdlib.h>
using namespace std;

int *a = new int [10];
int rdm(int n)
{
    for(int i=0;i<n;i++)
        a[i] = rand() % 100;
    cout<<"Array : ";
    for(int i=0;i<n;i++)
    	cout<<a[i]<<" ";
    cout<<endl;
}

