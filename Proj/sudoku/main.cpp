/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 19, 2015, 1:46 PM
 *      Sudoku Game
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "numbers.h"
using namespace std;

void print(numbers *,int,int);
void rules();
int input(char,int);
void testing();
void first(numbers *);
numbers *array(int);
void test(numbers *);

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int num[81],answer,newnum,size=81,row;
    //rules();
    numbers *grid=array(size);
    for(int i=0;i<=81;i++)num[i]=rand()%9+1;
    char col;
    //testing();
    first(grid);
    while(col!='X'){
        cout<<endl<<endl;
        cout<<"Enter the column. Use a Capital letter."<<endl;
        cin>>col;
        if(col=='X')break;
        cout<<"Enter the row."<<endl;
        cin>>row;
        cin>>newnum;
        answer=input(col,row);
        print(grid,answer,newnum);
    }
    cout<<"You entered an 'X'"
            "\nNow I will check your grid to see if you are correct."<<endl;
    test(grid);
    cout<<"-----DONE-----"<<endl;
    delete []grid->data;
    delete grid;
    
    return 0;
}

numbers *array(int n){
    numbers *x=new numbers;
    x->size=n;
    x->data=new int[x->size];
    for(int i=0;i<x->size;i++){
        x->data[i]=x->easy[i];
    }
    return x;
}

int input(char col,int row){
    int pos;
    if(col=='X')cout<<"Error. Inputted X."<<endl;
    if(col=='A')pos=0;
    if(col=='B')pos=1;
    if(col=='C')pos=2;
    if(col=='D')pos=3;
    if(col=='E')pos=4;
    if(col=='F')pos=5;
    if(col=='G')pos=6;
    if(col=='H')pos=7;
    if(col=='I')pos=8;
    if(row==1)pos=pos+(9*0);
    if(row==2)pos=pos+(9*1);
    if(row==3)pos=pos+(9*2);
    if(row==4)pos=pos+(9*3);
    if(row==5)pos=pos+(9*4);
    if(row==6)pos=pos+(9*5);
    if(row==7)pos=pos+(9*6);
    if(row==8)pos=pos+(9*7);
    if(row==9)pos=pos+(9*8);
    return pos;
}

void first(numbers *x){
    //Temp easy sudoku problem
    cout<<endl<<endl<<endl<<"  A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    cout<<" ---------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<"| "; //Pushes whole grid to the right by one space
        for(int j=0;j<9;j++){
            if(x->data[i*9+j]==0)cout<<"-  ";
            else cout<<x->data[i*9+j]<<"  ";
        }
        cout<<"|    "<<i+1<<endl;
    }
    cout<<" ---------------------------- "<<endl;
}

void print(numbers *x,int answer,int newnum){
    x->data[answer]=newnum;
    cout<<endl<<endl<<endl<<"  A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    cout<<" ---------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<"| "; //Pushes whole grid to the right by one space
        for(int j=0;j<9;j++){
            if(x->data[i*9+j]==0)cout<<"-  ";
            else cout<<x->data[i*9+j]<<"  ";
        }
        cout<<"|    "<<i+1<<endl;
    }
    cout<<" ---------------------------- "<<endl;
}

void rules(){
    cout<<"Hello. This is a Sudoku game."<<endl<<endl;
    cout<<"Here is how the game works:"<<endl;
    cout<<"You are given a partially filled 9x9 grid of numbers."<<endl;
    cout<<"You must fill the entire grid with numbers ranging from 1 to 9"<<endl;
    cout<<"However no number must repeat more than once in the same row or column."<<endl;
    cout<<"To input numbers in the grid, first input the capital letter of the"
            " desired column, press enter, then input the corresponding number on "
            "the right hand side of the grid to select the desired row."<<endl;
    cout<<"Then enter the desired number that you would like to put in that position."<<endl;
    cout<<"When you think you are done, input the capital letter 'X' to see if you are"
            "correct."<<endl;
}

void testing(){
    int array[81],j=1;
    cout<<" A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    for(int i=0;i<81;i++){
        array[i]=i;
        if(i<10)cout<<" ";
        cout<<array[i]<<" "; 
        if(i%9==(9-1)){
            cout<<"      "<<j<<endl;
            j++;
        }
    }
    cout<<endl;
}

void test(numbers *x){
    int total,total2;
    for(int i=0;i<9;i++){
        total=total+x->data[i];
        total2=total2+x->data[i+9];
        if(total==45)cout<<"Yeah correct!!!"<<endl;
        if(total2==45)cout<<"Yeah correct again!!!"<<endl;
    }
    
}