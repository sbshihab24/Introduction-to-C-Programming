#include <stdio.h>

int main() 
{
    int n, m;
    scanf("%d %d", &n, &m);

    
    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int matrix[100][100];
    int flag = 0; 

    
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++)
         {
            scanf("%d", &matrix[i][j]);
        }
    }

  
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < m; j++) 
        {
            if (i == j || (i + j == n - 1))
             {
                
                if (matrix[i][j] != 1)
                {
                    flag = 1;
                    break;
                }
            } 
            else 
            {
                
                if (matrix[i][j] != 0) {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 1)
            break;
    }

    
    if (flag == 1)
        printf("NO\n");
    else
        printf("YES\n");

    return 0;
}
