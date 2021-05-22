#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,k,x;
        cin>>n>>m>>k;
        vector <long long> a,b,c;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin>>x;
            b.push_back(x);
        }
        for (int i = 0; i < k; i++)
        {
            cin>>x;
            c.push_back(x);
        }
        bool check=true;
         int i = 0, j = 0, k1 = 0;
    while (i < n && j < m && k1 < k) 
    {
        if (a[i] == b[j] && b[j] == c[k1]) 
        {
            cout << a[i] << " ";
            i++; j++; k1++;
            check = false;
        }
        else if (a[i] < b[j]) i++;
        else if (b[j] < c[k1]) j++;
        else k1++;
    }
        if(check)
        {
            cout<<"NO";
        }
        cout<<endl;
    }
}


