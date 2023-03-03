//
//  main.c
//  lab num 2 update
//
//  Created by Николай Ли on 04.03.2023.
//

#include <stdio.h>
#include <math.h>

int main() {
//    №1
//    int a=3, b=2, res;
//    res=a/b;
//    printf("%d\n", res);
    int y,u;
    printf("Количество строк в матрице ");
    scanf("%d", &y);
    printf("Количество столбцов в матрице ");
    scanf("%d", &u);
    printf("Заполните массив\n");
    double arr[y][u];
    for(int i=0; i<y; i++) {
        for(int o=0; o<u; o++){
            scanf ("%lf", &arr[i][o]);
        }
    }
    float sum1=0, sum2=0;
    if (y >= u) {
        int m=0;
        for (int i=0; i<y; i++){
            sum1 = sum1 + arr[i][i];
        }
        for (int i=y-1; i> -1; i--){
            
            sum2 = sum2 + arr[m][i];
            m=m+1;
        }
        printf("Summa glavnaya = %.0f\n", sum1);
        printf("Summa pobochaya = %.0f\n", sum2);
    } else {
        int j=0;
        for (int i=0; i<u; i++){
            sum1 = sum1 + arr[i][i];
        }
        for (int i=u-1; i>-1; i--){
            sum2 = sum2 + arr[j][i];
            j=j+1;
        }
        printf("Summa glavnaya = %.0f\n", sum1);
        printf("Summa pobochaya = %.0f\n", sum2);
    }
        
    
    printf("\n");

    
//    №2
    int p,l;
    printf("Количество строк в матрице ");
    scanf("%d", &p);
    printf("Количество столбцов в матрице ");
    scanf("%d", &l);
    printf("Заполните массив\n");
    int array[p][l];
    
    for(int k=0; k<p; k++) {
        for(int r=0; r<l; r++){
            scanf ("%d", &array[k][r]);
        }
    }
    int v;
    if (p==2 && l==2){
        v = array[0][0]*array[1][1] - array[0][1]*array[1][0];
        printf ("%d\n", v);
    }
    else if (p==3 && l==3){
        v = array[0][0]*array[1][1]*array[2][2] + array[0][1]*array[1][2]*array[2][0] + array[0][2]*array[1][0]*array[2][1] - array[0][2]*array[1][1]*array[2][0] - array[0][1]*array[1][0]*array[2][2] - array[0][0]*array[1][2]*array[2][1];
        printf ("%d\n", v);
    }
//    else {
//        v = array[0][0]*(array[1][1]*array[2][2]*array[3][3] + array[1][2]*array[2][3]*array[3][1] + array[1][3]*array[2][1]*array[3][2] - array[1][3]*array[2][2]*array[3][1] - array[1][2]*array[2][1]*array[3][3] - array[1][1]*array[2][3]*array[3][2]) - );
        
//    }
    return 0;
}
