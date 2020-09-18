#include <stdio.h>
#define k(x) arr[1][x]

void main()
{
    int exit;
    int size, x = 1, y = 1, sum = 1, arr[100][100] = {}, x1, y2, _1;
p:
    printf("Please set the size number !!!But number can't over 99 and only set odds!!! : ");
    scanf("%d", &size);
    if (size % 2 == 0 || size > 99)
        if (size > 99)
            puts("\nPlease set size less than 99");
        else
            puts("\nPlease type odds");
    else
    {

        x = size / 2 + 1;

        while (sum != size * size + 1)
        {

            arr[y][x] = sum++;
            // else
            x1 = x, y2 = y;
            x++, y--;

            if (y < 1)
                y = size;
            if (x > size)
                x = 1;
            if (arr[y][x] > 0)
                y = y2 + 1, x = x1;
        }

        for (x = 1, sum = 0; x <= size; x++)
            sum += k(x);
        printf("\nline sum = %d\n---------------------------------------------------------------\n", sum);
        for (y = 1; y <= size; y++)
        {
            for (x = 1; x <= size; x++)
                printf("%1d|", arr[y][x]);
            puts("\n---------------------------------------------------------------");
        }
    }
    printf("\n\nDo again : Type '0'\n\nExit program : Type anynumber\n");
    scanf("%d", &exit);
    if (exit == 0)
    {
        x = 1, y = 1, sum = 1;
        for (x1 = 1; x1 <= size; x1++)
            for (y2 = 1; y2 <= size; y2++)
                arr[y2][x1] = 0;
        printf("\n\nRestart Mabangjin program\n\n");
        goto p;
    }
    return;
}