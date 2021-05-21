#include <iostream> 
typedef long long ll;
using namespace std;
ll  UNLN(ll a, ll b)
{
    ll temp;
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
        ll n;
        cin>>n;
        ll x=2;
        for (ll i = 3; i <=n; i++)
        {
            x=long (x*i)/UNLN(x,i);
        }
        cout<<x<<endl;
    }
    
    
}
