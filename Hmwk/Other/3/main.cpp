/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 28, 2015, 10:19 PM
 */
//Sorta done?
#include <iostream>
using namespace std;
#include "statsResult.h"
statsResult *avgMedMode(int *,int);
void printStat(statsResult *);

int main(int argc, char** argv) {
    int size;
    cout<<"How big is this array?"<<endl;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cout<<"Enter integer number "<<i+1<<": "<<endl;
        cin>>array[i];
    }
    statsResult *x=avgMedMode(array,size);
    printStat(x);
    delete []x->mode;
    delete x;
    return 0;
}

statsResult *avgMedMode(int *array,int size){
    float mean=0,median;
    statsResult *x=new statsResult;
    x->mode=new int[size];
    for(int i=0;i<size;i++)x->mode[i]=array[i];
    for(int i=0;i<size;i++)mean+=x->mode[i]; //loop and add up each array number
    x->avg=mean/size; //total number divided by the array size
    if(size%2==1)x->median=x->mode[((size+1)/2)-1]; //if array is odd
    else x->median=(x->mode[(size/2)-1]+x->mode[size/2])/2; //if array is even
    int max=1,counter=1,mode=x->mode[0]; //variables to keep track of frequency of numbers
    for(int i=0;i<size;i++){
        if(x->mode[i]==x->mode[i+1]){ //if two numbers are the same
            counter++;
            if(counter>max){ //if counter is bigger than the max allowed
                max=counter;
                mode=array[i]; //set variable equal to the mode
            }           
        }
        else counter=1;
    }
    x->nModes=mode; //output the mode
    x->maxFreq=max; //output max frequency of a mode
    return x;
}

void printStat(statsResult *x){
    cout<<endl<<"The average of the array is "<<x->avg<<endl;
    cout<<"The median of the array is "<<x->median<<endl;
    cout<<"The mode of the array is "<<x->nModes<<endl;
    cout<<"The max frequency of this mode number is "<<x->maxFreq<<endl;
}