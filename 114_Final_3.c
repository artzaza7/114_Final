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
   
    
    return 0;
}