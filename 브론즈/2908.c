#include <stdio.h>
#include <string.h>
int main()
{
    char A[4],B[4];
    scanf("%s%s",A,B);
    int a,b;
    a=(A[2]-'0')*100+(A[1]-'0')*10+(A[0]-'0');
    b=(B[2]-'0')*100+(B[1]-'0')*10+(B[0]-'0');
    printf("%d\n",a>b?a:b);

}