#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow(ll x,ll y,ll po)
{
	if(y==0) return 1;
	if(y==1) return x;
	ll p=pow(x,y/2,po)%po;
	if(y%2==1)
	{
		return (((p*p)%po)*x)%po;
	}
	else return (p*p)%po;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		ll x,y,p;
		cin>>x>>y>>p;
		cout<<pow(x,y,p)<<endl;
	}
}
