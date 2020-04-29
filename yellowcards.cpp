#include<bits/stdc++.h>
#include<cstdlib>
using namespace std;
 
int main()
{
 
	int a1,a2,k1,k2,n,m1,m2=0;
	cin>>a1>>a2>>k1>>k2>>n;
	m1=n-((a1*(k1-1))+(a2*(k2-1)));
	if(m1<0)
	{
   	 	m1=0;
	}
	if (k1 > k2) 
	{
		swap(k1, k2);
		swap(a1, a2);
	}
	if (n <= a1 * k1) 
	{
		m2 = n / k1;
	} else 
	{
		m2 = a1 + (n -( a1 * k1)) / k2;
    	}
	cout<<m1<<" "<<m2; 
	return 0;
}
