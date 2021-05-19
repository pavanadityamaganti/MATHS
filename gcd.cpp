  #include<iostream>
  using namespace std;
  int main()
  {
  	int n1,n2;
  	cout<<"enter the numbers";
  	cin>>n1;
  	cin>>n2;
  	while(1)
  		{
  			if(n1<n2)
  			{
  				swap(n1,n2);
  		    }
  			else
			{
			  	n1=n1%n2;
		    }	
		    if(n1==0)
			{
				break;
			}
	    }
	    cout<<"the GCD of given number's is :"<<n2;
  }
	
