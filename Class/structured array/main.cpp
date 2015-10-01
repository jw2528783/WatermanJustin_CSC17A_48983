/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on October 1, 2015, 12:10 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Library
#include "Array.h"

//Function Prototypes
Array *fillArray(int);
void printArray(Array *,int);

int main(int argc, char** argv) {
    //Set random number gen and size of array
    srand(static_cast<unsigned int>(time(0)));
    int size=100,perLine=10;
    //Declare and size our ADT
    Array *array=fillArray(size);
    //Print results
    printArray(array,perLine);
    //Destroy/Deallocate memory
    delete []array->data;
    delete array;
    
    return 0;
}

//Allocate memory and data for structure
Array *fillArray(int n){
    //Check n
    if(n<=1)n=2;
    //Allocate memory
    Array *a=new Array;
    a->size=n;
    a->data=new int[a->size];
    //Loop and fill with random numbers
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;
    }
    return a;
}

void printArray(Array *a,int perLine){
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}