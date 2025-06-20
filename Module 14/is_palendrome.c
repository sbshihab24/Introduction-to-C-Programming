#include <stdio.h>

int is_palindrome(int s) 
{                                //use  Return +  parameter
    if(num % 2 == 0)
        return 1;
    else
        return 2;
}

int main() {
    int num;
    scanf("%d", &num);
    int ans = check(num);

    if(ans == 1) {
        printf("Even");
    } else {
        printf("Odd");
    }

    return 0;
}