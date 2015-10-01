/* 
 * File:   main.cpp
 * Author: Justin
 * Created on September 30, 2015, 7:48 PM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

void fillA (int[]);
void outputA (int[]);
void sortA (int[]);
void modeA (int[]);

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int array[100];
    fillA (array);
    cout<<"Here is a random array of numbers from 0-99"<<endl;
    outputA (array);
    cout<<endl<<endl;
    sortA (array);
    cout<<"Here is the same array sorted from least to greatest"<<endl;
    outputA (array);
    cout<<endl<<endl;
    modeA (array);
    return 0;
}

void fillA (int array[100]){
    for(int i=0;i<100;i++)array[i]=rand()%100;
}

void outputA (int array[100]){
    for(int i=0;i<100;i++){
        if(array[i]<10)cout<<" ";
        if(i%10==0)cout<<endl;
        cout<<array[i]<<" ";
    }
}

void sortA (int array[100]){
    for(int i=0;i<100;i++){
        int min=array[i],index=i;
        for(int j=i+1;j<100;j++){
            if(array[j]<min){
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
    int max=0,temp=1,mode=array[0];
    for(int i=0;i<100;i++){
        if(array[i]==array[i+1]){
            temp++;
            if(temp>max){
                max=temp;
                mode=array[i];
            }
        }
        else temp=1;
    }
    cout<<"The mode of this array is "<<mode<<endl;
}