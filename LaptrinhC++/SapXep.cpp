#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,t,x=0,y=0;
    cin>>n;
    long long le[100000],chan[100000];
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(i%2==0)
            le[x++]=t;
        else chan[y++]=t;
    }
    sort(le,le+x);
    sort(chan,chan+y);
    if(n%2==1)
    {
        for(int i=0;i<y;i++)
        {
            cout<<le[i]<<" "<<chan[y-i-1]<<" ";
        }
        cout<<le[x-1]<<endl;
    }
    else
    {
        for(int i=0;i<y;i++)
        {
            cout<<le[i]<<" "<<chan[y-i-1]<<" ";
        }
        cout<<endl;
    }
}