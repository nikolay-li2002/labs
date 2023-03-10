//
//  Formula.h
//  lab num 4
//
//  Created by Николай Ли on 10.03.2023.
//

#ifndef Formula_h
#define Formula_h


#endif /* Formula_h */

#include <stdio.h>
#include <math.h>

void formula(double a, double b, double c) {
    if (a+b >= c && a+c >= b && b+c >= a) {
        double p;
        p = a + b + c;
        double polu = p/2;
        double s, a1 = polu-a, b1 = polu-b, c1 = polu-c;
        s = sqrt(p*a1*b1*c1);
        
        printf("Значение периметра = %f\n", p);
        printf("Значение площади = %f\n", s);
    } else {
        printf("Треугольник не существует\n");
    }
}
