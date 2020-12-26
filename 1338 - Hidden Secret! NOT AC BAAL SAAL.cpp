#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
   //ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

   ll t ; cin >> t; ll tc = 1;
   ll mp1[200], mp2[200];
  string s1 = "",s2 = "";
   while(t--)
   {

       getchar();
       getline(cin,s1);
       getline(cin,s2);

        memset(mp1,0,sizeof(mp1));
        memset(mp2,0,sizeof(mp2));
        ll xy = s1.size();
        ll ii = s2.size();
        if(xy != ii)
        {
            cout << "vdfrvd\n";
        }
        if(xy == ii)
        {


       for(ll i = 0; i < s1.size(); i++)
       {
           if(s1[i] >= 97 and s1[i] <= 122)
           {
               mp1[s1[i]]++;
           }
           else if(s1[i] >= 65 and s1[i] <= 90)
           {
               s1[i] -= 32;
                mp1[s1[i]]++;

           }
       }
       for(ll i = 0; i < s2.size(); i++)
       {
           if(s2[i] >= 97 and s2[i] <= 122)
           {
               mp2[s2[i]]++;
           }
           else if(s2[i] >= 65 and s2[i] <= 90)
           {
               s2[i] -= 32;
                mp2[s2[i]]++;

           }
       }
        }
        ll ooo = -1;
        for(ll i = 0; i < xy ; i++)
        {
            if(mp1[s1[i]] != mp2[s2[i]])
            {
                ooo = 1;
                break;
            }
        }
        if(ooo == -1)
        {
            cout << "TTTT\n";
        }
        if(ooo == 1)
        {
            cout << "cvrsvg\n";
        }







   }
}

