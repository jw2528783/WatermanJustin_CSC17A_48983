/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on October 16, 2015, 1:46 PM
 *      Project: Sudoku Game
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
#include <iomanip>
using namespace std;

//User Libraries
#include "numbers.h"

//Function Prototypes
void print(numbers *,int,int);          //Prints the Sudoku grid
void rules(char[]);                           //Prints rules for the game
template <class t>
int input(t,int,numbers *,int[],int);      //Determines what number the user wants to fill
void first(numbers *);                  //Prints the Sudoku grid before any alterations
numbers *array(int,int[],int);                //Creates the structure array that holds sudoku info
int test(numbers *,int[],int);               //Tests to see if the puzzle is correct
void colcheck(char);                    //Checks to see if you input correctly

int main(int argc, char** argv) {
    //Create character array for player name
    char name2[50];
    int random[50],v=0;
    cout<<setw(2)<<"Hello new player. Enter your name so I can remember you."<<endl;
    //Input player's name, includes spaces and punctuation for up to 50 characters
    cin.getline(name2,50);
    int again=1;
    score<int> info(v);
    score<int> *pointer;
    pointer=new score<int>(v);
    delete pointer;
    for(int j=0;j<50;j++){
        random[j]=rand()%4+1;
    }
    while(again==1){
        again=0;
        //Random Number seeder
        srand(static_cast<unsigned int>(time(0)));
        //Declare variables
        int answer,newnum,size=81,row;
        char col;
        string diff;
        //Prints the rules of the game
        rules(name2);
        //Generates a random number between 1 and 3 to determine which puzzle to display
        //Create structure and memory allocation
        numbers *grid=array(size,random,v);
        //Displays the unalterated sudoku grid
        first(grid);
        //Loops asking the player to continually input/update the grid until finished
        while(col!='X'){
            answer=0;
            cout<<endl<<endl;
            cout<<"Enter the column. Use a Capital letter."<<endl;
            cin>>col;
            //If user inputs 'X' then stop the loop
            if(col=='X'||col=='x')
                break;
            if(col=='R'||col=='r'){
                delete []grid->data;
                grid=array(size,random,v);
                cout<<endl<<endl<<"\tRESTART"<<endl<<endl<<endl;
                first(grid);
                cout<<"Enter the column. Use a Capital letter."<<endl;
                cin>>col;
                if(col=='X'||col=='x')
                    break;
            }
            //Check to see if the user input a valid character
            colcheck(col);
            cout<<"Now enter the row."<<endl;
            cin>>row;
            cout<<"Now enter the number that should be in that position."<<endl;
            cin>>newnum;
            //Determine the exact point in the array that the player wants to fill
            answer=input(col,row,grid,random,v);
            //If player made invalid input, state error and ask for new input
            if(answer==-1)
                first(grid);
            //Otherwise print the sudoku grid with the updated numbers and positions
            else print(grid,answer,newnum);
        }
        cout<<"You entered an 'X'"
                "\nNow I will check your grid to see if you are correct...\n"<<endl;
        //Test to see if player correctly solved the puzzle
        int temp;
        temp=test(grid,random,v);
        if(temp==0)info.no();
        if(temp==1)info.yay();
        cout<<endl<<endl<<"How hard was this puzzle?\n-easy?\n-medium?\n-hard?\nPlease enter "
                "one of the three words above, exactly as shown, so I can keep "
                "record of it."<<endl;
        cin.ignore();
        getline(cin,diff);
        if(diff=="easy")
            cout<<"Wow you are so smart for thinking this is easy."<<endl;
        if(diff=="medium")
            cout<<"Not bad. It was an easier problem, but you did well."<<endl;
        if(diff=="hard")
            cout<<"Keep playing my program, you'll be great in no time."<<endl;
        cout<<"\n-----DONE-----"<<endl;
        info.done();
        //Delete memory allocation
        delete []grid->data;
        delete grid;
        cout<<endl<<endl<<"Do you want to play again?"<<endl;
        cout<<"Enter 0 for no and 1 for yes."<<endl;
        cin>>again;
        col='z';
        v++;
    }
    cout<<info.getaverage()<<"%"<<endl;
    //Exit
    return 0;
}

numbers *array(int n,int random[],int v){
    //Memory Allocation
    numbers *x=new numbers;
    x->size=n;
    x->data=new int[x->size];
    for(int i=0;i<x->size;i++){
        //Determines which puzzle to use based on the random number generated in main
        if(random[v]==1)
            x->data[i]=x->easy[i];
        if(random[v]==2)
            x->data[i]=x->easy2[i];
        if(random[v]==3)
            x->data[i]=x->hard[i];
        if(random[v]==4)
            x->data[i]=x->hard2[i];
    }
    //for(int i=0;i<=81;i++){
        //if(x->hard2[i]!=0)cout<<i<<",";
    //}
    return x;
}

template <class t>
int input(t col,int row,numbers *x,int random[],int v){
    //Declare variable as exact position
    int pos;
    cout<<endl;
    try{
    //Check if inputted correct characters
        if(col=='X'||col=='x'){
            string exception="Error. Inputted X.";
            throw exception;
        }
    //Set a number value to the inputted character
        if(col=='A'){
            pos=0;
        }
        if(col=='B'){
            pos=1;
        }
        if(col=='C'){
            pos=2;
        }
        if(col=='D'){
            pos=3;
        }
        if(col=='E'){
            pos=4;
        }
        if(col=='F'){
            pos=5;
        }
        if(col=='G'){
            pos=6;
        }
        if(col=='H'){
            pos=7;
        }
        if(col=='I'){
            pos=8;
        }
        if(col=='a'){
            pos=0;
        }
        if(col=='b'){
            pos=1;
        }
        if(col=='c'){
            pos=2;
        }
        if(col=='d'){
            pos=3;
        }
        if(col=='e'){
            pos=4;
        }
        if(col=='f'){
            pos=5;
        }
        if(col=='g'){
            pos=6;
        }
        if(col=='h'){
            pos=7;
        }
        if(col=='i'){
            pos=8;
        }
    }
    catch(string exception){
        cout<<exception<<endl;
    }
    //Add number value to given row
    if(row==1){
        pos=pos+(9*0);
    }
    if(row==2){
        pos=pos+(9*1);
    }
    if(row==3){
        pos=pos+(9*2);
    }
    if(row==4){
        pos=pos+(9*3);
    }
    if(row==5){
        pos=pos+(9*4);
    }
    if(row==6){
        pos=pos+(9*5);
    }
    if(row==7){
        pos=pos+(9*6);
    }
    if(row==8){
        pos=pos+(9*7);
    }
    if(row==9){
        pos=pos+(9*8);
    }
    //Check if inputted incorrect value
    if(random[v]==1){
        try{
            for(int i=0;i<41;i++){
                    if(pos==x->easystock[i]){
                        string exception2= "Error. You can't change stock numbers.";
                        throw exception2;
                    }
            }
        }
        catch(string exception2){
            cout<<exception2;
        }
        for(int i=0;i<41;i++){
            if(pos==x->easystock[i]){
                return -1;
            }
        }
    }
    if(random[v]==2){
        try{
            for(int i=0;i<36;i++){
                if(pos==x->easy2stock[i]){
                    string exception2= "Error. You can't change stock numbers.";
                    throw exception2;          
                }
            }
        }
        catch(string exception2){
            cout<<exception2;
        }
        for(int i=0;i<36;i++){
            if(pos==x->easy2stock[i]){
                return -1;
            }
        }
    }
    if(random[v]==3){
        try{
            for(int i=0;i<=25;i++){
                    if(pos==x->hardstock[i]){
                        string exception4= "Error. You can't change stock numbers.";
                        throw exception4;
                    }
            }
        }
        catch(string exception4){
            cout<<exception4;
        }
        for(int i=0;i<41;i++){
            if(pos==x->hardstock[i]){
                return -1;
            }
        }
    }
    if(random[v]==4){
        try{
            for(int i=0;i<=28;i++){
                    if(pos==x->hard2stock[i]){
                        string exception5= "Error. You can't change stock numbers.";
                        throw exception5;
                    }
            }
        }
        catch(string exception5){
            cout<<exception5;
        }
        for(int i=0;i<41;i++){
            if(pos==x->hard2stock[i]){
                return -1;
            }
        }
    }
    //The sum of the variable will be the exact number in the grid array that the user requested
    return pos;
}

void first(numbers *x){
    int j=1;
    //Formatting
    cout<<endl<<endl<<endl<<"       A  B  C   D  E  F   G  H  I  "<<endl<<endl;
    cout<<"     ------------------------------- "<<endl<<"    |  ";
    for(int i=0;i<81;i++){
        if(x->data[i]==0)
            cout<<"-  ";
        else cout<<x->data[i]<<"  ";
        if(i%3==2&&i%9!=8)
            cout<<" ";
        if(i%9==(9-1)){
            if(i==80)
                cout<<"|    "<<j<<endl;
            else{ 
                cout<<"|    "<<j<<endl;
                if(j%3==0)
                    cout<<"    |  "<<endl;
                cout<<"    |  ";
            }
            j++;
        }
    }
    cout<<"     ------------------------------- "<<endl;
}

void print(numbers *x,int answer,int newnum){
    int j=1;
    //Replace number in array with the desired inputted number
    x->data[answer]=newnum;
    //Formatting
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"       A  B  C   D  E  F   G  H  I  "<<endl<<endl;
    cout<<"     ------------------------------- "<<endl<<"    |  ";
    for(int i=0;i<81;i++){
        if(x->data[i]==0)
            cout<<"-  ";
        else cout<<x->data[i]<<"  ";
        if(i%3==2&&i%9!=8)
            cout<<" ";
        if(i%9==(9-1)){
            if(i==80)
                cout<<"|    "<<j<<endl;
            else{ 
                cout<<"|    "<<j<<endl;
                if(j%3==0)
                    cout<<"    |  "<<endl;
                cout<<"    |  ";
            }
            j++;
        }
    }
    cout<<"     ------------------------------- "<<endl;
}

void rules(char name2[50]){
    //Rules of game
    cout<<endl;
    cout<<"Welcome "<<name2<<endl<<endl;
    cout<<endl;
    cout<<"This is a Sudoku game."<<endl<<endl;
    cout<<"Here is how the game works:"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<"You are given a partially filled 9x9 grid of numbers."<<endl;
    cout<<"You must fill the entire grid with numbers ranging from 1 to 9"<<endl;
    cout<<"However no number must repeat more than once in the same row or column."<<endl;
    cout<<"You will notice that the 9x9 grid is divided into smaller 3x3 grids. "
            "Each 3x3 grid must contain the numbers 1 to 9 only once."<<endl;
    cout<<endl;
    cout<<"To input numbers in the grid:"<<endl;
    cout<<"-----------------------------"<<endl;
    cout<<"Enter the capital letter of the desired column."<<endl;
    cout<<"Then input the corresponding number on the right hand side "
            "of the grid to select the desired row."<<endl;
    cout<<"Then enter the desired number that you would like to put in that position."<<endl;
    cout<<"You are able to overwrite numbers in the grid as well. However, you cannot overwrite "
            "the original numbers included with the problem."<<endl;
    cout<<"When you think you are done, input the capital letter 'X' when asked to enter a column"
            " to see if you are correct."<<endl;
    cout<<"If you want to restart the puzzle, enter 'R' when asked to input a column."<<endl;
}
/*
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
}*/
int test(numbers *x,int random[],int v){
    //Create a counter for the check loop
    int count=0;
    int count2=0;
    int good;
    //Loops and compares each inputted number with the correct answer number
        for(int i=0;i<81;i++){
            //If working with Problem 1
            if(random[v]==1){
                if(x->data[i]!=x->easyanswer[i])
                    count++;
            }
            //If working with Problem 2
            if(random[v]==2){
                if(x->data[i]!=x->easy2answer[i])
                    count++;
            }
            //If working with Problem 3
            if(random[v]==3){
                if(x->data[i]!=x->hardanswer[i])
                    count++;
            }
            if(random[v]==4){
                if(x->data[i]!=x->hard2answer[i])
                    count++;
            }
        }
    //State if the person is wrong.
    if(count>0){
        good=0;
        cout<<"Error. You are wrong."<<endl;
        //Output the correct sudoku grid with answers
        cout<<"This is what the puzzle should have looked like."<<endl;
        //Formatting
        cout<<endl<<"      A  B  C  D  E  F  G  H  I  "<<endl<<endl;
        cout<<"     ---------------------------- "<<endl;
        for(int i=0;i<9;i++){
            //Pushes whole grid to the right by one space
            cout<<i+1<<"   | "; 
            for(int j=0;j<9;j++){
                //Makes output into 9x9 grid
                if(random[v]==1)
                    cout<<x->easyanswer[i*9+j]<<"  ";
                if(random[v]==2)
                    cout<<x->easy2answer[i*9+j]<<"  ";
                if(random[v]==3)
                    cout<<x->hardanswer[i*9+j]<<"  ";
                if(random[v]==4)
                    cout<<x->hard2answer[i*9+j]<<"  ";
            }
            cout<<"|   "<<i+1<<endl;
        }
        cout<<"     ---------------------------- "<<endl;
    }
    //State if the person is right.
    else {
        cout<<"You are correct! The puzzle is solved!"<<endl<<endl<<endl;
        count2++;
        good=1;
    }
    return good;
}

void colcheck(char col){
    //Tell user that they inputted incorrectly, with some sarcasm.
    if(col=='a'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='b'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='c'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='d'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='e'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='f'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='g'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='h'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
    if(col=='i'){
        cout<<endl;
        cout<<"...I would have preferred it if you used a CAPITAL letter..."<<endl;
        cout<<endl;
    }
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
 * 
 * 
 * 
*/