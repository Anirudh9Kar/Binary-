#include<iostream>
using namespace std;

void Reverse(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
}
void printArray(int arr[],int n)
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
    cout<<"Array after reversing is ";
    printArray(arr,n);
    Reverse(arr,n);
    cout<<endl;
    cout<<"Array after reversing is ";
    printArray(arr,n);
    return 0;
}

// TC=O(n/2) [O(n/2)+O(n)]
// SC=O(1)