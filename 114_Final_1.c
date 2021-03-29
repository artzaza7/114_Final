#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d %d",&n,&c);
    int k=n+1,save=k%10;
    int count=0;
    int key=k;
    while(key>0)
    {
        count++;
        key=key/10;
    }
    int give=count;
    int temp=k;
    while (count>0)
    {
        if(count==1)
        {
            k++;
            temp=k;
            count=give;
        }
        save=temp%10;
        if(save==c)
        {
            break;
        }
        temp=temp/10;
        count--;
    }
    printf("%d",k);
    return 0;
}