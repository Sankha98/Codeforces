/*
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;
#define ordered_set tree<long long, null_type,less<long long>, rb_tree_tag,tree_order_statistics_node_update>

typedef unsigned long long ull;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vii;
typedef vector<string> vss;
typedef vector<pair<ll, ll> > vpll;
typedef unordered_map<ll ,ll> mpll;
typedef unordered_map<int ,int> mpii;
typedef unordered_map<char ,ll> mpcl;
typedef pair<ll , ll> pll;
 
 
#define fore(i,n) for(i=0;i<n;i++)
#define forz(i,s,f) for(i=s;i<f;i++)
#define forer(i,n) for(i=n-1;i>=0;i--)
#define forzr(i,s,f) for(i=s;i>=f;i--)
#define mkp make_pair
#define pb push_back
#define eb emplace_back
#define ub upper_bound
#define lb lower_bound
#define ff first
#define ss second
 
const ll mod=1e9+7;
const ll modulo=998244353;
 
 
ll power(ll x,ll y,ll m)//gives (x^y)%m
{
    ll ans=1;
    while (y>0)
    {
        if(y & 1)
        {
            ans=(ans*x)%m;
        }
        y=y/2;
        x=(x*x)%m;
    }
    return ans;
}
 
bool sortbysec(pll &a,pll &b)
{
    return(a.ss<b.ss);
}
 
ll lcm(ll a,ll b)
{
	ll ans=(a*b)/__gcd(a,b);
	return ans;
}
*/
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
		ll n;
		cin >> n;
		//int arr[n + 1];
		ll a,b,max_sum= 0;
		cin >> b; 
		for(int i = 1;i < n;i++)
		{
			cin >> a;
			if((b < 0 && a > 0) || (b > 0 && a < 0))
			{
				max_sum += b;
				b = a;
			}
			else
			{
				if(b < a)
				{
					b = a;
				}
			} 
		}
		max_sum += b;
		cout << max_sum << endl;
		}
	return 0;
}
