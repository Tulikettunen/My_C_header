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
#include <time.h>

//INPUT VIRHEENKÄSITTELY
int read_integer(void);
int read_range(int low, int high);

//DICE ROLLING FUNCTIONS
int roll_dice_X(int dice_X);

#endif //MY_C_HEADER_H
