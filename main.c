#include <stdio.h>

/* declaration */
int square (int num);

int main() {


    int count = 0;
    int num = 0;
    int power = 6;

    printf("Project Zero\n");

    printf("Enter an 8-bit Binary Number!\n");
    char string[100];

    gets(string);

    printf("String is: %s\n", string);

    while(string[count] != '\0')
    {
        if(string[0] == '1')
        {
            printf("Too Much\n");
            break;
        }

        if(string[count+1] == '1')
        {

            num += pow(2,power);

        }

        power--;
        count++;

    }

    printf("Number is: %d", num);

    return 0;
}

/* definition */
int square (int num) {
    int y;

    y = num * num;

    return(y);
}
