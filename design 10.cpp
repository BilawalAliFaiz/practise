#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l,m,n;
	for(i=10;i>=1;i--)
	{
		for(k=10;k>=i;k--)
		{
			cout<<" ";
		}
		for(j=1;j<=i;j++)
		{
			cout<<"* ";
		}
		cout<<"\n";
}
}
