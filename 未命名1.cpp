#include <iostream>
#include <cmath>
#include <cstdio> 
int s[1000000];
int a[1100000];
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	
	int max=s[0];
	for(i=0;i<n;i++)
	{   
	    double sum=0;
	
		for(j=i;j<n;j++)
		{
			
			sum+=s[j];
			if(sum>=max)
			{
				max=sum;
			}
		}	
		
	}
	cout<<max;
	
	
	
	
	return 0;
}

