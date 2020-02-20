# GitTutorial
2/19/20 Program can now take input of 1's and 0's and give the decimal value, ascii character of said decimal value and the parity.
Summary:
Program can take an input of 1's and 0's and give the decimal value, ascii character of said decimal value and the parity.
Program can read input from a text file and turn input of 1s and 0s from a text file into a decimal then give the ascii character of said decimal and the parity.
Program can terminate if the is no arguments or if the second argument is a '-'

The two high level functions that I used are memset() and atoi()
I used memset because the data in the empty array needed to be cleared out in order for my program to work, without memset my program would not work.
I used atoi() because it converted the entry of 1's and 0's into a decimal value which I could then convert into another decimal value which is based on the number of 1's and 0's in the decimal value that atoi() gave me. Again without this my program would not work.
