#include<bits/stdc++.h>
using namespace std;
// Note: Order of elements is not important here.
void Rearrange(int arr[],int n)
{
	int low=0,high=n-1;
	while(low<=high)
	{
		if(arr[low]<0 and arr[high]<0)
		{
			low++;
		}
		else if(arr[low]>0 and arr[high]<0)
		{
			swap(arr[low],arr[high]);
			low++;high--;
		}
		else if(arr[low]>0 and arr[high]>0)
		{
			high--;
		}
		else
		{
			low++;
			high--;
		}
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
	int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, 11};
	int n=sizeof(arr)/sizeof(arr[0]);
	Rearrange(arr,n);
	print(arr,n);
	return 0;
}

// TC=O(n)                          O(n)+O(n)
// SC=O(1)
