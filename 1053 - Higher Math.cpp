soln 1
 cosA = (b^2 + c^2 - a^2) / 2 * b * c;

/*

#include<stdio.h>
#include<math.h>

int main()
{
    const double PI=acos(-1);
    double A,B,C,x,y,z;
    int T,i,a,b,c;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        x=(c*c+b*b-a*a)/2*b*c;
        y=(c*c+a*a-b*b)/2*a*c;
        z=(a*a+b*b-c*c)/2*b*a;
        A=acos(x);
        B=acos(y);
        C=acos(z);
        A=(A*180)/PI;
        B=(B*180)/PI;
        C=(C*180)/PI;
        if(A==90 || B==90 || C==90 ){
            printf("Case %d: yes\n",i);
        }
        else {
            printf("Case %d: no\n",i);
        }


    }
    return 0;
}
*/


sol 2
a2 = b2 + c2;
sob cehe boro side ta otivuj


/*

#include<stdio.h>
int main()
{
    int T,i,a,b,c,x,y,z,k,m,n;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && a>c){
            x=a*a;
            z=x-(b*b+c*c);
            if(z==0){
                printf("Case %d: yes\n",i);
            }
            else printf("Case %d: no\n",i);
            }
            else if(b>a && b>c){
                y=b*b;
                k=y-(a*a+c*c);
                if(k==0){
                printf("Case %d: yes\n",i);
            }
            else printf("Case %d: no\n",i);
            }
            else {
                m=c*c;
                n=m-(b*b+a*a);
                if(n==0){
                printf("Case %d: yes\n",i);
            }
            else printf("Case %d: no\n",i);
            }

            }
            return 0;
    }





*/
