//
//  main.c
//  lab num 3
//
//  Created by Николай Ли on 16.02.2023.
//
//Ввести с консоли строку символов произвольной длины (до 80 символов). Поменять в ней все маленькие символы ‘a’ и ‘b’ на заглавные и вывести на консоль полученную строку.
#include <stdio.h>

int main(int argc, const char * argv[]) {
    char word[80];
    scanf ("%s", &word);
    for(int i=0; i<80; i++){
        if (word[i] == 'a') {
            (word[i] -= 'a' - 'A');
        }
        if (word[i] == 'b') {
            (word[i] -= 'b' - 'B');
        }
    }
    printf("%s\n", word);
    return 0;
}
