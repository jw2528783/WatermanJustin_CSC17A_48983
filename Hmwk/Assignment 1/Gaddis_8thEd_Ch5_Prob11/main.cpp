/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:12 PM
 * Random Number Guessing Game
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    short number,guess;
    srand(time(0));
    number=rand()%500+1;
    cout<<"Welcome to my guessing game.\nI will randomly generate a number between 1 and 500 and you will guess it."<<endl;
    unsigned int numguess=0;
    do{
        cout<<"Go on! Take a guess! A number between 1 and 500"<<endl;
        cin>>guess;
        if(guess<1 || guess>500)
            cout<<"Error. You went out of range!"<<endl;
        else if(guess<number)
            cout<<"Too low!"<<endl;
        else if (guess>number)
            cout<<"Too high!"<<endl;
        numguess++;
    }
    while(number!=guess);
    cout<<"Congratulations! You guessed the number!!\nThe number was "<<number<<endl;
    cout<<"It took you "<<numguess<<" guesses to figure out my number."<<endl;
    return 0;
}

