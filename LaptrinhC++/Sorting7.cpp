#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i]=a[i];
		}
		sort(b,b+n);
		int first=0,end=n-1;
		for(int i=0;i<n;i++)
		{
			if(a[i]!=b[i])
			{
				first=i;
				break;
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			if(a[i]!=b[i])
			{
				end=i;
				break;
			}
		}
		cout<<first+1<<" "<<end+1<<endl;
	}
}
