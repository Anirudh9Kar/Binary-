#include<iostream>
using namespace std;
// Note: Order of elements is not important here.
void Rearrange(int arr[],int n)//partition appraoch of quick sort
{
	int j=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			if(i!=j)
			{
				swap(arr[i],arr[j]);
			}
			j++;
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
