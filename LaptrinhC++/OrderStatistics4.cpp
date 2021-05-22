#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		long long arr[n], tong[n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		tong[0] = arr[0]; 
		tong[1] = max(arr[0], arr[1]);
		for(int i = 2; i<n;i++) 
			tong[i] = max(tong[i-1],tong[i-2]+arr[i]);
		cout<<tong[n-1]<<endl;
	}
}
