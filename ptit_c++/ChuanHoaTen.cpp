#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int l=s.length();
	while(s[l-1]==' ')
	{
		l--;
	}
	int x=l;
	string str;
	while(s[x-1]!=' ')
	{
		
		x--;
	}
	if(s[0]!=' ')
	{
		str.insert(0,1,s[0]-32);
	}
	int k=x;
	while(s[x-1]==' ')
	{
		
		x--;
	}
	for(int i=1;i<x;i++)
	{
		if(s[i]==' '&&s[i-1]!=' '&&i!=x-1)
		{
			str.push_back(' ');
		}
		else if(s[i-1]==' '&&s[i]!=' ')
		{
			str.push_back(s[i]-32);
		}
		else if(s[i]!=' ')
		{
			str.push_back(s[i]);
		}
	}
	
	str.push_back(',');
	str.push_back(' ');
	for(int i=k;i<l;i++)
	{
		str.push_back(s[i]-32);
		
	}
	cout<<str;
}
