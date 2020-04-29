#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		ll x,y,a,b,total=0;
		cin >> x >> y >> a >> b;
		//cin >> a >> b;
		if(x > y)
		{
			swap(x,y);
		}
		total +=  a * (y - x);
		if(2 * a < b)
		{
			total += x * (2 * a);
		}
		else
		{
			total += x * b;
		}
		cout << total << endl;
	}
	return 0;
}
