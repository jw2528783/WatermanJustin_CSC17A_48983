/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:21 PM
 * Coin Toss Game
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void coinTos(int);

int main(int argc, char** argv) {
    short times;
    srand(time(0));
    cout<<"I will be simulating a coin toss game.\nHow many times would you like to flip a coin?"<<endl;
    cin>>times;
    coinTos(times);
    return 0;
}

void coinTos(int times){
    unsigned int numhead=0,numtail=0;
    for(int x=1;x<=times;x++){
        short flip=rand()%2+1;
        if(flip==1){
            cout<<"Heads!"<<endl;
            numhead++;
        }
        else if(flip==2){
            cout<<"Tails!"<<endl;
            numtail++;
        }
    }
    cout<<"Number of times coin landed heads: "<<numhead<<endl;
    cout<<"Number of times coin landed tails: "<<numtail<<endl;
}