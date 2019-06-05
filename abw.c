#include <stdio.h>

/* SIMPLE PROGRAM FOR WEIGHT APROXIMATION
   WITHOUT THE USE OF SCALE */

int main(void)
{
    char sex;
    float abw, absCircum, thighCircum;
    char male = 'm';

    printf("Sex (m|f): ");
    sex = getchar();

    printf("Abdominal circumference [cm]: ");
    scanf("%f", &absCircum);

    printf("Thigh circumference [cm]: ");
    scanf("%f", &thighCircum);

    if(sex == male)
    {
        abw = -47.8 + 0.78 * absCircum + 1.06 * thighCircum; 
    }
    else
    {
        abw = -40.2 + 0.47 * absCircum + 1.30 * thighCircum;
    }

    printf("The approximate weigth %.2fkg\n", abw);
}
