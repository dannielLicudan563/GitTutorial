#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <math.h>

char* charPrinter(int num);
int binConvert(int num);
char* parCounter(int num);
void chrPrinter(int num);

int main(int argc, char *argv[])
{
    char string[100][20];
    char bitString[100][7];
    char jString[100];
    int num = 0;
    int fd = 0;
    int power = 7;
    int result;
    char ascString[100][7];
    char fString[100][10];
    char resultChar;
    int n = 0;
    int o = 0;
    int tNum = 0;
    int nResult;
    int spCtr = 1;

    memset(jString, 0, 100);
    memset(fString, 0, 100);
    fd = read(open(argv[1], O_RDONLY),jString, 100);
    jString[99] = '\0';
    close(fd);

    for(int m = 0; m<100; m++)
    {
        fString[n][o] = jString[m];
        o++;

        if(jString[m] == ' ')
        {
            fString[n][o] = '\0';
            n++;
            o = 0;
            spCtr++;
        }

    }

    for(int x = 0; x < argc; x++)
    {
        strcpy(string[x], argv[x]);
    }

    if(string[1][0] == '-')
    {
        printf("Not Acceptable");
        return 0;
    }
    else if(argc < 2)
    {
        printf("Not Acceptable");
        return 0;
    }

    printf("Original\t ASCII\t\t Decimal\t Parity\t\n");
    printf("--------\t --------\t --------\t --------\t\n");



    for(int a = 1; a<argc; a++)
    {
        num = atoi(string[a]);
        result = binConvert(num);

        if(result <= 32 || result == 127)
        {
            printf("%s\t\t%s\t\t%d\t\t%s\n",string[a], charPrinter(result), result, parCounter(num));
        }
        else
        {
            printf("%s\t\t%c\t\t%d\t\t%s\n",string[a], result, result, parCounter(num));
        }
        num = 0;
        result =0;
    }

    if(spCtr > 1)
    {
        for(int t = 0; t< spCtr; t++)
        {
            tNum = atoi(fString[t]);
            nResult = binConvert(tNum);
            if(nResult <= 32 || nResult == 127)
            {
                printf("%s\t\t%s\t\t%d\t\t%s\n",fString[t], charPrinter(nResult), nResult, parCounter(tNum));
            }
            else
            {
                printf("%s\t\t",fString[t]);
                chrPrinter(nResult);
                printf("\t\t%d\t\t%s\n", nResult, parCounter(tNum));
            }
            tNum = 0;
            nResult =0;
            }
    }


    return 0;
}

void chrPrinter(int num)
{
    char c = num;
    printf("%c", num);
}

char* charPrinter(int num)
{
    if(num == 127)
    {
        num = 33;
    }


    static char chString[34][7] = {"NUL", "SOH", "STX", "ETX", "EOT", "ENQ", "ACK", "BEL", "BS", "HT",
                                  "LF", "VT", "FF", "CR", "SO", "SI", "DLE", "DC1", "DC2", "DC3",
                                  "DC4", "NAK","SYN", "ETB", "CAN", "EM", "SUB", "ESC", "FS", "GS",
                                  "RS", "US", "SPACE", "DEL"};

   return chString[num];
}

int binConvert(int num)
{
    int dec = 0;
    int i = 0;
    int rem = 0;

    if(num > 10000000)
    {
        dec = dec -128;
    }

    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        dec += rem * pow(2, i);
        ++i;
    }

    return dec;
}

char* parCounter(int num)
{
    int parCount = 0;
    int rem = 0;
    int parResult;
    static char parString[2][4] = {"ODD", "EVEN"};
    while (num != 0)
    {
        rem = num % 10;
        num /= 10;
        if(rem == 1)
        {
            parCount++;
        }
    }
    if(parCount % 2 == 0)
    {
        parResult = 1;
    }
    else
    {
        parResult = 0;
    }


    return parString[parResult];
}
