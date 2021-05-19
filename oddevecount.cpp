#include<iostream>
using namespace std;
int main()
{
	int i,r,rev=0,e,digit_count=0,eve=0,odd=0;
	cout<<"enter the number :";
	cin>>i;
	e=i;
while(i)
	{
		r=i%10;
		i=i/10;
		digit_count++;
		if(r%2==0)
		{
			eve++;
		}
	    else
	    {
	    	odd++;
		}
    }
    cout<<"no:of even number's in given number are :"<<eve<<endl;
    cout<<"no:of odd  number's in given number are :"<<odd<<endl;
    cout<<"no:of digit's       in given number are :"<<digit_count;
    return 0;
}
