#include<bits/stdc++.h>
using namespace std;
vector<int> Inter;
void Intersection(int arr1[],int arr2[],int n,int m)
{
	int i=0,j=0;
	int count=0;
	cout<<"Intersection of the two arrays with duplicate elements in them is ";
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
			if(Inter.empty() or Inter[count-1]!=arr1[i])//SO THAT DUPLICATES WONT ENTER
			{
				Inter.push_back(arr1[i]);
				count++;
			}
			i++;j++;
		}
	}
	for(int i=0;i<Inter.size();i++)
	{
		cout<<Inter[i]<<" ";
	}
}

void Union(int arr1[],int arr2[],int n,int m)
{	
        cout<<"Union of the two arrays with duplicate elements in them is ";
        unordered_map<int,int> map;//SO THAT DUPLICATES WONT ENTER
        for(int i=0;i<n;i++)
        {
            map[arr1[i]]++;
        }
        
        for(int j=0;j<m;j++)
        {
            map[arr2[j]]++;
        }
        
        int count=map.size();
        for(int i=1;i<=count;i++)
        {
            cout<<i<<" " ;  
        }
}

int main()
{	
	// int arr1[]={1,2,3,4,5,6,7,8};
	// int arr2[]={4,5,6,7,8,9};
	int arr1[] = {1,2,2,2,3,4};
	int arr2 []= {2,2,2,4,6,7,8};
	int n=sizeof(arr1)/sizeof(arr1[0]);
	int m=sizeof(arr2)/sizeof(arr2[0]);
	Union(arr1,arr2,n,m);
	cout<<endl;
 	Intersection(arr1,arr2,n,m);
	return 0;
}


// T.C O(N+M) O(N+M)       
// S.C O(N+M) O(N+M+N)