#include <stdio.h>
#include <string.h>

int main()
{
    char a[100],b[100];
    scanf("%s",a);
    for(int i=0,j=strlen(a)-1; i<strlen(a),j>=0;i++,j--)
    {
        b[i]=a[j];
    }
    b[strlen(a)]='\0';
    if(strcmp(b,a)==0)  printf("1");
    else    printf("0");
}