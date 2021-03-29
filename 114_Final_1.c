#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d %d",&n,&c);
    int k=n,save=k%10;
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
    printf("%d",k);
    return 0;
}