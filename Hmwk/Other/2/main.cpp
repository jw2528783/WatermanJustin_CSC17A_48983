/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 28, 2015, 5:14 PM
 */
//Done
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
#include "gross.h"
void total(gross *,int);
int main(int argc, char** argv) {
    int size;
    cout<<"How many employees are there?"<<endl;
    cin>>size;
    cin.ignore();
    gross *salary=new gross;
    salary->num=size;
    salary->employee=new string[salary->num];
    salary->hours=new int[salary->num];
    salary->pay=new float[salary->num];
    salary->total=new float[salary->num];
    for(int i=0;i<salary->num;i++){
        cout<<"What is the name of employee #"<<i+1<<"?"<<endl;
        getline(cin,salary->employee[i]);
        cout<<"What is the pay rate for employee "<<salary->employee[i]<<"?"<<endl;
        cin>>salary->pay[i];
        cout<<"How many hours did employee #"<<i+1<<" work?"<<endl;
        cin>>salary->hours[i];
        total(salary,i);
        cin.ignore();
    }
    for(int i=0;i<salary->num;i++){
        cout<<"The gross pay for "<<salary->employee[i]<<" is $"<<fixed<<setprecision(2)<<salary->total[i]<<endl;
    }
    delete []salary->employee;
    delete []salary->hours;
    delete []salary->pay;
    delete []salary->total;
    delete salary;
    return 0;
}

void total(gross *salary,int count){
    float total=0;
    if(salary->hours[count]>40&&salary->hours[count]<50){
        total=salary->pay[count]*40;
        cout<<endl<<"Double time!"<<endl<<endl;
        total=total+(2*(salary->pay[count])*(salary->hours[count]-40));
    }
    if(salary->hours[count]>49){
        total=salary->pay[count]*40;
        cout<<endl<<"Triple time!"<<endl<<endl;
        total=total+(18*(salary->pay[count]))+(3*(salary->pay[count])*(salary->hours[count]-49));
    }
    if(salary->hours[count]<41){
        cout<<"Regular pay"<<endl;
        total=salary->pay[count]*salary->hours[count];
    }
    salary->total[count]=total;
}