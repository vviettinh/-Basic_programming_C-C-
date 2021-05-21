#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin>>test;
	while(test--)
	{
		int a,m,temp=0;
		cin>>a>>m;
		for(int i=0;i<m;i++)
		{
			if(i*a%m==1)
			{
				cout<<i<<endl;
				temp=1;
				break;
			}
		}
		if(temp==0)	cout<<-1<<endl;
	}
}
