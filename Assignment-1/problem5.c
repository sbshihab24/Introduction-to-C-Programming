#include<stdio.h>
int main()
{
    int tk=0;
    scanf("%d",&tk);
    if(tk>1000)
    {
        printf("I will buy Punjabi\n");
        if(tk>=1500)
        {
            printf("I will buy new shoes\n");
            if(tk>=1500)
            {
                printf("Alisa will buy new shoes\n");
            }
        }
    
    }
    else{
        printf("Bad luck!");
    }
    return 0;

}