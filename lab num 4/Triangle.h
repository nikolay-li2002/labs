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

int formula_p(double a, double b, double c) {
    double per;
    per = a + b + c;

    return per;
}

int formula_s(double a, double b, double c, double per){
    double polu = per/2;
    double s, a1 = polu-a, b1 = polu-b, c1 = polu-c;
    s = sqrt(per*a1*b1*c1);
    
    
    return s;
}
