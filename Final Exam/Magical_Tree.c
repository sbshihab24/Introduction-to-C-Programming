#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);

    int tree_rows = (n - 1) / 2;
    int total_rows = 6 + tree_rows;
    int max_star = 1 + 2 * (total_rows - 1); 

   
    for (int i = 0; i < total_rows; i++) 
    {
        int stars = 1 + 2 * i;
        int spaces = (max_star - stars) / 2;

        for (int j = 0; j < spaces; j++)
        {
            printf(" ");
        } 
        for (int j = 0; j < stars; j++)
        {
            printf("*");
        } 
        printf("\n");
    }

   
    int under_part_spaces = (max_star - n) / 2;
    for (int i = 0; i < 5; i++)
     {
        for (int j = 0; j < trunder_part_spaces; j++)
         {
            printf(" ");
         }
        for (int j = 0; j < n; j++)
        {
            printf("*");
        } 
        printf("\n");
    }


    return 0;
}