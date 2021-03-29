#include<stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int k1[n1][n1],k2[n2][n2],k3[n3][n3];
    int sum1[n1+n1],sum2[n2+n2],sum3[n3+n3];
    for(int i=0;i<n1+n1;i++)
    {
        sum1[i]=0;
    }
    for(int i=0;i<n2+n2;i++)
    {
        sum2[i]=0;
    }
    for(int i=0;i<n3+n3;i++)
    {
        sum3[i]=0;
    }
    int sum=0;
    int k=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&k1[i][j]);
            sum=sum+k1[i][j];
        }
        sum1[k]=sum;
        sum=0;
        k++;
    }
    for(int i=0;i<n1+n1;i++)
    {
        printf("%d ",sum1[i]);
    }
    sum=0;
    k=0;
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&k2[i][j]);
            sum=sum+k2[i][j];
        }
        sum2[k]=sum;
        sum=0;
        k++;
    }
    for(int i=0;i<n2+n2;i++)
    {
        printf("%d ",sum2[i]);
    }
    sum=0;
    k=0;
    for(int i=0;i<n3;i++)
    {
        for(int j=0;j<n3;j++)
        {
            scanf("%d",&k3[i][j]);
            sum=sum+k3[i][j];
        }
        sum3[k]=sum;
        sum=0;
        k++;
    }
    for(int i=0;i<n3+n3;i++)
    {
        printf("%d ",sum3[i]);
    }
    /*
    int max1=sum1[0],max2=sum2[0],max3=sum3[0];
    int count=0;
    for(int i=1;i<n1+n1;i++)
    {
        if(max1!=sum1[i])
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("yes\n");
        count=0;
    }
    else
    {
        printf("no\n");
        count=0;
    }
    for(int i=1;i<n2+n2;i++)
    {
        if(max2!=sum2[i])
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("yes\n");
        count=0;
    }
    else
    {
        printf("no\n");
        count=0;
    }
    for(int i=1;i<n3+n3;i++)
    {
        if(max3!=sum3[i])
        {
            count++;
        }
    }
    if(count!=0)
    {
        printf("yes\n");
        count=0;
    }
    else
    {
        printf("no\n");
        count=0;
    }
    */
    return 0;
}