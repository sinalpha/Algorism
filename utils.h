#pragma once
#include <math.h>

int int_convert_string_number_to_number(char *string);

int int_convert_string_number_to_number(char *string)
{

    int number, place_value;

    //check string data  if string include another ASCII(not number char). it will return -1
    for (int a = 0; string[a] != '\0'; a++)
        if (!(string[a] > 47 && string[a] < 58))
            return -1;

    //check place value
    for (int a = 0; string[a] != '\0'; a++)
        place_value = a;

    //convert string number to number
    for (int a = 0; place_value != -1; a++, place_value--)
        number += (string[a] - 48) * pow(10, place_value);

    return number;
}