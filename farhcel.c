#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    float fahrFloat, celsiusFloat;
    int max = 300;
    int step = 20;
    int min = 0;
    fahr = min;
    
    while(fahr <= max)
    {
        celsius = 5 * (fahr - 32) / 9;
        printf("Fahr: %d | Cels: %d\n", fahr, celsius);
        fahr += 20;
    }


    printf("===============\n");

    for (fahrFloat = min; fahrFloat <= max; fahrFloat += step)
    {
        printf("%3.0f%8.1f\n", fahrFloat, (5.0/9.0)*(fahrFloat-32));
    }

}
