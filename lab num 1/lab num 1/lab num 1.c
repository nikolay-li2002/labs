//
//  main.c
//  lab num 1
//
//  Created by Николай Ли on 18.02.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    double a,b,c,d;
    double x1,x2;
    a=3; b=4; c=1;
    d=pow(b, 2) - 4*a*c;
    printf ("d= %lf\n",d);
    x1 = (-b + sqrt(d))/ (2*a);
    x2 = (-b - sqrt(d))/ (2*a);
    printf ("x1=%lf, x2=%lf\n",x1,x2);
    return 0;
}
