#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll n; cin >> n; ll op = n;
        if(n & 1)
        {
            cout << "Case " << r++ << ": " << "Impossible\n";
        }
        if(! (n & 1) )
        {
            ll p = 0;
            while(n % 2 == 0)
            {
                n /= 2;
                if(n & 1)
                {
                    p = n;
                    break;
                }
            }

















            cout << "Case " << r++ << ": " << p << ' ' << (op / p) << endl;
        }



    }
}
