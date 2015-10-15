/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 15, 2015, 11:21 AM
 *      Creation of first Object Oriented Program
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//User Libraries
#include "card.h"
//Function Prototypes

int main(int argc, char** argv) {
    srand(static_cast<unsigned int>(time(0)));
    //Declare deck suit
    cout<<"Class Check"<<endl;
    for(int i=1;i<=52;i++){
        card card(i);
        cout<<"Card Number = "<<static_cast<int>(card.getnum());
        cout<<" Suit = "<<card.suit();
        cout<<" Numerical Value = "<<static_cast<int>(card.numval());
        cout<<" Face Value = "<<card.faceval()<<endl;
    }
    
    return 0;
}