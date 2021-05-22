#include<bits/stdc++.h>
using namespace std;
long long summax(long long a[], int n)
{
	long long sumcon=a[0];
	long long sumto=a[0];
	for(int i=1;i<n;i++)
	{	if(a[i]>sumcon+a[i])
			sumcon=a[i];
		else
		{
			sumcon+=a[i];
		}
		if(sumcon>sumto)
			sumto=sumcon;
	}
	return sumto;
}
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int n;
		cin>>n;
		long long a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<< summax(a,n) <<endl;
	}
}
