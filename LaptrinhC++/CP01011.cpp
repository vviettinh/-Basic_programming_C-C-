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
        int arr[100005];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int minarr=arr[1]-arr[0];
        for (int i = 2; i < n; i++)
        {
            minarr=min(minarr,arr[i]-arr[i-1]);

        }
        cout<<minarr<<endl;
        
        

    }
    

}
