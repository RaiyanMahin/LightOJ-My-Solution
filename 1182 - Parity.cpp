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
        ll x; cin >> x; bool bb = __builtin_parity(x);
        if(bb)
        {
            cout << "Case " << r++ << ": " << "odd\n";
        }
        if(!bb)
        {
            cout << "Case " << r++ << ": " << "even\n";

        }


    }
}

