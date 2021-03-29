#include<stdio.h>
int main()
{
    long long n,c;
    scanf("%lld %lld",&n,&c);
    long long k=n,save=k%10;
    if(save==c)
    {
        k++;
        save=k%10;
    }
    while(1)
    {
        if(save==c)
        {
            break;
        }
        else
        {
            k++;
            save=k%10;
        }
    }
    printf("%lld",k);
    return 0;
}