#include <stdio.h>

int main(void)
{
    int fahr, celsius;
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
}
