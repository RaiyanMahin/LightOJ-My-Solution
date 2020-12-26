#include <bits/stdc++.h>
using namespace std;
#define ll long long
deque < ll > dq;

int main()
{
    //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    ll t; cin >> t; ll r = 1;
    while(t--)
    {
        cout << "Case " << r++ << ":\n";
        dq.clear();
        ll n, q; cin >> n >> q;
        while(q--)
        {
            string s; cin >> s;
            if(s == "pushLeft")
            {
                ll x; cin >> x;
                if(dq.size() == n)
                {
                    cout << "The queue is full\n";
                }
                else if(dq.size() < n)
                {
                    dq.push_front(x);
                    cout << "Pushed in left: " << x << endl;
                }

            }
            else if(s == "pushRight")
            {
                ll x; cin >> x;
                if(dq.size() == n)
                {
                    cout << "The queue is full\n";
                }
                else if(dq.size() < n)
                {
                    dq.push_back(x);
                    cout << "Pushed in right: " << x << endl;
                }

            }
            else if(s == "popLeft")
            {
                if(dq.empty())
                {
                    cout << "The queue is empty\n";

                }
                else if(!dq.empty())
                {
                    ll op = dq.front();
                    dq.pop_front();
                    cout << "Popped from left: " << op << endl;
                }



            }
            else if(s == "popRight")
            {
                if(dq.empty())
                {
                    cout << "The queue is empty\n";

                }
                else if(!dq.empty())
                {
                    ll op = dq.back();
                    dq.pop_back();
                    cout << "Popped from right: " << op << endl;
                }


            }


        }



    }
}

