#include<stdio.h>

void check ()
                                //use No Return+ No parameter
{   
    int num;
    scanf("%d",&num);

    
    if(num %2 ==0)
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
}

int main()
{   
    check ();
    
    return 0;
}