#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n; i++)  //for line
    {   char ch = 'A';
        for(int j=1;j<=i;j++) //letter
        {
            printf("%c",ch);
            ch ++;
            
        }
        printf("\n");
        
    }
    return 0;
}