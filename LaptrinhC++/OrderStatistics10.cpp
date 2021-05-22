
#include<bits/stdc++.h>
using namespace std;
int result[1004] = {0};
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, resultfinal = 0;
		cin>>n;
		int a[n+3];
		for(int i=1;i<=n;i++) 
			cin>>a[i];
		for(int i=1;i<=n;i++)
		{
			result[i]=1;
			for(int j=1;j<i;j++)
			{
				if(a[i]>a[j]) 
					result[i]=max(result[i], result[j] + 1);
			}
			resultfinal=max(resultfinal,result[i]);
		}
		cout<<resultfinal<<endl;
		for(int i = 0; i < 1004; i++) 
			result[i]=0;
	}
}

