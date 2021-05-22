#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,check=1,c,x,z=-1;
        cin>>n;
        int minb=n;
        map <int,int> arr,b;
        for (int i = 0; i < n; i++)
        {
            cin>>c;
            x=c;
            arr[c]++;
            if(arr[c]==1)
                b[c]=i;
            else if(arr[c]==2)
            {   
                if(b[c]<minb)
                {
                    minb=b[c];
                    //cout<<z<<" ";
                    z=c;
                }
                check=0;
            }
        }
        if(check==1)
             cout<<"NO";
        else
        {
            cout<<z;
        }
        cout<<endl;
        
        
    }
}
