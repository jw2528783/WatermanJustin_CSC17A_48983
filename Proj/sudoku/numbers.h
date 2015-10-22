/* 
 * File:   numbers.h
 * Author: rcc
 *
 * Created on October 21, 2015, 4:08 PM
 */

#ifndef NUMBERS_H
#define	NUMBERS_H

struct numbers{
    int size;
    int *data;
    //Easy Sudoku problem
    int easy[81]={0,2,0,5,0,1,4,0,3,1,0,3,0,6,4,0,0,7,0,0,4,3,0,0,0,
                5,1,4,0,0,0,0,0,5,1,6,0,6,0,0,1,3,0,4,0,7,1,0,0,
                4,5,3,0,2,0,9,2,1,0,6,0,0,0,8,7,6,4,3,0,1,2,0,0,
                0,0,0,7,0,6,0,0};
    //Stock numbers: 1,3,5,6,8,9,11,13,14,17,20,21,25,26,27,33,34,35,37,40,41,43,
    //               45,46,49,50,51,53,55,56,57,59,63,64,65,66,67,69,70,76,78
    int stock[40]={1,3,5,6,8,9,11,13,14,17,20,21,25,26,27,33,34,35,37,40,41,43,
                    45,46,49,50,51,53,55,56,57,59,63,64,65,66,67,69,70,76,78};
};
struct input{
    char col;
    int row;
    int *pos;
};

#endif	/* NUMBERS_H */
