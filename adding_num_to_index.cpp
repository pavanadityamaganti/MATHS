#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],q;
	cin>>n>>q;
	for(int i=0;i<=n;i++)
	{
		cout<<"enter the element :";
		cin>>arr[i];
	}
	while(q!=0)
	{
		int l,r,a,ans;
		cin>>l>>r>>a;
		for(int i=l;i<=r;i++)
		{
			arr[i]=arr[i]+a;
	    }
		for(int i=0;i<=n;i++)
		{
			cout<<arr[i];
		}
	}
	q--;
return 0;	 
}
