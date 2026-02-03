//
// Created by tuuli on 02/02/2026.
//
#include <stdio.h>
#include "My_C_header.h"

#include <string.h>

//INPUT VIRHEENKÄSITTELY
int read_integer(void){
    int num = 0;
    while (scanf(" %d", &num) != 1 ){
        while(getchar() != '\n');
        printf("Invalid input, try again\n");
    }
    while(getchar() != '\n');
    printf("Successful entering \n");
    return num;
}



int read_range(int low, int high){
    int user_input;
    printf("Enter a number between %d and %d:\n", low, high);
    while ((scanf("%d", &user_input) != 1) || (user_input < low) || (user_input > high)){  //Looppaa kunnes syötteestä luettu onnistuneesti yksi integeri, joka on halutulla välillä.
        while(getchar() != '\n'); //virheen käsittelyä
        printf("That was not a number between %d-%d. \n", low, high);
        printf("Try again:\n");
    }
    while(getchar() != '\n');   // virheen käsittely
    return user_input;
}


void remove_linefeed(char *name){
    if(name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }
}

// Improved version with extra character check, does not allow extra characters after integer input, does not work yet, fucking pain in the ass,
//Luulin et sain sen ratkastua viimevuonna, mutta ei näköjään toimikkaan..
////LÖYTYY MYÖS C_rogramming_K26 projektin Week2_T4.c tiedostosta, VARO RISTIMUOKKAUSTA!!
#if 0
int read_integer2(void){
    int num = 0;
    char wrongchr;
    //while ( (scanf(" %d %c", &num, &wrongchr) != 2 ) ){     //(wrongchr != '\n')
    while ( (scanf(" %d", &num) != 1 || scanf(" %c", &wrongchr) == 1 ) ){
        //if(scanf("%d", &num) != 1) {    //scanf("%c", &extra) == EOF) //Miks tää ei toimi ylimääräsen virhesyötteen eliminoinnissa?

        /*
        if (wrongchr != '\n') {
            while(getchar() != '\n');
        }*/
        while(getchar() != '\n');
        printf("Invalid input, try again\n");


        //}
    }
    while(getchar() != '\n');
    printf("Successful entering \n");
    return num;
}
#endif

//DICE ROLLING FUNCTIONS

int roll_dice_X(int dice_X){
    srand(time(NULL));
    printf("You are throwing a d%d dice!\n", dice_X);
    int x = dice_X + 1;
    int y = x;
    while(x > dice_X) {
        x = 1 + rand()/((y + 1u)/dice_X);
    }
    printf("Dice count:%d \n",  x);
    return x;
}

