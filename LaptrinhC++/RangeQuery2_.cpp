#include <bits/stdc++.h>
using namespace std;
void process()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	int l, r;
	cin >> l >> r;
	vector<int> s;
	for(int i = l; i <= r; i++) s.push_back(a[i]);
	int m = s[0], k;
	for(int i = 0; i < s.size(); i++) 
		if(s[i] > m) 
			m = s[i];
	for(int i = l; i <= r; i++)
	{
		if(a[i] == m)
		{
			k = i;
			break;
		}
	}
	for(int i = l; i <= k - 1; i++)
	{
		if(a[i] > a[i + 1])
		{
			cout << "No" << endl;
			return;
		}
	}
	for(int i = k; i < r; i++)
	{
		if(a[i] < a[i + 1])
		{
			cout << "No" << endl;
			return;
		}
	}
	cout << "Yes" << endl;
}
int main()
{
	
	int t;
	cin >> t;
	while(t--)
	{
		process();
	}
}

