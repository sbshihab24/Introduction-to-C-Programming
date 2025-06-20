#include<stdio.h>
#include<string.h>

int main()
{
    
    char s[100001];
    scanf("%s", s);
    
    int consonant_count = 0;
    int length = strlen(s);
    
    for(int i = 0; i < length; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            consonant_count++;
        }
    }
    printf("%d\n", consonant_count);
    return 0;
}
