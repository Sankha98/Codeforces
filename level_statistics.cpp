#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a,b;
		//cin >> a >> b;
		//vector<int> count;
		int x = 0;
		int y = 0;
		bool flag = 1;
		while(n--)
		{
			cin >> a >> b;
			if(a < b || a - x < b - y || x > a || y > b)
			{
				flag = 0;
				x = a;
				y = b;
			}
			x = a;
			y = b;
		}
		if(flag)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		//return 0;
	}
	return 0;
}
