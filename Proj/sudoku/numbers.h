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
    int easy[81]={0,2,0,5,0,1,4,0,3,1,0,3,0,6,4,0,0,7,0,0,4,3,0,0,0,
                5,1,4,0,0,0,0,0,5,1,6,0,6,0,0,1,3,0,4,0,7,1,0,0,
                4,5,3,0,2,0,9,2,1,0,6,0,0,0,8,7,6,4,3,0,1,2,0,0,
                0,0,0,7,0,6,0,0};
};
struct input{
    char col;
    int row;
    int *pos;
};

#endif	/* NUMBERS_H */

