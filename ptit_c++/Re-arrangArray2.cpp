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
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int i=0;
		while(i<n)
		{
			if(a[i]==0)
			{
				for(int j=i+1;j<n;j++)
				{
					if(a[j]!=0)
					{
						long long temp=a[i];
						a[i]=a[j];
						a[j]=temp;
						break;
					}
				}
				
			}
			i++;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}
