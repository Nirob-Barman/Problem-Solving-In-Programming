#include<stdio.h>
#include<math.h>

int main()
{
    double h,v,angle,t,d,va,vb,a,b,c,x,ac;
    int pone,ptwo,trying,tk;
    while(scanf("%lf",&h)!=EOF)
    {{
        scanf("%d %d",&pone,&ptwo);
        scanf("%d",&trying);
        for(tk=1;tk<=trying;tk++)
        {
            scanf("%lf %lf",&ac,&v);
            angle=ac*3.14159/180;
            a=(9.80665/2);
            b=v*sin(angle);
            c=h;
            d=sqrt((b*b)+(4*a*c));
            va=(b+d)/(2*a);
            vb=(b-d)/(2*a);
            if(va>0 && vb<0)
                t=va;
            else if(va<0 && vb>0)
                t=vb;
            x=v*cos(angle)*t;
            if(x>=pone && x<=ptwo)
                printf("%.5lf -> DUCK\n",x);
            else
                printf("%.5lf -> NUCK\n",x);
        }
    }}
    return 0;
}
