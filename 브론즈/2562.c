#include <stdio.h>

int main()
{
int a[9],t=1;
for(int i=0;i<9;i++)
{
    scanf("%d",&a[i]);
}
    int M=a[0];
for(int i=1;i<9;i++)
{
    if(M<a[i])
    {
        M=a[i];
        t=i+1;
    }
}   
    printf("%d\n",M);   
    printf("%d",t);   
}