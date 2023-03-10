#include<stdio.h>
#include<math.h>

int main()
{
    long long int decimalvalue,binary,i,j,k,n,reminder,temp,basepower,swap,max=1;

    scanf("%lld",&binary);
    scanf("%lld",&n);

    long long int a[n],nums[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
    decimalvalue=0;
    basepower=0;
    while(binary!=0)
    {
        reminder=binary%10;
        decimalvalue+=reminder*pow(2,basepower);
        binary=binary/10;
        basepower++;
    }
    printf("%lld\n",decimalvalue);
    j=0;
    for(i=0;i<n;i++)
    {
        if(decimalvalue%a[i]==0)
        {
            nums[j]=a[i];
            j++;
            max=0;
        }
    }
    for(i=0;i<j;i++)
    {
        for(k=0;k<j-i-1;k++)
        {
            if(nums[k]>nums[k+1])
            {
                swap=nums[k];
                nums[k]=nums[k+1];
                nums[k+1]=swap;
            }
        }
    }
    if(max==0)
    {
        for(i=0;i<j;i++)
        {
            if(i==j-1)
                printf("%lld\n",nums[i]);
            else
                printf("%lld ",nums[i]);
        }
    }
    else
        printf("Nenhum\n");
}
