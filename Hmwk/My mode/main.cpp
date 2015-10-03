/* 
 * File:   main.cpp
 * Author: Justin
 * Created on September 30, 2015, 7:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void fillA (int[],int); //fills up an array
void outputA (int[],int); //outputs an array
void sortA (int[],int); //sorts an array
void modeA (int[],int); //finds mode of an array
float meanA (int[],int); //finds average of an array
float medianA (int[],int); //finds median of an array

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0))); //Random number generator
    int perLine; //size of array
    cout<<"How big do you want your array to be?"<<endl;
    cin>>perLine;
    int array[perLine]; //number array
    fillA (array,perLine); //calls function to randomly fill up the number array
    cout<<endl<<"Here is an array of random numbers from 0-99"<<endl;
    outputA (array,perLine); //calls function to output the array
    cout<<endl<<endl;
    sortA (array,perLine); //calls function to sort the array
    cout<<"Here is the same array sorted from least to greatest"<<endl;
    outputA (array,perLine); //calls function to output the array
    cout<<endl<<endl;
    modeA (array,perLine); //calls function to find the mode of the array
    cout<<"The average of this array is "<<meanA (array,perLine)<<endl; //calls function to find the average of the array
    cout<<"The median of this array is "<<medianA (array,perLine)<<endl; //calls function to find the median of the array
    cout<<endl;
    return 0;
}

void fillA (int array[],int n){
    //loop until entire array is filled
    for(int i=0;i<n;i++)array[i]=rand()%100; 
}

void outputA (int array[],int n){
    //loop output every number from array
    for(int i=0;i<n;i++){
        if(i%10==0)cout<<endl; //if a number is a multiple of 10, create a new line
        if(array[i]<10)cout<<" "; //if a number is less than 10, add an extra space to keep output formmatted
        cout<<array[i]<<" "; //output the number
    }
}

void sortA (int array[],int n){
    //loop until every number is in order from least to greatest
    for(int i=0;i<n;i++){
        int min=array[i],index=i; //keeps track of the lowest number currently found
        for(int j=i+1;j<n;j++){
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

void modeA (int array[],int n){
    int max=1,counter=1,mode=array[0]; //variables to keep track of frequency of numbers
    for(int i=0;i<n;i++){
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

float meanA (int array[],int n){
    float mean=0;
    for(int i=0;i<n;i++)mean+=array[i];
    return mean/n;
}

float medianA (int array[],int n){
    if(n%2==1)return array[((n+1)/2)-1];
    else{
        return ((array[n/2]+array[(n/2)+1])/2);
    }
}