//
//  main.c
//  lab num 4
//
//  Created by Николай Ли on 16.02.2023.
//
// Написать функции, вычисляющие периметр и площадь треугольника по значениям длин трёх его сторон.
// Разместить их в отдельном модуле (отличном от того, где располагается функция main( )).
// Ввести с консоли значения длин сторон треугольника (с проверкой на корректность неравенства треугольника) и выдать на консоль вычисленные с помощью написанных функций значения его периметра и площади.

#include <stdio.h>
#include <math.h>

void formula(double a, double b, double c);

int main() {
    double a, b, c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    formula(a, b, c);
    
    return 0;
}

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
