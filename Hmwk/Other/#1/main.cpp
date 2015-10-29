/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 28, 2015, 4:37 PM
 */
//Midterm Problem #1 Done
#include <iostream>
using namespace std;
#include "account.h"

int main(int argc, char** argv) {
    char done='y';
    int checks,deposit,newbal=0;
    account *info=new account;
    info->totch=0;
    info->totdep=0;
    cout<<"This will keep track of your account information."<<endl;
    cout<<"Please enter your 5 digit account number."<<endl;
    cin>>info->num;
    while(info->num>99999||info->num<1){
        cout<<"Error. Invalid account number. Try again."<<endl;
        cin>>info->num;
    }
    if(info->num<10)cout<<"Hello, Client #"<<"0000"<<info->num<<endl;
    else if(info->num<100)cout<<"Hello, Client #"<<"000"<<info->num<<endl;
    else if(info->num<1000)cout<<"Hello, Client #"<<"00"<<info->num<<endl;
    else if(info->num<10000)cout<<"Hello, Client #"<<"0"<<info->num<<endl;
    else cout<<"Hello, Client #"<<info->num<<endl;
    cout<<"Please enter the balance from the beginning of the month."<<endl;
    cin>>info->bal;
    while(done=='y'){
        cout<<"Please enter a check amount written this month."<<endl;
        cin>>checks;
        info->totch=info->totch+checks;
        cout<<"Are there more checks to be entered? Enter 'y' for yes and 'n' for no."<<endl;
        cin>>done;
    }
    done='y';
    checks=0;
    while(done=='y'){
        cout<<"Please enter a deposit credited this month."<<endl;
        cin>>checks;
        info->totdep=info->totdep+checks;
        cout<<"Are there more checks to be entered? Enter 'y' for yes and 'n' for no."<<endl;
        cin>>done;
    }
    newbal=(info->bal)+(info->totdep)-(info->totch);
    if(newbal<1)cout<<"You are overdrawn. As such there will be a $15 fee. "
            "Here is your new balance minus the $15 overdraw fee.\nBalance: $"<<newbal-15<<endl;
    else cout<<"Your new balance is $"<<newbal<<endl;
    return 0;
}