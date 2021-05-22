#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long x;
        vector <long long> a,b,c;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(x%3==0&&x!=0)
            {
                a.push_back(x/3);
            }
             if(x%4==0&&x!=0)
            {
                b.push_back(x/4);
            }
             if(x%5==0&&x!=0)
            {
                c.push_back(x/5);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        int temp=0;
        int i=0,j=0,k=0;
        int n1=a.size(),m=b.size(),l=c.size();
       while(i<n1&&j<m&k<l)
        {
            if (a[i]==b[j]&&b[j]==c[k])
            {
                temp=1;
                break;
            }
            if(a[i]<b[j]||a[i]<c[k])  i++;
            if(b[j]<c[k]||b[j]<a[i])  j++;
            if (c[k]<a[i]||c[k]<b[j])  k++;
        }
        if(temp==1)
            cout<<"YES";
        else cout<<"NO";
        cout<<endl;
        
    }
    
    
}
