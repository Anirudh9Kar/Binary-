#include<bits/stdc++.h>
using namespace std;

void Intersection(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	cout<<"Intersection of the two arrays ";
	while(i<n and j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i]>arr2[j])
		{
			j++;
		}
		else 
		{
			cout<<arr1[i++]<<" ";
			j++;
		}
	}
}

void Union(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	cout<<"Union of the two arrays ";
	while(i<n and j<m)
	{
		if(arr1[i]<arr2[j])
		{
			cout<<arr1[i++]<<" ";
		}
		else if(arr1[i]>arr2[j])
		{
			cout<<arr2[j++]<<" ";
		}
		else 
		{
			cout<<arr1[i++]<<" ";
			j++;
		}
	}

	while(i<n)
	{
		cout<<arr1[i++]<<" ";
	}
	while(j<m)
	{
		cout<<arr2[j++]<<" ";
	}
}

int main()
{
	int arr1[]={1,2,3,4,5,6,7,8};
	int arr2[]={4,5,6,7,8,9};
	// int arr1[] = {1,2,2,2,3,4};
	// int arr2 []= {2,2,2,4,6,7,8};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	Union(arr1,arr2,n,m);
	cout<<endl;
	Intersection(arr1,arr2,n,m);
	return 0;
}


// T.C O(N+M) O(N+M)       
// S.C O(1)