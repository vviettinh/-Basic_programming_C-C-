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
        int l=s.size();
        if(l==1&&s[l-1]=='0')
        {
            cout<<4;
        }
        else
        {
            int sodoi=(s[l-2]-'0')*10+(s[l-1]-'0');
            if(sodoi%4==0)
            {
                cout<<4;
            }
            else 
            {
                cout<<0;
            }
            
        }
       cout<<endl;
    }
}
