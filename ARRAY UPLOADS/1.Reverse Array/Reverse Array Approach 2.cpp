#include<iostream>
using namespace std;

void SWAP(int *x,int *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void Reverse_Array(int arr[],int n)
{
    cout<<"Array After Reversing is ";
    int low=0,high=n-1;
    while(low<high)
    {
        SWAP(&arr[low++],&arr[high--]);
    }
 
}

void printList(int arr[],int n)
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
    cout<<"Array Before Reversing ";
    printList(arr,n);
    cout<<endl;
    Reverse_Array(arr,n);
    printList(arr,n);
    return 0;
}

// TC=O(n) [O(n)+O(n)+O(n)]
// SC=O(1)