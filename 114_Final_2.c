#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int check[10000]={};
    int num[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(int i=0;i<n;i++)
    {
        check[num[i]]++;
    }
    int max=check[0];
    for(int i=0;i<10000;i++)
    {
        if(max<check[i])
        {
            max=check[i];
        }
    }
    for(int i=0;i<10000;i++)
    {
        if(max==check[i])
        {
            printf("%d ",i);
        }
    }
    return 0;
}