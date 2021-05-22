#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c;
        cin>>n;
        multiset <int> arr;
        for(int i=0;i<n;i++)
        {   
            cin>>c;
            arr.insert(c);
        }
        int check=0;
        for(multiset <int>:: iterator it=arr.begin();it!=arr.end();it++)
        {   int s=*it;
            if(arr.count(s)>n/2)
            {
                cout<<*it<<endl;
                check=1;
                break;
            }
        }
        if(check==0)
        {
            cout<<"NO"<<endl;
        }
        
    }
    
    
}
