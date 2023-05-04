#include <stdio.h>

int main()
{
    int N,M,a[100]={0},b,c,d;
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<M;i++)
    {
        scanf("%d %d %d",&b,&c,&d);
        a[b-1]+=d-c+1;
    }
    for(int i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
}