#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    float fahrFloat, celsiusFloat;
    int max = 300;
    int step = 20;
    int min = 0;
    fahr = min;
    fahrFloat = 0.0;
    
    printf("Farhenheit
    while(fahr <= max)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("%d%d\n", fahr, celsius);
        fahr += 20;
    }

    printf("\n\n");

    while (fahrFloat <= max)
    {
        celsiusFloat = 5.0 * (fahrFloat - 32.0) / 9.0;
        printf("%3.0f%9.1f\n", fahrFloat, celsiusFloat);
        fahrFloat += 20.0;
    }
}
