#include <stdio.h>

int main(int argc, char const *argv[])
{
    double medida_glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &medida_glicose);

    if (medida_glicose <= 100)
    {
        printf("Normal");
    }
    else if (medida_glicose <= 140)
    {
        printf("Elevado");
    }
    else
    {
        printf("Diabetes");
    }
    
    return 0;
}
