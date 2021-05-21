#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool songuyento(ll n)
{
	if(n<2)	return false;
	for(ll i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return false;
	}
	return true;
}
int main()
{
	ll a,b;
	cin>>a>>b;
	if(a>b)
	{
		ll temp=a;
		a=b;
		b=temp;
	}
	
	for(ll i=a;i<=b;i++)
	{
		if(songuyento(i))
		{
			cout<<i<<" ";
		}
		
	}
	cout<<endl;
}
