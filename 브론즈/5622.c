#include <stdio.h>
#include <string.h>
int main()
{
    char a[15];
    scanf("%s",a);
    int s=0;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='A'||a[i]=='B'||a[i]=='C')
            s+=3;
        else if(a[i]=='D'||a[i]=='E'||a[i]=='F')
            s+=4;
        else if(a[i]=='G'||a[i]=='H'||a[i]=='I')
            s+=5;
        else if(a[i]=='J'||a[i]=='K'||a[i]=='L')
            s+=6;
        else if(a[i]=='M'||a[i]=='N'||a[i]=='O')
            s+=7;
        else if(a[i]=='P'||a[i]=='Q'||a[i]=='R'||a[i]=='S')
            s+=8;
        else if(a[i]=='T'||a[i]=='U'||a[i]=='V')
            s+=9;
        else if(a[i]=='W'||a[i]=='X'||a[i]=='Y'||a[i]=='Z')
            s+=10;  
    }
    printf("%d",s);

}