#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		if(n == 1 || n == 2)
		{
			cout << "0" << endl;
		}
		else
		{
			cout << (n-1)/2 << endl;
		}
	}
	return 0;
}
				
