#include<iostream>
using namespace std;

void SORT(int arr[],int n)
{
	int cnt0=0,cnt1=0,cnt2=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==0)
			cnt0++;
		if(arr[i]==1)
			cnt1++;
		if(arr[i]==2)
			cnt2++;
	}
	int i=0;
	while(cnt0>0)
	{
		arr[i++]=0;
		cnt0--;
	}
	while(cnt1>0)
	{
		arr[i++]=1;
		cnt1--;
	}
	while(cnt2>0)
	{
		arr[i++]=2;
		cnt2--;
	}
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
	int arr[]={1,2,1,2,0,2,0,1,2,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	SORT(arr,n);
	print(arr,n);
	return 0;
}

// TC=O(n) [O(n)+O(n)]
// SC=O(1)
