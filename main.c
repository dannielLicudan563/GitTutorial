#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char string[100];

    int firstBit = 0;
    int secondBit = 0;
    int thirdBit = 0;
    int fourthBit = 0;
    int fifthBit = 0;
    int sixthBit = 0;
    int seventhBit = 0;
    int eighthBit = 0;
    int bitNum = 0;
    int newNum = 0;
    int anewNum = 0;
    int power = 7;

    printf("Enter Bits\n");
    scanf("%s", string);
    /*
    if(string[0] == '1')
    {
        firstBit += 1;
        //printf("%d", firstBit);
        //printf("\nPrint this shit");
    }
    else if(string[1] == '1')
    {
        secondBit += 2;
        printf("This is: %d", secondBit);
    }
    else if(string[2] == '1')
    {
        thirdBit += 4;
    }
    else if(string[3] == '1')
    {
        fourthBit += 8;
    }
    else if(string[4] == '1')
    {
         fifthBit += 16;
    }
    else if(string[5] == '1')
    {
        sixthBit += 32;
    }
    else if(string[6] == '1')
    {
        seventhBit += 64;
    }
    else if(string[7] == '1')
    {
        eighthBit += 128;
    }*/

    for(int i= 0; i < 8; i++)
    {
        if(string[i] == '1')
        {
            anewNum = pow(2, power);
            //newNum += pow(newNum, i);
            printf("anewNum: %d\n", anewNum);
            //printf("i: %d\n", i);*/
            newNum += anewNum;
            printf("newNum: %d\n", newNum);
            //anewNum = 2;
            power--;
        }
        else if(string[i] == '\0')
        {
            printf("Null\n");
            break;
        }

    }

    bitNum = firstBit + secondBit + thirdBit + fourthBit + fifthBit + sixthBit + seventhBit + eighthBit;

    printf("%d", newNum);

    printf("\nHello world!\n");
    printf("Git Gud");
    return 0;
}
