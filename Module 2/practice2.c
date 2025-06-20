//Take a number from user and check if its a positive or negative number

#include<stdio.h>
int main ()
{
    int num;
    scanf("%d",&num);
    if(num>0)
    {
        printf("The number is positive Number",num);

    }
    else if(num<0)
    {
        printf("The number is Negative Number",num);

    }
    else{
        printf("The number is Zero",num);
    }
    return 0;
}