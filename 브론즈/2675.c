#include <stdio.h>
#include <string.h>


int main()
{
    int t;
    int R;
    char s[20];
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%d %s",&R,s);
        for(int j=0;j<strlen(s);j++)
        {
            for(int k=0;k<R;k++)
            {
               printf("%c",s[j]);
            }
        }
        printf("\n");
    }
}