//
// Created by tuuli on 13/01/2026.
/*
 * This is my own file for my own reusable C codes.
 * This still needs to be implemented and added to my files and to the projects where needed.
 */
//

#ifndef MY_C_HEADER_H
#define MY_C_HEADER_H
#include <stdio.h>
#include <stdlib.h>

//INPUT VIRHEENKÄSITTELY
inline int read_integer(void){
    int num = 0;
    while (scanf(" %d", &num) != 1 ){
        while(getchar() != '\n');
        printf("Invalid input, try again\n");
    }
    while(getchar() != '\n');
    printf("Successful entering \n");
    return num;
}

inline int read_range(int low, int high){
    int user_input;
    while ((scanf("%d", &user_input) != 1) || (user_input < low) || (user_input > high)){  //Looppaa kunnes syötteestä luettu onnistuneesti yksi integeri, joka on halutulla välillä.
        while(getchar() != '\n'); //virheen käsittelyä
        printf("That was not a number between %d-%d. \n", low, high);
        printf("Try again:\n");
    }
    while(getchar() != '\n');   // virheen käsittely
    return user_input;
}

#endif //MY_C_HEADER_H
