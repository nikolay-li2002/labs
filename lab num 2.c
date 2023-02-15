//
//  main.c
//  lab num 2
//
//  Created by Николай Ли on 15.02.2023.
//

//Объявить массив данных типа double размером 3 на 3. Ввести с консоли его значения, вывести на консоль сумму его элементов, расположенных на главной диагонали и сумму элементов, расположенных на  побочной диагонали.
//Объявить массив данных типа int размером 2 на 2. Ввести с консоли его значения, вывести на консоль квадрат данной матрицы.

#include <stdio.h>

int main(int argc, const char * argv[]) {
   // №1
    double arr[3][3];
    scanf ("%lf", &arr[0][0]);
    scanf ("%lf", &arr[0][1]);
    scanf ("%lf", &arr[0][2]);
    scanf ("%lf", &arr[1][0]);
    scanf ("%lf", &arr[1][1]);
    scanf ("%lf", &arr[1][2]);
    scanf ("%lf", &arr[2][0]);
    scanf ("%lf", &arr[2][1]);
    scanf ("%lf", &arr[2][2]);
    
    float sum1, sum2;
    sum1 = arr[0][0] + arr[1][1] + arr[2][2];
    sum2 = arr[0][2] + arr[1][1] + arr[2][0];
    printf("Summa glavnaya = %.0f\n", sum1);
    printf("Summa pobochaya = %.0f\n", sum2);
    
    // №2
    int array[2][2];
    scanf ("%d", &array [0][0]);
    scanf ("%d", &array [0][1]);
    scanf ("%d", &array [1][0]);
    scanf ("%d", &array [1][1]);
    
    printf ("[%d , %d]\n", array[0][0], array[0][1]);
    printf ("[%d , %d]\n", array[1][0], array[1][1]);
    
    return 0;
}
