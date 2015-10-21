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

void print(int *,int,int);
void rules();
int input(char,int);
void test();
void first();

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int num[81],answer,newnum;
    //temp easy sudoku problem
    int easy[81]={0,2,0,5,0,1,4,0,3,1,0,3,0,6,4,0,0,7,0,0,4,3,0,0,0,
                5,1,4,0,0,0,0,0,5,1,6,0,6,0,0,1,3,0,4,0,7,1,0,0,
                4,5,3,0,2,0,9,2,1,0,6,0,0,0,8,7,6,4,3,0,1,2,0,0,
                0,0,0,7,0,6,0,0};
    //rules();
    for(int i=0;i<=81;i++)num[i]=rand()%9+1;
    char col;
    int row;
    //test();
    first();
    while(col!='X'){
        cout<<endl<<endl;
        cin>>col;
        if(col=='X')break;
        cin>>row;
        cin>>newnum;
        answer=input(col,row);
        print(easy,answer,newnum);
    }
    cout<<"-----DONE-----"<<endl;
    return 0;
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

void first(){
    //Temp easy sudoku problem
    int easy[81]={0,2,0,5,0,1,4,0,3,1,0,3,0,6,4,0,0,7,0,0,4,3,0,0,0,
                    5,1,4,0,0,0,0,0,5,1,6,0,6,0,0,1,3,0,4,0,7,1,0,0,
                    4,5,3,0,2,0,9,2,1,0,6,0,0,0,8,7,6,4,3,0,1,2,0,0,
                    0,0,0,7,0,6,0,0};
    cout<<endl<<endl<<endl<<"  A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    cout<<" ---------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<"| "; //Pushes whole grid to the right by one space
        for(int j=0;j<9;j++){
            if(easy[i*9+j]==0)cout<<"-  ";
            else cout<<easy[i*9+j]<<"  ";
        }
        cout<<"|    "<<i+1<<endl;
    }
    cout<<" ---------------------------- "<<endl;
}

void print(int *easy,int answer,int newnum){
    easy[answer]=newnum;
    cout<<endl<<endl<<endl<<"  A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    cout<<" ---------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<"| "; //Pushes whole grid to the right by one space
        for(int j=0;j<9;j++){
            if(easy[i*9+j]==0)cout<<"-  ";
            else cout<<easy[i*9+j]<<"  ";
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

void test(){
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