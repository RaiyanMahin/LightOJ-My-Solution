#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a ,b;
vector < ll > vs ,vs1;
ll ch(ll n)
{
    ll bi = 0;
    ll re , i = 1;
    while(n)
    {
        re = n % 2;
        n /= 2;
        bi += re * i;
        i *= 10;
    }
    return bi;
}
int main()
{
   //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
   ll t; cin >> t; ll tc = 1;
   while(t--)
   {
       vs.clear();
       vs1.clear();
       cin >> a >> b;
       string s = "", s2 = "";
       ll op = 0, pp = 0;
       for(ll i = 0; i < a.size(); i++)
       {

           if(a[i] == '.')
           {
               op = stoi(s);
               vs.push_back(op);
               s = "";
           }
           else if(a[i] != '.')
           {
               s += a[i];
           }

       }
       op = stoi(s);
       vs.push_back(op);
       for(ll i = 0; i < b.size(); i++)
       {

           if(b[i] == '.')
           {
               ll pp = stoi(s2);
               vs1.push_back(pp);
               s2 = "";
           }
           else if(b[i] != '.')
           {
               s2 += b[i];
           }

       }
       pp = stoi(s2);
       vs1.push_back(pp);
      ll ooo = 0;
      for(ll i = 0; i < vs.size(); i++)
      {
          ll cc = ch(vs[i]);
          if(cc != vs1[i])
          {
              ooo = 1;
              break;

          }
      }
      if(ooo)
      {
          cout << "Case " << tc++ << ": " << "No\n";
      }
      if(!ooo)
      {
          cout << "Case " << tc++ << ": " << "Yes\n";
      }








//       for(auto i : vs)
//       {
//           cout << i << ' ';
//       }
//       cout << endl;
//       for(auto i : vs1)
//       {
//           cout << i << ' ';
//       }
//       cout << endl;




   }
}

