#include <stdbool.h>
#include <stdio.h>

int main(void) {
    char name[50];
    char registrationNumber[50];
    int marks;
    char grade;
    bool pass ;


    printf("Enter your name: \n");
    scanf("%s", &name);

    printf("Enter your registration number: \n");
    scanf("%s", &registrationNumber);

    printf("Enter your marks: \n");
    scanf("%i", &marks);


    if (marks<0) {
        printf("Please enter marks greater than 100.\n");

    }
    else if (marks>100) {
        printf("Please enter marks less than 100.\n");

    }
    else if (marks >= 70 ) {
        grade = 'A';
        pass = true;


    }
    else if (marks >= 60 ) {
        grade = 'B';
        pass = true;


    }
    else if (marks >= 50 ) {
        grade = 'C';
        pass = true;


    }
    else if (marks >= 40 ) {
        grade = 'D';
        pass = true;

    }
    else {
        grade = 'E';
        pass = false;

    }

    printf("Rgistration No: %s \n",registrationNumber);
    printf("Name: %s \n",name);
    printf("Marks: %i\n",marks);
    printf("Grade: %c\n",grade);

    return 0;
}
