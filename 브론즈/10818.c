#include <stdio.h>

int main()
{
    int N, a[1000000];
    scanf("%d",&N);
    for (int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    int m=a[0],M=a[0];
    for (int i=1;i<N;i++)
    {
        if(m>a[i])  m=a[i];
        if(M<a[i])  M=a[i];
    }
    printf("%d %d",m,M);
}