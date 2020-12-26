#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t ; cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        ll n; cin >> n;
        if(n <= 10)
        {
            cout << 0 << ' ' << n << endl;
        }
        if(n > 10)
        {
            cout << 10 << ' ' << n - 10 << endl;
        }
    }
}

