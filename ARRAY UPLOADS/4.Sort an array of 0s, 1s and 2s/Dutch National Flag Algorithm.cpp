#include<iostream>
using namespace std;

void SORT(int arr[],int n)
{
	int low=0,mid=0,high=n-1;
	while(mid<=high)
	{
		switch(arr[mid])
		{
			case 0:
			{
				swap(arr[low++],arr[mid++]);
				break;
			}
			case 1:
			{
				mid++;
				break;
			}
			case 2:
			{
				swap(arr[mid],arr[high--]);
				break;
			}			
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
	int arr[]={1,2,1,2,0,2,0,1,2,1,1,0};
	int n=sizeof(arr)/sizeof(arr[0]);
	SORT(arr,n);
	print(arr,n);
	return 0;
}


// TC=O(n) [O(n)+O(n)]
// SC=O(1)
