#include <stdio.h>
#include <stdbool.h>

int getNumber();
bool checkNumber(int number);

int main()
{
    int num;
    bool check;
    num = getNumber();
    check = checkNumber(num); 
    if(check == true){ printf("Result of the check: True\n"); }
    else { printf("Result of the check: False\n");}
}

int getNumber()
{
    int number;
    printf("Give me a number: ");
    scanf("%i", &number);
    return number;
} 

bool checkNumber(int number)
{
    if(number == 2 || number == 3)
    {
        return true;     
    }
    else
    {
        for(int i = 2; i < number - 1; i++)
        {
            if(number % i != 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }

}
