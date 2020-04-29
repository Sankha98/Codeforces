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
		int arr[n+1];
		for(int i = 0;i	< n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int ans[n+1] = {0};
		if(n % 2 == 0)
		{
			int k = n -1;
			for(int i = 0;i < n;i++)
			{
				ans[k] = arr[n-1-i];
				k--;
				ans[k] = arr[i];
				k--;
			}
		}
		else
		{
			int k = n-1;
			ans[0] = arr[n/2];
			for(int i = 0;i < n/2;i++)
			{
				ans[k] = arr[n-1-i];
				k--;
				ans[k] = arr[i];
				k--;
			}
		}
		for(int i = 0;i < n;i++)
		{
			cout << ans[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
		 

