#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {		
    	string s;
    	cin>>s;
    	int check=0,temp=-1;
    	for(int i=1;i<s.size();++i)
    	{
    		if(s[i]<s[i-1])
    		{
				temp=i;
    			check=1;
    		}
		}
		if(check)
		{	int maxs=temp;
			for(int i=temp+1;i<s.size();i++)
				{
					if(s[i]<s[temp-1]&&s[maxs]<s[i])
					{
						maxs=i;
					}
				}
			char x=s[maxs];
			s[maxs]=s[temp-1];
			s[temp-1]=x;	
			cout<<s<<endl;
		}
		else cout<<-1<<endl;
    }
}
