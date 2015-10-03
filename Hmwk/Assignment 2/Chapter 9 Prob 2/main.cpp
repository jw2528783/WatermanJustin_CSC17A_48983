/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 2, 2015, 10:59 PM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;

void fillA(float *,float); //Fill array with grade scores
void sortA(float *,float); //Sorts grades from least to greatest
float avgTest(float *,float); //Finds average test score
void outputT(float*,float,float); //Outputs results

int main(int argc, char** argv) {
    int numTest; //number of tests.
    float average;
    float *tests= new float[numTest];
    cout<<"How many test scores are being counted?"<<endl;
    cin>>numTest;
    fillA(tests,numTest);
    sortA(tests,numTest);
    average=avgTest(tests,numTest);
    outputT(tests,average,numTest);
    delete [] tests;
    return 0;
}
void fillA(float *tests, float numTest){
    cout<<"Enter grades of students."<<endl;
    for(int i=0; i<numTest; i++)cin>> *(tests+i);    
}
void sortA(float *tests,float numTest){
    int index, min;
    for (int i=0;i<numTest;i++){
       index=i;
       min=*(tests+i);
       for(int count=i+1;count<numTest;count++){
          if (*(tests+count)<min){
             min=*(tests+count);
             index=count;
          }
       }
       *(tests+index)=*(tests+i);
       *(tests+i)=min;
    }
 }
float avgTest(float *tests, float numTest){
    float avg, total=0.0; 
    for(int i=0;i<numTest;i++)total+=*(tests+i);
    avg=total/numTest;
    return avg;
}
void outputT(float *tests,float avg,float numTest){
    cout<<"Test Scores "<<endl;
    for(int i=0;i<numTest;i++)cout<<*(tests+i)<<endl;
    cout<<"The average test score is "<<avg;
}