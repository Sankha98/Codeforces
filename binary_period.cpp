#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool ans = 1;
        int len = s.size();
        for(int i = 1;i < len;i++)
        {
            if(s[i] != s[i-1])
            {
                ans = 0;
                break;
            }

        }
        if(ans)
        {
            cout << s << endl;

        }
        else
        {
            string v = "";
            for(int i = 0;i < len;i++)
            {
                v += "10";
            }
            cout << v << endl;
        }
    }
    
}
