#include<iostream>
using namespace std;
//We are printing the array from reveres order thats it .
void Reverse_Array(int arr[],int n)
{
	cout<<"Array after Reversing ";
    for(int i=n-1;i>=0;i--)
        cout<<arr[i]<<" ";
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before Reversing ";
    for(int i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
    }
    cout<<endl;
    Reverse_Array(arr,n);
    return 0;
}
// TC=O(n) [O(n)+O(n)]
// SC=O(1)
