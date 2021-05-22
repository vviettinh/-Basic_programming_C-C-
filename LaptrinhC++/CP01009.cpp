#include <iostream>
#include<map>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        map <int> arr;
        for(int i=0;i<n;i++)
        {   cin>>x;
            arr[x]++;
        }
        sort(arr.begin(),arr.end());
        for(map <int> :: iterator it= arr.begin();it!=arr.end();it++)
        {
            for(int i=0;i<arr[*it];i++)
            {
                cout<<*it<<" ";
            }
        }
        cout<<endl;
    }
    
    
}
