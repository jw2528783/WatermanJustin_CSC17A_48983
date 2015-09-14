/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:26 PM
 * Payroll
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    const int COL=7;
    float empId[COL]={5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours[COL];
    float payRate[COL],wages[COL];
    cout<<fixed<<setprecision(0)<<"Enter hours worked by 7 employees. Then enter their hourly pay rates."<<endl;
    for(int i=0;i<COL;i++){
        cout<<"Hours for Employee "<<fixed<<setprecision(0)<<empId[i]<<endl;
        cin>>hours[i];
        cout<<"Hourly wage for Employee "<<fixed<<setprecision(0)<<empId[i]<<endl;
        cin>>payRate[i];
        if(payRate[i]<6.00f){
            cout<<"Error. Enter a higher wage than $6.00"<<endl;
            cin>>payRate[i];
        }
        if(hours[i]<0){
            cout<<"Error. Enter a positive number of hours."<<endl;
            cin>>hours[i];
        }
    }
    for(int i=0;i<COL;i++){
        wages[i]=payRate[i]*hours[i];
        cout<<"Gross pay for employee "<<fixed<<setprecision(0)<<empId[i]<<" is $"<<fixed<<setprecision(2)<<wages[i]<<endl;
    }
    return 0;
}