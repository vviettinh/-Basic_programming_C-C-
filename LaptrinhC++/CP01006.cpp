#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long arr[100005];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        long long sum=0,maxarr=sum-1;
        for(int i=0;i<n;i++)
        {   
            sum+=arr[i];
            if(sum>maxarr)
            {
                maxarr=sum;
            }
            if(sum<0)
            {
                sum=0;
            }
            
        }
        cout<<maxarr<<endl;
    }
}
