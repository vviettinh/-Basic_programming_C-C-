#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		long long n,k;
		cin>>n>>k;
		long long s=0;
		if(n==0||k==0)
			cout<<0<<endl;
		else 
		{
			for(int i=1;i<=n;i++)
			{
				s+=i%k;
			}
			cout<<s<<endl;
		}
		
	}
}
