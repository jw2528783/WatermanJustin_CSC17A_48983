/* 
 * File:   statsResult.h
 * Author: Justin
 *
 * Created on October 28, 2015, 10:20 PM
 */

#ifndef STATSRESULT_H
#define	STATSRESULT_H

struct statsResult{
    float avg;
    float median;
    int *mode;   //array containing the modes
    int nModes;  //number of modes in the array
    int maxFreq; //max frequency of modes
};

#endif	/* STATSRESULT_H */

