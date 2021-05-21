#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	transform(s.begin(),s.end(),s.begin(),::tolower);
	int l=s.length()-1;
	while(s[l]==' ')
	{
		l--;
	}
	string str;
	while(s[l]!=' ')
	{
		str.insert(0,1,s[l]);
		l--;
	}
	
	if(s[0]!=' ')
	{
		str.push_back(s[0]);
	}
	for(int i=1;i<l;i++)
	{
		if(s[i]!=' '&&s[i-1]==' ')
		{
			str.push_back(s[i]);
		}
	}
	cout<<str<<"@ptit.edu.vn"<<endl;
}
