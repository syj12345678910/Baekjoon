#include <stdio.h>
#include <math.h>

int main()
{
    int T,r3;
    scanf("%d",&T);
    int x1,y1,r1,x2,y2,r2;
    for(int i=0;i<T;i++)
    {
    scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
    int r3=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    if(r3<(r1+r2))
    {    if(r1>r2+r3 || r2>r1+r3)
            printf("0\n");
        else if(r3==0)
            printf("-1\n");
        else if(r1==r2+r3 || r2==r1+r3)
            printf("1\n");
        else
            printf("2\n");
    }
    else if(r3==(r1+r2)) 
        printf("1\n");
    else 
        printf("0\n");
    }
}