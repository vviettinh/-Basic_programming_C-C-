#include<bits/stdc++.h>
using namespace std;
bool sortstring(string a,string b)
{
	if(a+b>b+a)
	{
		return true;
	}
	return false;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		vector <string> str;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			str.push_back(s);
		}
		sort(str.begin(),str.end(),sortstring);			
		for(int i=0;i<n;i++)
		{
			cout<<str[i];
		}
		cout<<endl;
	}
}
