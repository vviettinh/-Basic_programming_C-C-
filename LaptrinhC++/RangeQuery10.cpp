#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x;
	cin>>t;
	while(t--)
	{
		cin>>n;
		vector <int> arr;
		for(int i=0;i<n;i++)
		{	cin>>x;
			arr.push_back(x);
		}
		int count=0;int l=0,r=n-1;
		while(l<=r)
		{
			if(arr[l]<arr[r])
			{
				arr[l+1]+=arr[l];
				l++;
				count++;
			}
			else if(arr[l]>arr[r])
			{
				arr[r-1]+=arr[r];
				r--;
				count++;
			}
			else
			{
				l++;r--;
			}
			
		}
		cout<<count<<endl;
	
	}
}
