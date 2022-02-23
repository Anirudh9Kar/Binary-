#include<iostream>
using namespace std;

void Cyclically(int arr[],int n)
{
    int temp=arr[n-1];
    int i;
    for(i=n-1;i>0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=temp;
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    Cyclically(arr,n);
    print(arr,n);
    return 0;
}



// T.C O(N)        O(n)+O(n)       
// S.C O(1)