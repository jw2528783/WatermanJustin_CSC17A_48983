/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 28, 2015, 11:06 PM
 */
//Done
#include <iostream>
#include <cmath>
using namespace std;
void decrypt();

int main(int argc, char** argv) {
    int digit,temp,num[4],i=0;
    cout<<"ENCRYPTION\nEnter a 4 digit number."<<endl;
    cin>>digit;
    temp=digit;
    while(temp>0){
        num[i]=0;
        num[i]=num[i]*10+(temp%10);
        temp=temp/10;
        i++;
    }
    if(digit<1000&&digit>99)num[3]=0;
    if(digit<100&&digit>9)num[3]=0,num[2]=0;
    if(digit<10)num[3]=0,num[2]=0,num[1]=0;
    for(int i=3;i>=0;i--){
        if(num[i]>7){
            cout<<endl<<"Error. There is a number greater than 7.";
            return 0;
        }
        cout<<num[i];
    }
    cout<<endl<<endl;
    for(int i=3;i>=0;i--){
        num[i]=(num[i]+5)%8;
        cout<<num[i];
    }
    cout<<endl<<num[2]<<num[3]<<num[0]<<num[1]<<endl;
    decrypt();
    return 0;
}

void decrypt(){
    int digit,temp,num[4],i=0;
    cout<<endl<<"DECRYPTION\nEnter a 4 digit number."<<endl;
    cin>>digit;
    temp=digit;
    while(temp>0){
        num[i]=0;
        num[i]=num[i]*10+(temp%10);
        temp=temp/10;
        i++;
    }
    if(digit<1000&&digit>99)num[3]=0;
    if(digit<100&&digit>9)num[3]=0,num[2]=0;
    if(digit<10)num[3]=0,num[2]=0,num[1]=0;
    for(int i=3;i>=0;i--){
        if(num[i]>7){
            cout<<endl<<"Error. There is a number greater than 7.";
            break;
        }
        cout<<num[i];
    }
    cout<<endl<<endl;
    //going from octal to decimal
    //if num >4 , then just subtract 5
    for(int i=3;i>=0;i--){
        if(num[i]>4)num[i]=num[i]-5;
        else if(num[i]==0)num[i]=3;
        else if(num[i]<5&&num[i]>0){
            num[i]=(num[i]-5)*-1;
        }
        cout<<num[i];
    }
    cout<<endl<<num[2]<<num[3]<<num[0]<<num[1]<<endl;
}