#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000000];
    scanf("%[^\n]",a);  //%[^\n] 은 엔터가 쳐질때까지 문쟈열로 받는다 (공백도 포함)
    int count=0;    //문자열은 %s로 받으면 공백 있으면 공백있는데까지만 저장됨
    if(strlen(a)==1)
    {
        if(a[0]==' ')
         {   
            printf("0\n");
            return 0;
         }
    }
    for(int i=1;i<strlen(a)-1;i++)
    {
        if(a[i]==' ')   count+=1;
    }
    printf("%d ",count+1);
} 