#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b )
{
	int temp=a;
	a=b;
	b=temp;
}
int main()
{
	int t,n,x	;
	cin>>t;
	while(t--)
	{
		cin>>n>>x;
		int arr[n],b[n],c[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			b[i]=abs(x-arr[i]);
			c[i]=i;
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
					swap(b[j],b[j+1]);
					swap(c[j],c[j+1]);
				}
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<arr[c[i]]<<" ";
		}
		cout<<endl;
	}
}
