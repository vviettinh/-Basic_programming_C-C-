#include<bits/stdc++.h>
using namespace std;
void result(int arr[],int n,int l,int r)
{
		int m=0,maxa=arr[l];
		for(int i=l;i<=r;i++)
		{
			if(maxa<arr[i])
			{
				m=i;
				maxa=arr[i];
			}
		}
		
		for(int i=l;i<=m-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				cout<<"No";
				return;
			}
		}
		for(int i=m;i<r;i++)
		{
			if(arr[i]<arr[i+1])
			{
				cout<<"No";
				return;
			}
		}
		cout<<"Yes";
		
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,l,r;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cin>>l>>r;
		result(arr,n,l,r);
		cout<<endl;
	}
}

