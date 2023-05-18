#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000000];
    int b[26]={0};
    
    scanf("%s",a);
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<strlen(a);j++)
        {
            if(i==a[j]) b[i-'a']++;
        }
    }
    for(int i='A';i<='Z';i++)
    {
        for(int j=0;j<strlen(a);j++)
        {
            if(i==a[j]) b[i-'A']++;
        }
    }
    
    /*for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>='a')   b[a[i]-'a']++;
        else b[a[i]-'A']++;
    }*/
    int M=b[0];
    int c=0;
    for(int i=1;i<26;i++)
    {
        if(M<b[i])  
        {
            M=b[i];
            c=i;
        }
    }
    int count=0;
    for(int i=0;i<26;i++)
    {
        if(M==b[i]) count+=1;
    }
    if(count>1)    printf("?\n");
    else    
        printf("%c",c+'A');
    return 0;

    
}