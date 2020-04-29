#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,t,a,b;
	cin >> t;
	while(t--)
	{
		cin >> n >> a >> b;
		for(ll i=0;i<n;i++)
		{
			cout<<char('a'+i%b);
		}
		cout<<endl;
	}
	return 0;
}
