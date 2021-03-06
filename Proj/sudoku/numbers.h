/* 
 * File:   numbers.h
 * Author: Justin
 * Created on October 17, 2015, 4:08 PM
 */

#ifndef NUMBERS_H
#define	NUMBERS_H

struct numbers{
    //Size of array
    int size;
    //holds the numbers of the sudoku grid
    int *data;
    //Easy Sudoku problem 1
    int easy[81]={0,2,0,5,0,1,4,0,3,1,0,3,0,6,4,0,0,7,0,0,4,3,0,0,0,
                5,1,4,0,0,0,0,0,5,1,6,0,6,0,0,1,3,0,4,0,7,1,0,0,
                4,5,3,0,2,0,9,2,1,0,6,0,0,0,8,7,6,4,3,0,1,2,0,0,
                0,0,0,7,0,6,0,0};
    //Problem 1 stock numbers
    int easystock[41]={1,3,5,6,8,9,11,13,14,17,20,21,25,26,27,33,34,35,37,40,
                    41,43,45,46,49,50,51,53,55,56,57,59,63,64,65,66,67,
                    69,70,76,78};
    //Problem 1 answers
    int easyanswer[81]={9,2,7,5,8,1,4,6,3,1,5,3,2,6,4,9,8,7,6,8,4,3,9,7,2,
                5,1,4,3,9,7,2,8,5,1,6,2,6,5,9,1,3,7,4,8,7,1,8,6,
                4,5,3,9,2,3,9,2,1,5,6,8,7,4,8,7,6,4,3,9,1,2,5,5,
                4,1,8,7,2,6,3,9};
    //Easy Sudoku Problem 2
    int easy2[81]={0,0,8,0,3,0,5,4,0,3,0,0,4,0,7,9,0,0,4,1,0,0,0,8,0,0,2,
                    0,4,3,5,0,2,0,6,0,5,0,0,0,0,0,0,0,8,0,6,0,3,0,9,4,1,
                    0,1,0,0,8,0,0,0,2,7,0,0,5,6,0,3,0,0,4,0,2,9,0,7,0,8,0,0};
    //Problem 2 stock numbers
    int easy2stock[36]={2,4,6,7,9,12,14,15,18,19,23,26,28,29,30,32,34,36,44,46,48,
                        50,51,52,54,57,61,62,65,66,68,71,73,74,76,78};
    //Problem 2 answers
    int easy2answer[81]={9,7,8,2,3,1,5,4,6,3,5,2,4,6,7,9,8,1,4,1,6,9,5,8,3,7,2,8,
                4,3,5,1,2,7,6,9,5,9,1,7,4,6,2,3,8,2,6,7,3,8,9,4,1,5,1,3,4,8,9,5,6,
                2,7,7,8,5,6,2,3,1,9,4,6,2,9,1,7,4,8,5,3};
    
};

//Class to keep score of the games you won or lost
class score{
private:
    //Games correct
    float right;
    //Games wrong
    int wrong;
    //Average of right and total games played
    float average;
    //Total games played
    float total;
public:
    //Constructor
    score();
    //Inline member functions
    int getright(){return right;};
    int getwrong(){return wrong;};
    int getaverage();
    void yay();
    void no();
    void done();
};

score::score(){
    right=0;
    wrong=0;
    average=0;
}

void score::yay(){
    //If you won the game.
    right=right+1;
}

void score::no(){
    //If you lost the game.
    wrong=wrong+1;
}

void score::done(){
    //If you completed a game.
    total=total+1;
}

int score::getaverage(){
    cout<<"You got "<<right<<" games correct."<<endl;
    cout<<"You got "<<wrong<<" games wrong."<<endl;
    cout<<"So that leaves you with a percentage of "<<right/total<<"% games won."<<endl;
    cout<<"Congratulations on this score of ";
    average=right/total;
    return average;
}

#endif	/* NUMBERS_H */

