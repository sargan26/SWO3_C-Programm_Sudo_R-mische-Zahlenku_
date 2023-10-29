#include <stdio.h>
#include "roman.h"
#include <string.h>
#include <assert.h>

// function to convert roman to decimal
int roman_to_decimal(const char r[]) {
    int decimal = 0;
    int prevValue = 0;

    for (int i = strlen(r) - 1; i >= 0; i--)
    {
        int current = 0;

        switch (r[i])
        {
        case 'I':
            current = 1;
            break;
        case 'V':
            current = 5;
            break;
        case 'X':
            current = 10;
            break;
        case 'L':
            current = 50;
            break;
        case 'C':
            current = 100;
            break;
        case 'D':
            current = 500;
            break;
        case 'M':
            current = 1000;
            break;    
        default:
            printf("Error: invalid char\n");
            return -1;
        }

        if (current < prevValue)
        {
            decimal -= current;
        } else {
            decimal += current;
        }

        prevValue = current;
    }
    
    return decimal;
}

// function to convert decimal to roman
void decimal_to_roman(int d, char r[]) {
    assert(d > 1 && d < 2999);
    const char* romanNumerals[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    const int decimalValues[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};

    r[0] = '\0'; // init empty string

    for (int i = 0; i < 13; i++)
    {
        while (d >= decimalValues[i])
        {
            strcat(r, romanNumerals[i]);
            d -= decimalValues[i];
        }
    }
}