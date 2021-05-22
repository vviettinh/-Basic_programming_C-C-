#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> arr;
	arr.push_back(2);
	arr.push_back(2);
	arr.push_back(3);
	arr.push_back(5);
	int check=1;
	for(int i=7;i<10000;i+=2)
	{
		check=1;
		for(int j=1;j<arr.size();j++)
		{
			if(i%arr[j]==0)
			{
				check=0;
				break;
			}
		}
		if(check)
		{
			arr.push_back(i);
			
		}
	}
	int t;
	cin>>t;
	while(t--)
	{
		int l=0,r=0,left,right;
		cin>>l>>r;
		for(int i=1;i<arr.size();i++)
		{
			if(l<=arr[i])
			{
				left=i;
				
				break;
			}
		}
		for(int i=1;i<arr.size();i++)
		{
			if(r<arr[i])
			{
				right=i-1;
				break;
			}	
		}
		cout<<right-left+1<<endl;
	}
}
