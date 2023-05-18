#include <stdio.h>


int main()
{
    int N,count,M;
    int a[1000];
    int sum;
    scanf("%d",&N);
    
    for(int i=0;i<N;i++)
    {
        count=0;
        sum=0;
        scanf("%d",&M);
        for(int j=0;j<M;j++)
        {   
            
            scanf("%d",&a[j]);
            sum+=a[j];
        }
        for(int j=0;j<M;j++)
        {
            if(sum/(double)M<a[j])  count++;
        }
        printf("%.3lf%%\n",count/(double)M*100);
    }
}