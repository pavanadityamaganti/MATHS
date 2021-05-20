#include<iostream>
using namespace std;
int main()
{
	int n,fac=1,res=0,count=0;
	cout<<"enter the number :";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fac=fac*i;
	}
	cout<<"the factorial value of the given number is :"<<fac<<endl;
	while(fac!=0)
	{
		res=fac%10;
		fac=fac/10;
		if(res==0)
		{
			count+=1;
		}
		else
		{
			break;
		}
		
	}
	cout<<"Number of tailing zero's in factorial of the given number are :"<<count;	
	return 0;
}
