#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n,x;
		cin >> n >> x;
		ll arr[n];
		for(ll i = 0;i < n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		ll result = 0;
		ll denominator = 1;
		ll max_sum = 0;
		for(ll i = n-1;i >= 0;i--)
		{
			max_sum = max_sum + arr[i];
			if(max_sum / (denominator * 1.0) >= x)
			{
				//max_sum = (max_sum + arr[i])/2;
				result++;
				denominator++;
			}
			else
			{
				break;
			}
		}
		cout << result << endl;
	}
	return 0;
}
