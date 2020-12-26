#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        string s = "" , s2 = "";  cin >> s; s2 = s; reverse(s.begin(), s.end());
        if(s == s2)
        {
            cout << "Case " << r++ << ": " << "Yes\n";

        }
        if(s != s2)
        {
            cout << "Case " << r++ << ": " << "No\n";

        }

        // cout << "Case " << r++ << ": " << "odd\n";


    }
}

