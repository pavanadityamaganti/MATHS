#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,arr[n],ans,l,r;
	cin>>n>>l>>r;
	for (int i=0;i<=n-1;i++)
	{
		cin>>arr[i];
	}
	for(int i=l;i<=r;i++)
	{
	    ans=ans+arr[i];
	}
    cout<<ans;
return 0;
}
