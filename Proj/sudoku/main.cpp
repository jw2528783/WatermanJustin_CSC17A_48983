/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 16, 2015, 1:46 PM
 *      Sudoku Game
 */

//Last working on incorporating strings and/or character arrays. Go to rules funciton.

#include <cstdlib>
#include <iostream>
#include <ctime>
#include "numbers.h"
#include <cstring>
using namespace std;

void print(numbers *,int,int);
void rules();
int input(char,int,numbers *);
void testing();
void first(numbers *);
numbers *array(int);
void test(numbers *);
void colcheck(char);

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    int num[80],answer,newnum,size=81,row;
    rules();
    numbers *grid=array(size);
    char col;
    //testing();
    first(grid);
    while(col!='X'){
        answer=0;
        cout<<endl<<endl;
        cout<<"Enter the column. Use a Capital letter."<<endl;
        cin>>col;
        if(col=='X'||col=='x')break;
        colcheck(col);
        cout<<"Now enter the row."<<endl;
        cin>>row;
        cout<<"Now enter the number that should be in that position."<<endl;
        cin>>newnum;
        answer=input(col,row,grid);
        if(answer==-1)first(grid);
        else print(grid,answer,newnum);
    }
    cout<<"You entered an 'X'"
            "\nNow I will check your grid to see if you are correct...\n"<<endl;
    test(grid);
    cout<<"\n-----DONE-----"<<endl;
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

int input(char col,int row,numbers *x){
    int pos;
    cout<<endl;
    if(col=='X'||col=='x')cout<<"Error. Inputted X."<<endl;
    if(col=='A')pos=0;
    if(col=='B')pos=1;
    if(col=='C')pos=2;
    if(col=='D')pos=3;
    if(col=='E')pos=4;
    if(col=='F')pos=5;
    if(col=='G')pos=6;
    if(col=='H')pos=7;
    if(col=='I')pos=8;
    if(col=='a')pos=0;
    if(col=='b')pos=1;
    if(col=='c')pos=2;
    if(col=='d')pos=3;
    if(col=='e')pos=4;
    if(col=='f')pos=5;
    if(col=='g')pos=6;
    if(col=='h')pos=7;
    if(col=='i')pos=8;
    if(row==1)pos=pos+(9*0);
    if(row==2)pos=pos+(9*1);
    if(row==3)pos=pos+(9*2);
    if(row==4)pos=pos+(9*3);
    if(row==5)pos=pos+(9*4);
    if(row==6)pos=pos+(9*5);
    if(row==7)pos=pos+(9*6);
    if(row==8)pos=pos+(9*7);
    if(row==9)pos=pos+(9*8);
    for(int i=0;i<41;i++){
        if(pos==x->stock[i]){
            cout<<endl<<"Error. You can't change a stock number."<<endl;
            return -1;
        }
    }
    return pos;
}

void first(numbers *x){
    cout<<endl<<endl<<endl<<"      A  B  C  D  E  F  G  H  I  "<<endl<<endl;
    cout<<"     ---------------------------- "<<endl;
    for(int i=0;i<9;i++){
        cout<<i+1<<"   | "; //Pushes whole grid to the right by one space
        for(int j=0;j<9;j++){
            if(x->data[i*9+j]==0)cout<<"-  ";
            else cout<<x->data[i*9+j]<<"  ";
        }
        cout<<"|   "<<i+1<<endl;
    }
    cout<<"     ---------------------------- "<<endl;
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
    string name;
    cout<<"Hello new player. Enter your name so I can remember you."<<endl;
    getline(cin,name);
    cout<<"\nWelcome "<<name<<endl<<endl;
    cout<<"\nThis is a Sudoku game."<<endl<<endl;
    cout<<"Here is how the game works:"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"You are given a partially filled 9x9 grid of numbers."<<endl;
    cout<<"You must fill the entire grid with numbers ranging from 1 to 9"<<endl;
    cout<<"However no number must repeat more than once in the same row or column.\n"<<endl;
    cout<<"To input numbers in the grid:"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter the capital letter of the desired column."
            "\nThen input the corresponding number on the right hand side "
            "of the grid to select the desired row."<<endl;
    cout<<"Then enter the desired number that you would like to put in that position."<<endl;
    cout<<"When you think you are done, input the capital letter 'X' to see if you are"
            "correct."<<endl;
}

/*void testing(){
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
}*/

void test(numbers *x){
    int count=0,total=0,total2=0,total3=0,total4=0,total5=0,total6=0;
    int total7=0,total8=0,total9=0;
    int col=0,col2=0,col3=0,col4=0,col5=0,col6=0,col7=0,col8=0,col9=0;
    for(int i=0;i<81;i++){
        if(x->data[i]!=x->answer[i])count++;
    }
    if(count>0)cout<<"Error. You are wrong."<<endl<<endl<<endl;
    else cout<<"You are correct! The puzzle is solved!"<<endl<<endl<<endl;
    /*
     *              //Loops and checks each column and row to see if equals 45
    for(int i=0;i<9;i++){
        total=total+x->data[i];
        total2=total2+x->data[i+9];
        total3=total3+x->data[i+18];
        total4=total4+x->data[i+27];
        total5=total5+x->data[i+36];
        total6=total6+x->data[i+45];
        total7=total7+x->data[i+54];
        total8=total8+x->data[i+63];
        total9=total9+x->data[i+72];
    }
    for(int i=0;i<9;i++){
        col=col+x->data[i*9];
        col2=col2+x->data[(i*9)+1];
        col3=col3+x->data[(i*9)+2];
        col4=col4+x->data[(i*9)+3];
        col5=col5+x->data[(i*9)+4];
        col6=col6+x->data[(i*9)+5];
        col7=col7+x->data[(i*9)+6];
        col8=col8+x->data[(i*9)+7];
        col9=col9+x->data[(i*9)+8];
    }
    if(total==45)cout<<"Row 1 correct.";
    if(total2==45)cout<<" Row 2 correct.";
    if(total3==45)cout<<" Row 3 correct.";
    if(total4==45)cout<<" Row 4 correct.";
    if(total5==45)cout<<" Row 5 correct.";
    if(total6==45)cout<<" Row 6 correct.";
    if(total7==45)cout<<" Row 7 correct.";
    if(total8==45)cout<<" Row 8 correct.";
    if(total9==45)cout<<" Row 9 correct.";
    cout<<endl;
    if(col==45)cout<<"Column 1 correct.";
    if(col2==45)cout<<" Column 2 correct.";
    if(col3==45)cout<<" Column 3 correct.";
    if(col4==45)cout<<" Column 4 correct.";
    if(col5==45)cout<<" Column 5 correct.";
    if(col6==45)cout<<" Column 6 correct.";
    if(col7==45)cout<<" Column 7 correct.";
    if(col8==45)cout<<" Column 8 correct.";
    if(col9==45)cout<<" Column 9 correct.";
    */
    //for(int i=0;i<81;i++)cout<<total[i]<<" ";
}

void colcheck(char col){
    if(col=='a')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='b')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='c')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='d')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='e')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='f')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='g')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='h')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
    if(col=='i')cout<<"\n...I would have preferred it if you used a CAPITAL letter...\n"<<endl;
}

/*
 * //This is what the grid should look like
 * 
             A  B  C  D  E  F  G  H  I  

             0  1  2  3  4  5  6  7  8       1
             9 10 11 12 13 14 15 16 17       2
            18 19 20 21 22 23 24 25 26       3
            27 28 29 30 31 32 33 34 35       4
            36 37 38 39 40 41 42 43 44       5
            45 46 47 48 49 50 51 52 53       6
            54 55 56 57 58 59 60 61 62       7
            63 64 65 66 67 68 69 70 71       8
            72 73 74 75 76 77 78 79 80       9
*/