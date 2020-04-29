#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector < int > arr(n);
		ll sum = 0;
		for(int i = 0;i < n/2;i++)
		{
			arr[i] = 2 * (i + 1);
			sum += arr[i];
		}
		int x = 0;
		int flag = 0;
		for(int i = n/2;i < n;i++)
		{
			if(i == n-1)
			{
				if(sum % 2 != 0)
				{
					arr[i] = sum;
					flag = 1;
				}
			}
			else
			{
				arr[i] = (2 * x) + 1;
				x++;
				sum -= arr[i];
			}
		}
		if(flag == 0)
		{
			cout << "NO" << endl;
		}
		else
		{
			cout << "YES" << endl;
			for(int i = 0;i < n;i++)
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
