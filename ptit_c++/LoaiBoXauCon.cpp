#include<bits/stdc++.h>
using namespace std;
void delete_str(string s1,string s2)
{
	int l=s2.length();
	int vitri=s1.find(s2);
	while(vitri!=-1)
	{
		s1.erase(vitri,l);
		vitri=s1.find(s2,vitri+1);
	}
	cout<<s1<<endl;
}
int main()
{
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	delete_str(s1,s2);
	
}
