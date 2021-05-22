#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		int n;
		cin>>n;
		set <int> arr;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<s.size();j++)
			{	int x =s[j]-'0';
				arr.insert(x);
			}
		}
		for(set <int>:: iterator it=arr.begin();it!=arr.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<endl;
	}
}
