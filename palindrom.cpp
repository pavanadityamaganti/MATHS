#include<iostream>
using namespace std;
int main()
{
	int i,r,rev=0,e;
	cout<<"enter the number :";
	cin>>i;
	e=i;
while(i)
	{
		r=i%10;
		i=i/10;
		rev=rev*10+r;
	}
	if(e==rev)
	{
		cout<<("it is a palindrom");
	}
	else
	{
		cout<<("it is not a palindrom");
	}
}
