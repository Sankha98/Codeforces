#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll h,a,b;
		cin >> h >> a >> b; 
		if(10 * b < h)
		{
			for(ll i = 0;i < a;i++)
			{
				h = h/2 + 10;
			}
			for(ll i = 0;i < b;i++)
			{
				h = h - 10;
				//b--;
			}
		}
		else
		{
			h = h - 10 * b;
		}
		if(h > 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
		}
	}
	return 0;
}		
