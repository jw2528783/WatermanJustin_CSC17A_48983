/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:07 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    short numsold;
    float total;
    cout<<"How many copies of our $99 software would you like to buy?"<<endl;
    cin>>numsold;
    cout<<fixed<<setprecision(2)<<endl;
    if(numsold>9&&numsold<20){
        total=numsold*99-(numsold*99*.2);
        cout<<"Because you bought "<<numsold<<" units, you get 20% off!\nYour total price is $"<<
                total<<"\nThank you."<<endl;
    }
    else if(numsold>19&&numsold<50){
        total=numsold*99-(numsold*99*.3);
        cout<<"Because you bought "<<numsold<<" units, you get 30% off!\nYour total price is $"<<
                total<<"\nThank you."<<endl;
    }
    else if(numsold>49&&numsold<100){
        total=numsold*99-(numsold*99*.4);
        cout<<"Because you bought "<<numsold<<" units, you get 40% off!\nYour total price is $"<<
                total<<"\nThank you."<<endl;
    }
    else if(numsold>99){
        total=numsold*99-(numsold*99*.5);
        cout<<"Because you bought "<<numsold<<" units, you get 50% off!\nYour total price is $"<<
                total<<"\nThank you."<<endl;
    }
    else if(numsold>0&&numsold<10){
        cout<<"Because you bought "<<numsold<<" units, you don't qualify for a discount."<<endl;
        cout<<"Your total price is $"<<numsold*99<<"\nThank you."<<endl;
    }
    else if(numsold<0){
        cout<<"Error. Please enter a positive number of copies you would like to buy."<<endl;
    }
    return 0;
}

