/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:02 PM
 * Problem 12 Temperature Conversion
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    float celsius,fahrnht;//variables for celsius and fahrenheit
    char answer;
    float FahCNVT, CelCNVT; //conversion for celsius and fahrenheit
    cout<<"This program will convert between Celsius and Fahrenheit. Please "
            "indicate which unit you would like to convert to.\nType F for "
            "Fahrenheit or C for Celsius."<<endl;
    cin>>answer;
    if(answer=='F'||answer=='f'){
        cout<<"Please input a number for Celsius."<<endl;
        cin>>celsius;
        FahCNVT=9/5*celsius+32;
        cout<<celsius<<" degrees Celsius = "<<setprecision(4)<<FahCNVT<<" degrees Fahrenheit"<<endl;
        return 0;
    }
    if(answer=='C'||answer=='c'){
        cout<<"Please input a number for Fahrenheit."<<endl;
        cin>>fahrnht;
        CelCNVT=(fahrnht)*5/9-(160/9);
        cout<<fahrnht<<" degrees Fahrenheit = "<<setprecision(4)<<CelCNVT<<" degrees Celsius"<<endl;
        return 0;
    }
    else
        cout<<"Error. Invalid input. Goodbye."<<endl;
    return 0;
}

