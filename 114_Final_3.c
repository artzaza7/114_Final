#include<stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int k1[n1][n1],k2[n2][n2],k3[n3][n3];
    int sum1=0,sum2=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&k1[i][j]);
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&k2[i][j]);
        }
    }
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n3;j++)
        {
            scanf("%d",&k3[i][j]);
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            sum1=sum1+k1[i][j];
            sum2=sum2+k1[j][i];
        }
        if(sum1==sum2)
        {
            printf("no\n");
            sum1=0;
            sum2=0;
            break;
        }
        else
        {
            printf("yes\n");
            sum1=0;
            sum2=0;
            break;
        }
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            sum1=sum1+k2[i][j];
            sum2=sum2+k2[j][i];
        }
        if(sum1==sum2)
        {
            printf("no\n");
            sum1=0;
            sum2=0;
            break;
        }
        else
        {
            printf("yes\n");
            sum1=0;
            sum2=0;
            break;
        }
    }
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n3;j++)
        {
            sum1=sum1+k3[i][j];
            sum2=sum2+k3[j][i];
        }
        if(sum1==sum2)
        {
            printf("no\n");
            sum1=0;
            sum2=0;
            break;
        }
        else
        {
            printf("yes\n");
            sum1=0;
            sum2=0;
            break;
        }
    }
    
    return 0;
}