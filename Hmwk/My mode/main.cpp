/* 
 * File:   main.cpp
 * Author: Justin
 * Created on September 30, 2015, 7:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void fillA (int[]); //fills up an array
void outputA (int[]); //outputs an array
void sortA (int[]); //sorts an array
void modeA (int[]); //finds mode of an array

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0))); //Random number generator
    int array[100]; //number array
    fillA (array); //calls function to randomly fill up the number array
    cout<<endl<<"Here is an array of random numbers from 0-99"<<endl;
    outputA (array); //calls function to output the array
    cout<<endl<<endl;
    sortA (array); //calls function to sort the array
    cout<<"Here is the same array sorted from least to greatest"<<endl;
    outputA (array); //calls function to output the array
    cout<<endl<<endl;
    modeA (array); //calls function to find the mode of the array
    return 0;
}

void fillA (int array[100]){
    //loop until entire array is filled
    for(int i=0;i<100;i++)array[i]=rand()%100; 
}

void outputA (int array[100]){
    //loop output every number from array
    for(int i=0;i<100;i++){
        if(i%10==0)cout<<endl; //if a number is a multiple of 10, create a new line
        if(array[i]<10)cout<<" "; //if a number is less than 10, add an extra space to keep output formmatted
        cout<<array[i]<<" "; //output the number
    }
}

void sortA (int array[100]){
    //loop until every number is in order from least to greatest
    for(int i=0;i<100;i++){
        int min=array[i],index=i; //keeps track of the lowest number currently found
        for(int j=i+1;j<100;j++){
            if(array[j]<min){ //sorts from least to greatest
                min=array[j];
                index=j;
            }
        }
        if(i!=index){
            int temp=array[i];
            array[i]=array[index];
            array[index]=temp;
        }
    }
}

void modeA (int array[100]){
    int max=1,counter=1,mode=array[0]; //variables to keep track of frequency of numbers
    for(int i=0;i<100;i++){
        if(array[i]==array[i+1]){ //if two numbers are the same
            counter++;
            if(counter>max){ //if counter is bigger than the max allowed
                max=counter;
                mode=array[i]; //set variable equal to the mode
            }           
        }
        else counter=1;
    }
    cout<<"The mode of this array is "<<mode<<endl; //output the mode
}