/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 5:49 PM
 * Problem 13 Currency conversion
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float oneeuro=0.849381;//Euro value
    float oneyen=118.03;//Yen value
    float dollars,euros,yen;
    //Input the number of bitcoin and then convert
    cout<<"Please input the number of dollars that you have."<<endl;
    cin>>dollars;
    //Convert to all currencies
    euros=oneeuro*dollars;
    yen=oneyen*dollars;
    //Output the results
    cout<<fixed<<setprecision(2)<<setw(3)<<endl;
    cout<<dollars<<" dollars = "<<euros<<"    euros"<<endl;
    cout<<dollars<<" dollars = "<<yen<<"  yen"<<endl;
    return 0;
}