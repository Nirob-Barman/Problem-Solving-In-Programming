#include<stdio.h>
#include<math.h>

int main()
{
    float i,j=1,sum=0;
    for(i=1;i<=39;i+=2)
    {
        sum=sum+(i/j);
        j=j+j;
    }
    printf("%.02f\n",sum);
}

