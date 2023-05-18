#include <stdio.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int t;
    for(t=0;t<100;t++)
    {
        if(s[t]==NULL) break;
    }
    
    for(int i=0;i<26;i++)
    {
        for (int j=0;j<t;j++)
        {
        if(('a'+i)==s[j])
        {    
            printf("%d ",j);
            break;
        }
        if(j==t-1)
            printf("-1 ");
        } 
    }
}