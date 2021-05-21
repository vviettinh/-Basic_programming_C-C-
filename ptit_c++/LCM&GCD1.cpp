#include <iostream>

using namespace std;
long long UCLN1(long long a , long long b)
{
    int temp;
    while(!b==0)
    {
        temp=a%b;
        a=b;
        b=temp;
    }  
    return a;
}
int main()
{
    int test;
    cin>>test;
    while(test--)
    {
        long long a,b;
        cin>>a>>b;
        long long x=UCLN1(a,b);
        cout<<long (a*b)/x<<" "<<x<<endl;

    }
}
