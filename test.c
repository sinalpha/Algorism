#include <stdio.h>
#include "Calculus.h"
int main()
{
    int a, b, c, d, e, f;
    double *k;

    printf("Input point A x, y and point B x, y and ration m:n || ");
    scanf("%d %d %d %d %d:%d", &a, &b, &c, &d, &e, &f);

    k = getInternallyDividingPoint(a, b, c, d, e, f);
    printf("internally dividing point of A and B is (%.2f, %.2f)", k[0], k[1]);
}