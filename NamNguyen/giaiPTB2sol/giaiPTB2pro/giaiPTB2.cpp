#include<stdio.h>
#include<math.h>
#include "giaiPTB2.h"

void phuongtrinhB2::giaiPT()
{
    delta = b*b - 4 * a * c;
    if (delta < 0)
    {
        printf("Phuong trinh vo nghiem\n");
    }
    else if (delta == 0)
    {
        n1 = (float)-b / 2 * a;
        n2 = (float)-b / 2 * a;
        printf("Phuong trinh co nghiem kep: n1 = n2 = %.3lf", n1);
    }
    else
    {
        delta = (float)sqrt(delta);
        n1 = (-b + delta) / (2 * a);
        n2 = (-b - delta) / (2 * a);
        printf("Nghiem cua PT la n1 = %.3lf, n2 = %.3lf\n", n1, n2);

    }
}