#include<iostream>
using namespace std;
int main()
{
	int  n,ans=1;
	cout<<"enter the number :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	cout<<"the factorial of the given number is :"<<ans;
	return 0;
}
