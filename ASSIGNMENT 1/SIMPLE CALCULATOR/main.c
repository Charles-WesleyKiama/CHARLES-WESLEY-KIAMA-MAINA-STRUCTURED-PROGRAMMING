#include <stdio.h>
#include <math.h>

int main(void) {

    int numberOne;
    int numberTwo;

    int sum;
    int difference;
    int product;
    int quotient;
    int modulus;

    printf("Enter the first number: \n");
    scanf("%i", &numberOne);

    printf("Enter the second number: \n");
    scanf("%i", &numberTwo);

    sum = numberOne + numberTwo;
    difference = numberOne - numberTwo;
    product = numberOne * numberTwo;
    quotient = numberOne / numberTwo;
    modulus = numberOne % numberTwo;

    printf("%i + %i = %i\n",numberOne,numberTwo,sum);
    printf("%i - %i = %i\n",numberOne,numberTwo,difference);
    printf("%i * %i = %i\n",numberOne,numberTwo,product);
    printf("%i / %i = %i\n",numberOne,numberTwo,quotient);
    printf("%i rem  %i = %i\n",numberOne,numberTwo,modulus);

    return 0;
}