#include<stdio.h>
int main()
{
    char s[10];
    scanf("%s",&s);
    printf("%s\n",s);
    printf("%c\n",s[5]);
    printf("%d",s[6]); //null character

    return 0;
}