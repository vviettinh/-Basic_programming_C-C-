#include<iostream>
using namespace std;

int main()
{
        const int MaxN=1e5+5;
        int n;
        cin>>n;
        int a[MaxN],count[MaxN];
        for (int i = 0; i < n; i++)
        {   
            int b;
            cin>>b;
            a[b]++;
            count[a[b]]++;
        }
        int q;
        cin>>q;
        for (int  i = 0; i < q; i++)
        {   
            char c;
            cin>>c;
            int b;
            cin>>b;
            if(c=='+')
                {
                    a[b]++;
                    count[a[b]]++;
                }
            else if(c=='-')
            {
                    a[b]--;
                    count[a[b]]--;
            }
            if(count[8]>0 || count[4]>1 || (count[6]>0 && count[2]>1) || (count[4]>0 && count[2]>2))
                cout<<"YES\n";
            else
                cout<<"NO\n";
            
            

        }
}      
        
        
       
        
        
        
    
