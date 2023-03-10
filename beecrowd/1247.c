#include<stdio.h>
#include<math.h>

int main()
{
    //            W
    //       x.   .
    //     .      .
    //  G  .......F
    //on the basis of the question fw=12
    //if we apply pythagoreans theorem
    int d,vf,vg,fw=12;
    double tof,tog,x;
    while(scanf("%d %d %d",&d,&vf,&vg)!=EOF)
    {
        x=(double)d*d+144;
        //printf("%lf\n",x);
        x=(double)sqrt(x);
        //printf("%lf\n",x);
        tof=(double)fw/vf;
        tog=(double)x/vg;
        //printf("%lf %lf\n",dvf,dvg);
        if(tog>tof)
            printf("N\n");
        else
            printf("S\n");
    }
}
