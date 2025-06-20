#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001];
    char s2[1001];
    scanf("%s %s", s1, s2);
    int length1 = strlen(s1);
    int length2 = strlen(s2);
    printf("%d %d\n", length1, length2);
    printf("%s %s", s1, s2);

    return 0;
}