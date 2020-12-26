#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
vector < ll > a;
int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        a.clear();
        ll n, m ; cin >> n >> m;
        for(ll i = 0; i < n; i++)
        {
            ll x; cin >> x;
            a.push_back(x);
        }
        while(m--)
        {
            char cc = '0'; cin >> cc;
            if(cc == 'S')
            {
                ll oo; cin >> oo;
                for(ll i = 0; i < a.size(); i++)
                {
                    a[i] += oo;
                }

            }
            else if(cc == 'M')
            {
                ll oo; cin >> oo;
                for(ll i = 0; i < a.size(); i++)
                {
                    a[i] *= oo;
                }

            }
            else if(cc == 'D')
            {
                ll oo; cin >> oo;
                for(ll i = 0; i < a.size(); i++)
                {
                    a[i] /= oo;
                }

            }
            else if(cc == 'P')
            {
                ll o1 , o2; cin >> o1 >> o2;
                swap(a[o1] , a[o2]);

            }
            else if(cc == 'R')
            {
                reverse(a.begin(), a.end());

            }
        }
        cout << "Case " << r++ << ":\n";
        for(ll i = 0; i < a.size(); i++)
        {
            if(i != (n - 1))
            {
                cout << a[i] << ' ';

            }
            if(i == (n - 1))
            {
                cout << a[i];
            }
        }
        cout << endl;






    }
}
