#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y;

    while (x != 0)
    {
         printf("Digite os valores das coordenadas X e Y:\n");
        scanf("%d", &x);
        scanf("%d", &y);

        printf("QUADRANTE ");

        if (y > 0 && y > 0)
        {
            printf("Q1\n");
        }
        else if (x < 0 && y > 0)
        {
            printf("Q2\n");
        }
        else if (x < 0 && y < 0)
        {
            printf("Q3\n");
        }
        else if (x > 0 && y < 0)
        {
            printf("Q4\n");
        }
    }
    

}
