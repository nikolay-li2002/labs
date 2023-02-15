//
//  lab num 1.c
//
//  Created by Николай Ли on 11.02.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    float a,b,c,d;
    double x1,x2;
    a=3; b=4; c=1;
    d=b*b + 4*a*c;
    printf ("d= %f\n",d);
    x1 = (-b + sqrt(d))/ (2*a);
    x2 = (-b - sqrt(d))/ (2*a);
    printf ("x1=%lf, x2=%lf ",x1,x2);
    return 0;
}
