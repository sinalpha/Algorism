#include <stdio.h>
#include <math.h>
#include "utils.h"

int main()
{

    char string[1000];
    scanf("%s", string);

    printf("converted number : %d", int_convert_string_to_number(string));

    return 0;
}