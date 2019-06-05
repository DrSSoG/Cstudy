#include <stdio.h>

#define LOWER 0
#define STEP 20
#define UPPER 300

int main(void)
{
    int fahr;
    for (fahr = 0; fahr <= 300; fahr += 20)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\n================\n\n");

    for (fahr = 300; fahr >= 0; fahr -= 20)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\n=================\n\n");

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
    {
        printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

}
