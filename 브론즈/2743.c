#include <stdio.h>
#include <string.h>
int main()
{
    char a[100]=" ";
    int i;
    scanf("%s",a);
    /*for(i=0;i<100;i++)
    {
        if(a[i]==NULL)
            break;
    }
    printf("%d",i);
    */
    printf("%lu\n",strlen(a));   //strlen은 문자열 길이 재는 함수
    
}