#include<bits/stdc++.h>
using namespace std;
int arr[1000006];
void songuyento()
{	arr[0]=0;arr[1]=0;
	for(int i=2;i<1000006;i++)
	{
		arr[i]=1;
	}
	for(int i=2;i<1000006;i++)
	{	
		if(arr[i]==0)	continue;
		for(int j=i*2;j<1000006;j+=i)
		{
			arr[j]=0;
		}
	}
}
int main()
{	
	
	int t;
	cin>>t;
	songuyento();
	while(t--)
	{
		int n,check=0;
		cin>>n;
		for(int i=2;i<n;i++)
		{
			if(arr[i]==1&&arr[n-i]==1)
			{
				cout<<i<<" "<<n-i;
				check=1;
				break;
			}
		}
		if(check==0)
		{
			cout<<-1;
		}
		cout<<endl;
	}
	
	
}
