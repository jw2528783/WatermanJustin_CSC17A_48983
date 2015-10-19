/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 19, 2015, 1:46 PM
 *      Sudoku Game
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

void print(int *);
void rules();

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int num[81];
    rules();
    for(int i=0;i<=81;i++){
        num[i]=rand()%9+1;
    }
    cout<<endl;
    print(num);
    return 0;
}

void print(int *num){
    cout<<"  ------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<"  ";
        for(int j=0;j<9;j++){
            cout<<num[i*9+j]<<"  ";
        }
        cout<<endl;
    }
    cout<<"  ------------------------- "<<endl;
}

void rules(){
    cout<<"Hello. This is a Sudoku game."<<endl<<endl;
    cout<<"Here is how the game works:"<<endl;
    cout<<"You are given a partially filled 9x9 grid of numbers."<<endl;
    cout<<"You must fill the entire grid with numbers ranging from 1 to 9"<<endl;
    cout<<"However no number must repeat in the same row or column."<<endl;
    
}