#include <stdio.h>
#include <string.h>

int main(void) {

    const int correctPin = 1999;
    int attemptPin;
    char attemptPinChar[50];
    int maxAttempts = 3;
    int attemptsLeft;

    printf("Please enter your  pin(must be 4 digits e.g 1234) : \n");

    scanf("%i", &attemptPin);

    sprintf(attemptPinChar, "%i", attemptPin);







        for (int userAttempts = 0; userAttempts < maxAttempts; userAttempts++)
        {
            attemptsLeft = maxAttempts - userAttempts;

            size_t length = strlen(attemptPinChar);


        if (attemptsLeft > 0) {
            if (length <4) {
                printf("Too short. %i attempts left. Please enter a four digit number e.g 1234: \n",attemptsLeft);
                scanf("%i", &attemptPin);

                sprintf(attemptPinChar, "%i", attemptPin);

                size_t length = strlen(attemptPinChar);

            }


            else if (length > 4) {
                printf("Too long. %i attempts left. Please enter a four digit number e.g 1234: \n",attemptsLeft);
                scanf("%i", &attemptPin);

                sprintf(attemptPinChar, "%i", attemptPin);

                size_t length = strlen(attemptPinChar);

            }

            else{ if (attemptPin != correctPin){

                printf("Access Denied! %i attempts left.Please enter your  pin(must be 4 digits e.g 1234) : \n",attemptsLeft);
                scanf("%i", &attemptPin);

                sprintf(attemptPinChar, "%i", attemptPin);

                size_t length = strlen(attemptPinChar);


            }

            else  {
                printf("Access granted! \n");
                break;
            }

        }
           }


            }


    if (attemptsLeft == 0) {
        printf("You have reached the maximum number of attempts. Please contact the administration!");
    }



    return 0;
}