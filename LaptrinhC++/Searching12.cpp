#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,c,maxa=0;
		cin>>n>>x;
		set <int> arr;
		for(int i=0;i<n;i++)
		{
			cin>>c;
			arr.insert(c);
		}
		int check=0;
		for(set<int>:: iterator it=arr.begin();it!=arr.end();it++)
		{
			if(arr.find(x+*it)!=arr.end())
			{
				check=1;
				break;
			}
		}
		if(check)
		{
			cout<<1;
		}
		else cout<<-1;
		cout<<endl;
		
	}
}
