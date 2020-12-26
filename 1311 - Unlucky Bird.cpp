    #include<bits/stdc++.h>
        using namespace std;

        int main()
        {

            int t; cin>>t;
            for(int i=1;i<=t;i++)
            {
                double u1,u2,v,a1,a2,s1,s2,t1,t2;

                 cin>>u1>>u2>>v>>a1>>a2;

                s1=(u1*u1/(2*a1));
                                          // v2 = u2 + 2as
                s2=(u2*u2/(2*a2));


                t1=u1/a1; t2=u2/a2;

                printf("Case %d: %lf %lf\n",i,s2+s1,v*max(t1,t2));
            }
        }

