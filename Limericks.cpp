#include<bits/stdc++.h>
using namespace std;
#define maxN 1000000
int abc[maxN];
void strot()
{
	abc[1] = 1;
	for(int i = 2;i < maxN;i++)
	{
		abc[i] = i;
	}
	for(int i = 4;i < maxN;i += 2)
        {
                abc[i] = 2;
        }
	for(int i =3;i*i <=maxN;i++)
	{
		if(abc[i]==i)
		{
			for(int j = i*i;j <maxN;j += i)
			{
				if(abc[j] = j)
				{
					abc[j] = i;
				}
			}
		}
	}
}
vector<int>getFactors(int(x))
{
	vector<int>result;
	while(x != 1)
	{
		result.push_back(abc[x]);
		x = x /abc[x];
	}
	return result;
}
int main()
{
	int n;
	strot();
	cin>>n;
	vector<int>i = getFactors(n);
	int x =i[0];
	cout<<x<<n/x<<endl;
	return 0;
}
