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
public:
    dayofyear();
    void print();
    
};

int main(int argc, char** argv) {
    dayofyear info;
    return 0;
}

dayofyear::dayofyear(){
    cout<<"Enter a day number."<<endl;
    cin>>day;
    print();
}

void dayofyear::print(){
    if(day<32)cout<<month[0]<<" "<<day<<endl;
    if(day>31&&day<60)cout<<month[1]<<" "<<day-31<<endl;
    if(day>59&&day<91)cout<<month[2]<<" "<<day-59<<endl;
    if(day>90&&day<121)cout<<month[3]<<" "<<day-90<<endl;
    if(day>120&&day<150)cout<<month[4]<<" "<<day-120<<endl;
    if(day>151&&day<180)cout<<month[5]<<" "<<day-151<<endl;
    if(day>181&&day<211)cout<<month[6]<<" "<<day-181<<endl;
    if(day>212&&day<244)cout<<month[7]<<" "<<day-212<<endl;
    if(day>243&&day<274)cout<<month[8]<<" "<<day-243<<endl;
    if(day>273&&day<305)cout<<month[9]<<" "<<day-273<<endl;
    if(day>304&&day<335)cout<<month[10]<<" "<<day-304<<endl;
    if(day>334&&day<366)cout<<month[11]<<" "<<day-334<<endl;
}

string dayofyear::month[]={"January","February","March","April","May","June",
        "July","August","September","October","November","December"};