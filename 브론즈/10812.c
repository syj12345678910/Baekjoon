#include <stdio.h>

int main()
{
    int N,M;
    int a[100];
    int begin,end,mid;
    scanf("%d %d",&N,&M);
    for(int i=0;i<N;i++)
    {
        a[i]=i+1;
    }

    for(int i=0;i<M;i++)
    {
        scanf("%d %d %d",&begin,&end,&mid);
       for(;begin<mid;mid--,end--)
       {
            int temp=a[mid-2];
            for(int j=mid-1;j<=end-1;j++)
            {
                a[j-1]=a[j];
            }
            a[end-1]=temp;
       }
    }
    for(int i=0;i<N;i++)
        printf("%d ",a[i]);
}  