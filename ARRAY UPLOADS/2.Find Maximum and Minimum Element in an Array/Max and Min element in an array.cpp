#include<bits/stdc++.h>
using namespace std;

void MAX_MIN(int arr[],int n)
{
    int min=INT_MAX;
    int max=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
            max=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
            min=arr[i];
    }
    cout<<"The Maximum element in the array is "<<max<<" and the Minimum element in the array is "<<min;
}

int main()
{
    int arr[]={1,2,44,11,3,66,3,88};
    int n=sizeof(arr)/sizeof(arr[0]);
    MAX_MIN(arr,n);
    return 0;
}

// TC=O(n) [O(n)+O(n)]
// SC=O(1)
