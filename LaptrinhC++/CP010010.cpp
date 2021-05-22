#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,check=-1;
        cin>>n;
        int arr[100000];
        long long sumright=0,sumleft=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            
        }
       
       for(int i=0;i<n;i++)
        {
            
            if(i<n/2)
            {
                sumleft+=arr[i];

            }
            if(i>n/2)
            {
                sumright+=arr[i];
            }
        }
        
        long long b=sumright,a=sumleft;
       // cout<<a<<" "<<b<<" ";
        for (int  i = n/2; i >=0; i--)
        {
            if(a==b)
            {
                check=i+1;
                break;
            }
            else 
            {
                a-=arr[i-1];
                b+=arr[i];
            }
        }
        b=sumright;a=sumleft;
        if(check!=-1)
        {
            cout<<check<<" ";
        }
        int check1=-1;
        for (int  i = n/2; i <n; i++)
        {
            if(a==b)
            {
                check1=i+1;
                break;
            }
            else 
            {
                a+=arr[i];
                b-=arr[i+1];
            }
        }
        if(check1!=-1&&check!=check1)
        {
            cout<<check1<<" ";
        }
        if(check==-1&&check1==-1)
        {
            cout<<-1;
        }
        cout<<endl;        
    }
    
}
