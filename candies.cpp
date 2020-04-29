#include<bits/stdc++.h>
using namespace std;
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0) 
int main()
{
	FIO;
	w(t)
	{
		int n;
		cin >> n;
		int p;
		for(int k = 2;k <= 35;k++)
		{
			int d = (pow(2,k)-1);
			if(n % d == 0)
			{
				p = n / d;
				break;
			}
			else
			{
				continue;
			}
		}
		cout << p << endl;
	}
	return 0;
}
