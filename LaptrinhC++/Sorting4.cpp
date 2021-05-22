#include <iostream>
#include <set>
const long long MAX= 1e5+1;
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        set <int> sa;
        set <int> sb;
        set <int> tong;
        int x;
        for (int i = 0; i < a; i++)
        {   
            cin>>x;
            sa.insert(x);
            tong.insert(x);
        }
        for (int i = 0; i < b; i++)
        {
            cin>>x;
            sb.insert(x);
            tong.insert(x);
        }
        for (set <int>::iterator it = tong.begin(); it != tong.end(); it++)
        {
             cout<<*it<<" ";
        }
        cout<<"\n";
         for (set <int>::iterator it = tong.begin(); it != tong.end(); it++)
        {   
            if(sb.count(*it)==sa.count(*it))
                cout<<*it<<" ";
        }
        cout<<"\n";
    }
    
    
}
