#include<stdio.h>
#include<math.h>
#include "giaiPTB2.h"

phuongtrinhB2::phuongtrinhB2(int a, int b, int c)
{
    //this->a = a;
    //this->b = b;
    //this->c = c;
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

phuongtrinhB2::~phuongtrinhB2()   //ham huy
{

}

void phuongtrinhB2::hamX(phuongtrinhB2 X)
{
    X.a = this->a;
    X.b = this->b;
    X.c = this->c;
    phuongtrinhB2(X.a, X.b, X.c);
}