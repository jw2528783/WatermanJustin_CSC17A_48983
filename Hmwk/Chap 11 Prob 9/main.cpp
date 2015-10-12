/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 12, 2015, 1:37 PM
 */

#include <cstdlib>
#include "speakerinfo.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

void menu();

int main(int argc, char** argv) {
    menu();
    return 0;
}

void menu(){
    cout<<"Hello!"<<endl<<endl;
    cout<<"Name: "<<"\nTelephone Number: "<<endl;
    cout<<"Speaking Topic: "<<"\nFee Required: "<<endl;
    cout<<"What would you like to change?"<<endl;
    cout<<"1. Name\n2. Phone Number\n3. Speaking Topic\n4. Fee Required"<<endl;
}