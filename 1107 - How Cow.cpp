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

        ll a ,b,c, d; cin >> a >> b >> c >> d;
        ll m; cin >> m;
        cout << "Case " << r++ << ":\n";
        while(m--)
        {
            ll x, y; cin >> x >> y;
            if( (a <= x && x <= c) and (b <= y && y  <= d) )
            {
                cout << "Yes\n";

            }
            else
            {
                cout << "No\n";
            }
        }




    }
}

