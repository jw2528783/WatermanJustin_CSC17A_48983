/* 
 * File:   main.cpp
 * Author: Justin
 * Created on December 7, 2015, 2:18 PM
 */

#include <iostream>
#include <string>
#include "pref.h"
#include "parts.h"
using namespace std;
/*
//PLAN    --Things to do--
 * Best computer you can buy
 * Have class that holds benchmark data
 * Have class that holds various computer components and their prices
 * Have class that determines best price to performance based on those classes

 * Compare preferences with budget and benchmarks
 * Determine best price to performance components
 * Output spec list
 * Output potential benchmark capabilities it can be expected to meet
 * Output links to videos or graphs of benchmarks or simulations that
 *      the parts can be expected to meet
 *  
*/
void intro();

int main(int argc, char** argv) {
    parts info;
    intro();
    preference info2;
    
    return 0;
}

void intro(){
    cout<<"-------------------------------------";
    cout<<"\nSo you want to build a computer?..."<<endl;
    cout<<"-------------------------------------"<<endl<<endl;
    cout<<"...Well, today is your lucky day.\nI am your personal assistance"
            " and advisor for today.\nYou can call me HAL 9001"<<endl;
    cout<<"I will be helping you determine and assemble a computer"
            " worthy of your demands.\nYou are welcome."<<endl;
    cout<<"\nLet's get started."<<endl<<endl;
}
