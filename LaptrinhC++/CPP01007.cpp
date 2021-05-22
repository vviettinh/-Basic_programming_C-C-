#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[1005],b[1005];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int check=1,k=0;
        for(int i=0;i<n;i++)
        {   check=1;
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<=arr[j])
                {   
                    check=0;
                    break;
                }
            }
            if(check==1)
            {
                b[k++]=arr[i];
            }
        } 
        b[k++]=arr[n-1];
        sort(b,b+k);
        for (int i = k-1; i > 0; i--)
        {
            cout<<b[i]<<" ";
        }
        
        cout<<endl;
    }
    
    
}
