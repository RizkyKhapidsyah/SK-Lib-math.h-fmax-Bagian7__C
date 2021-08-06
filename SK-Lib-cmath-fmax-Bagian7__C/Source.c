#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("fmax(2,1)    = %f\n", fmax(2, 1));
    printf("fmax(-Inf,0) = %f\n", fmax(-INFINITY, 0));
    printf("fmax(NaN,-1) = %f\n", fmax(NAN, -1));

    _getch();
    return 0;
}