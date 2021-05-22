#include <iostream>
#include <math.h>
using namespace std;
bool SoNguyenTo(long long n)
{
    if(n<2) return false;
    else if(n==2)   return true;
    else if(n%2==0) return false;
    else
    {
        for(int i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
            {
                return false;
            }
        }
        return true;
    }
}
bool TongChuSo(long long n)
{   
    long  long s=0;
    while(n>0)
    {
        if(!SoNguyenTo(n%10))   return false;
        s+=n%10;    
        n/=10;
    }
    if(SoNguyenTo(s))
    {
        return true;
    }
    else return false;

}
int main()
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(b<a)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        int answer=0;
        
        
        for(long long i=a;i<=b;i++)
        {
            if(TongChuSo(i))
            {   
                if(SoNguyenTo(i))
                    answer++;
            }
        }
        cout<<answer<<endl;   
    }
    
}
