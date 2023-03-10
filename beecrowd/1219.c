#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,circumcenter,bcarea,bcr,scarea,scr,tarea,triarea,s,pi=3.1415926535897;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
        //printf("%lf\n",s);
        tarea=sqrt(s*(s-a)*(s-b)*(s-c));
        //printf("%lf\n",tarea);
        bcr=( a*b*c ) / ( sqrt ( (a+b+c) * (b+c-a) * (c+a-b)* (a+b-c)));
        //https://www.mathopenref.com/trianglecircumcircle.html
        //printf("%lf\n");
        bcarea=pi*bcr*bcr;
        //printf("%lf\n",bcarea);
        scr=2*tarea/(a+b+c);
        //area=(a+b+c)*r/2;
        //printf("%lf\n",scr);
        scarea=pi*scr*scr;
        //printf("%lf\n",scarea);
        printf("%.04lf %.04lf %.04lf\n",bcarea-tarea,tarea-scarea,scarea);
    }
}
