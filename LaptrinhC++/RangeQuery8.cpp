#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{	
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long summax=-1e18,vitri=0,sumtemp=0;
		for(int i=0;i<=n-k;i++)
		{	
			sumtemp=0;
			for(int j=i;j<i+k;j++)
			{
				sumtemp+=arr[j];
			}
			if(summax<sumtemp)
			{
				summax=sumtemp;
				vitri=i;
			}
		}
		
		for(int i=vitri;i<vitri+k;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
}
