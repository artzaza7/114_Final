#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d %d",&n,&c);
    int save=n%10;
    while(1)
    {
        if(save==c)
        {
            break;
        }
        else
        {
            n++;
            save=n%10;
        }
    }
    printf("%d",n);
    return 0;
}