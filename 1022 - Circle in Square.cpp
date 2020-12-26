#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI acos(-1)

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t ; cin >> t;
    for(ll i = 1; i <= t; i++)
    {
        long double x , area = 0.0 , sq = 0.0 ; cin >> x;
        sq = x + x;
        sq = sq * sq;
        area = PI * x * x;




        cout << "Case " << i << ": " << fixed << setprecision(2) << abs(area - sq) << endl;
    }
}

