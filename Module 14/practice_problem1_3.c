// use return + No parameter

#include<stdio.h>

int check ()
                                //use Return+ No parameter
{   
    int num;
    scanf("%d",&num);

    
    if(num %2 ==0)
    {
        return 1;
    }
    else{
        return 2;
    }
}

int main()
{   
    int ans =  check ();
    if(ans == 1 )
    {
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
    return 0;
}