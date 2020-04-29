#include<bits/stdc++.h>
#define ll long long int;
using namespace std;
int solve(int *arr,int n, int k)
{
    bool isPeak[n];
    memset(isPeak,0,sizeof(isPeak));
    for(int i = 1;i < n - 1;i++)
    {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
        {
            isPeak[i] = 1;
        }
    }
    int count = 0;
    for(int i = 1;i < k-1;i++)
    {
        if(isPeak[i])
        {
            count++;
        }
    }
    int left = 1;
    int right = k - 1;
    int max_sum = count;
    int leftPointer = 1;
    for(int i = 1;i <= (n-k);i++)
    {
        if(isPeak[left])
        {
            max_sum--;
        }
        if(isPeak[right])
        {
            max_sum++;
        }
        left++;
        right++;
        if(max_sum > count)
        {
            leftPointer = i + 1;
            count = max_sum;
        }
    }
    //return ((count+1),leftPointer);
    cout << count+1 << " " << leftPointer << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i = 0;i < n;i++)
        {
            cin >> arr[i];
        }
        solve(arr,n,k);
    }
    return 0;
}

