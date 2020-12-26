#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        ll a , b; cin >> a >> b;  ll p = abs(a - b) + a; p *= 4;
        cout << "Case " << r++ << ": " << p + 19 << endl;

//        19 er kahini
//        lift open 3;
//        entry + exit = 5;
//        close 3;
//        open 3;
//        entry + exit = 5;
//
//         3 + 5 + 3 + 3 + 5 == 19;
//
//         abs(a - b) + a;
//         uporer ans *= 4;
//         cz
//         a = 10 , b = 7;
//         7 theika 10 == 3;
//         pore 10 theke last 10
//         10 + 3 == 13
//         same for ulta
//         NOW MONE RAKHBi -__-



    }
}

