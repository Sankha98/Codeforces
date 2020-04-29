#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int arr[100];
		for(int i = 0;i < n;i++)
		{
			cin>>arr[i];
		}
		for(int i = 0;i < n-1;i++)
		{
			for(int j =i+1;j < n;j++)
			{
				if(arr[i] == arr[j])
				{
					count
