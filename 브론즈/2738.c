#include <stdio.h>


int main()
{
    int a[100][100],b[100][100],c[100][100];
    int N,M;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<N;i++)
{
    for(int j=0;j<M;j++)
    {
        scanf("%d",&b[i][j]);
    }
}
for(int i=0;i<N;i++)
{
    for(int j=0;j<M;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
}
for(int i=0;i<N;i++)
{
    for(int j=0;j<M;j++)
    {
       printf("%d ",c[i][j]);
    }
    printf("\n");
}


}