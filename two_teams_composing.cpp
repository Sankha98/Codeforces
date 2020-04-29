#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		vector < int >arr(n);
		map < int,int> mp;
		for(int i = 0;i < n;++i)
		{
			cin >> arr[i];
			++mp[arr[i]];
		}
		int max_sum = 0;
		for(auto p : mp)
		{
			max_sum = max(p.second,max_sum);
		}
		//int result = 0;
		if(max_sum > mp.size())
			cout << mp.size();
		else if(max_sum == mp.size())
			cout << mp.size()-1;
		else 
			cout << max_sum;
		cout << endl; 
    }
	return 0;
}
