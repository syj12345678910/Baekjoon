#include <stdio.h>

int main()
{
    int N,M=0;
    scanf("%d",&N);
    int a[N];
    for(int i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<N;i++)
    {
        if(M<a[i])
            M=a[i];
    }
    float sum=0;
    for(int i=0;i<N;i++)
    {
        sum+=(float)a[i]/M*100;
    }
   
    
    printf("%f\n",sum/N);
}