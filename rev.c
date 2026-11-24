#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>

int main(void)
{
    int number = rand()% 100 + 1;
    int answer;
    do
    {
        answer = get_int("what is the number i'm thinking of rn? ");
        if (answer > number)
        {
            printf("you picked a higher number\n");
        }
        else if (answer < number)
        {
            printf("you pciked a lower number\n");
        }
    }
    while ( answer != number);

    if (answer == number)
    {
        printf("YOU'RE DA REAL GOAT, MY FRIEND\n");
    }
}
