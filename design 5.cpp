#include<iostream>
using namespace std;
int main()
{
	int i,j,k;
	for(i=5;i>=0;i--)
	{
		for(k=5;k>=i;k--)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}

