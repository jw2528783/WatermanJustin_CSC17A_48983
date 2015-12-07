/* 
 * File:   main.cpp
 * Author: Justin
 * Created on December 3, 2015, 11:54 AM
 */

#include <iostream>
#include <string>
using namespace std;

class dayofyear{
private:
    int day;
    static string month[12];
    string monthinput;
public:
    dayofyear();
    void print();
    
};

int main(int argc, char** argv) {
    dayofyear info;
    return 0;
}

dayofyear::dayofyear(){
    cout<<"Enter a month. Spelling and capitalization counts!"<<endl;
    getline(cin,monthinput);
    cout<<"Enter a day number."<<endl;
    cin>>day;
    print();
}

void dayofyear::print(){
    for(int i=0;i<12;i++){
        if(monthinput==month[i]){
            if(day>31)cout<<"Error. Day out of range of month."<<endl;
            if(i==1&&day>28)cout<<"Error. Day out of range of month."<<endl;
            else if(i==3||i==5||i==8||i==10){
                if(day>30)cout<<"Error. Day out of range of month."<<endl;
            }
            else cout<<month[i]<<" "<<day<<endl;
        }
        else cout<<"Error. You misspelled a month."<<endl;
    }
}

string dayofyear::month[]={"January","February","March","April","May","June",
        "July","August","September","October","November","December"};