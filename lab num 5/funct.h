//
//  funct.h
//  lab num 5
//
//  Created by Николай Ли on 31.03.2023.
//

#ifndef funct_h
#define funct_h


#endif /* funct_h */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double** new_matrix(int n){
    int i;
    double** matrix = calloc(n, sizeof(double*));
    for(i = 0; i < n; i++){
        matrix[i] = calloc(n, sizeof(double));
    }
    return matrix;
}

void input(int n, double **mat){
    int i, j;
    for(i = 0; i<n; i++){
        for(j =0; j<n; j++){
            printf("Введите значение [%d][%d] = ", i+1, j+1);
            scanf("%lf", &mat[i][j]);
        }
    }
}
void print_mat(int n, double **mat){
    int i, j;
    for(i = 0; i<n; i++){
        for(j =0; j<n; j++){
            printf("%.0lf\t", mat[i][j]);
        }
        printf("\n");
    }
}
double** calc_mat(int n, double **mat1, double **mat2, char c){
    double **res = new_matrix(n);

    if (c == '+'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                res[i][j] = mat1[i][j]+mat2[i][j];
            }
        }
        return res;
    }
    else if (c == '-'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                res[i][j] = mat1[i][j]-mat2[i][j];
            }
        }
        return res;
    }
    else if (c == '*'){
        for (int i=0; i < n; i++){
            for(int j = 0; j<n; j++){
                res[i][j] = 0;
                for(int p=0; p<n; p++){
                    res[i][j] += mat1[i][p]*mat2[p][j];
                }
            }
        }
        return res;
    }
    else{
        return res;
    }
}
