#include<bits/stdc++.h>
using namespace std;
int main()
{	int t;
	cin>>t;
	while(t--)
	{
	
	int n;
	cin>>n;
	for(int i=0;i<pow(2,n);i++)
	{
		int a[n];
		int x=i;
		for(int j=n-1;j>=0;j--)
		{
			if(x%2==0)
				{
					a[j]=0;
					x/=2;	
				}
			else 
			{
				a[j]=1;
				x/=2;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<" ";
	}
	cout<<endl;
	}
}
