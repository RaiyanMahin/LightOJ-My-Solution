#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t ; cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        ll n; cin >> n; ll s = 0;
        while(n--)
        {
            ll x; cin >> x;
            if(x >= 0)
            {
                s += x;
            }
        }
        cout << "Case " << i << ": " << s << endl;
    }
}

