#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long n;
		cin>>n;
		long long a,b[n];
		for(long long i=0;i<n;i++)
		{
			b[i]=-1;
		}
		for(long long i=0;i<n;i++)
		{
			cin>>a;
			
			if(a<n&&a>=0)
			{
				b[a]=a;
			}
		}
		for(long long i=0;i<n;i++)
		{	
			if(b[i]!=i)
			{
				cout<<-1<<" ";
			}
			else cout<<i<<" ";
		}
		cout<<endl;
	}
}
