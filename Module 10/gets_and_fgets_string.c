#include<stdio.h>
int main()
{
    char s[50];
    //gets(s);
    fgets(s,20,stdin);
    printf("%s",s);
    return 0;
}