#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        if(n==1)
            cout<<"YES\n";
        else
        {
            int m=n;
            sort(a,a+n);
            
            for(int i=0;i<n;i++)

            {
                for (int j = i+1; j < n; j++)
                {
                    if(a[i]==a[j])
                    {
                        for(int k=j;k<n;k++)
                        {
                        	a[k]=a[k+1];
						}
						n--;
                    }
                }              
            }
            
            int temp=1;5
            
            for(int i=0;i<n;i++)
            {
                if(abs(a[i]-a[i+1])>1&&i+1<n)
                {
                    temp=0;
                    break;
                }

            }
            if(temp==0)
                cout<<"NO\n";
            else
            {
                cout<<"YES\n";
            }
            

        }
        
        
    }
}