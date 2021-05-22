#include<bits/stdc++.h>
using namespace std;
int findkey(vector <int> arr,int n, int x)
{
	int l=0,r=n-1,res,mid;
	while(l<r)
	{
		mid=(l+r)/2;
		if(arr[mid]<x)
		{
			l=mid+1;
		}
		else 
		{
			r=mid;
			
		}
	}
		if(arr[l]==x)
		{
			
			return l;
		}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		vector <int> a;
		for(int i=0;i<n;i++)
		{
			cin>>m;
			a.push_back(m);
		}
		int x,k;
		cin>>k>>x;
		a.push_back(x);
		sort(a.begin(),a.end());
		int y=findkey(a,n,x);
		for(int i=y-k/2;i<y;i++)
		{
			cout<<a[i]<<" ";
		}
		
		for(int i=y+1;i<=y+k/2;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
