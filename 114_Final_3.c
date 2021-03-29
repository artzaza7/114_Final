#include<stdio.h>
int main()
{
    int n1,n2,n3;
    scanf("%d %d %d",&n1,&n2,&n3);
    int k1[n1][n1],k2[n2][n2],k3[n3][n3];
    int a=n1*2+2,b=n2*2+2,c=n3*2+2;
    int sum1[a],sum2[b],sum3[c];
    for(int i=0;i<a;i++)
    {
        sum1[i]=0;
    }
    for(int i=0;i<b;i++)
    {
        sum2[i]=0;
    }
    for(int i=0;i<c;i++)
    {
        sum3[i]=0;
    }
    int add=0;
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
    int x=a-2,y=b-2,z=c-2;
    int k=0;
    while(k<a)
    {
        if(k<x/2)
        {
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<n1;j++)
                {
                    sum1[k]=sum1[k]+k1[i][j];
                }
                k++;
            }
        }
        else if(k<x)
        {
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<n1;j++)
                {
                    sum1[k]=sum1[k]+k1[j][i];
                }
                k++;
            }
        }
        if(k==x)
        {
            for(int i=n1-1;i>=0;i--)
            {
                for(int j=n1-1;j>=0;j--)
                {
                    if(i==j)
                    {
                        sum1[k]=sum1[k]+k1[i][j];
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<n1;j++)
                {
                    if(i==j)
                    {
                        sum1[k]=sum1[k]+k1[i][j];
                    }
                }
            }
        }
        k++;
    }
    k=0;
    while(k<c)
    {
        if(k<z/2)
        {
            for(int i=0;i<n1;i++)
            {
                for(int j=0;j<n1;j++)
                {
                    sum3[k]=sum3[k]+k3[i][j];
                }
                k++;
            }
        }
        else if(k<z)
        {
            for(int i=0;i<n3;i++)
            {
                for(int j=0;j<n3;j++)
                {
                    sum3[k]=sum3[k]+k3[j][i];
                }
                k++;
            }
        }
        if(k==z)
        {
            for(int i=n3-1;i>=0;i--)
            {
                for(int j=n3-1;j>=0;j--)
                {
                    if(i==j)
                    {
                        sum3[k]=sum3[k]+k3[i][j];
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<n3;i++)
            {
                for(int j=0;j<n3;j++)
                {
                    if(i==j)
                    {
                        sum3[k]=sum3[k]+k3[i][j];
                    }
                }
            }
        }
        k++;
    }
    k=0;
    while(k<b)
    {
        if(k<y/2)
        {
            for(int i=0;i<n2;i++)
            {
                for(int j=0;j<n2;j++)
                {
                    sum2[k]=sum2[k]+k2[i][j];
                }
                k++;
            }
        }
        else if(k<y)
        {
            for(int i=0;i<n2;i++)
            {
                for(int j=0;j<n2;j++)
                {
                    sum2[k]=sum2[k]+k2[j][i];
                }
                k++;
            }
        }
        if(k==y)
        {
            for(int i=n2-1;i>=0;i--)
            {
                for(int j=n2-1;j>=0;j--)
                {
                    if(i==j)
                    {
                        sum2[k]=sum2[k]+k2[i][j];
                    }
                }
            }
        }
        else
        {
            for(int i=0;i<n2;i++)
            {
                for(int j=0;j<n2;j++)
                {
                    if(i==j)
                    {
                        sum2[k]=sum2[k]+k2[i][j];
                    }
                }
            }
        }
        k++;
    }
    k=0;
    int count=0,max1=sum1[0],max2=sum2[0],max3=sum3[0];
    for(int i=0;i<a;i++)
    {
        if(max1==sum1[i])
        {
            count++;
        }
    }
    if(count==a)
    {
        printf("no\n");
        count=0;
    }
    else
    {
        printf("yes\n");
        count=0;
    }
    for(int i=0;i<b;i++)
    {
        if(max2==sum2[i])
        {
            count++;
        }
    }
    if(count==b)
    {
        printf("no\n");
        count=0;
    }
    else
    {
        printf("yes\n");
        count=0;
    }
    for(int i=0;i<c;i++)
    {
        if(max3==sum3[i])
        {
            count++;
        }
    }
    if(count==c)
    {
        printf("no\n");
        count=0;
    }
    else
    {
        printf("yes\n");
        count=0;
    }
    return 0;
}