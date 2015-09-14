/* 
 * File:   main.cpp
 * Author: Justin Waterman
 * Created on September 13, 2015, 6:31 PM
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//Function prototypes
void filAray(int [],int);
void prntAry(const int [],int,int);
int  lSearch(int,const int [],int,int);//Linear Search
int  fndVals(int [],int,int,int[]);//Fill Array with all value positions found
void prntFnd(const int [],int,int);//Print the found array
int  cntFnd(const int [],int,int);//Count the number of values found in the array

int main(int argc, char** argv) {
    //random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=1000;
    int pFilRow=100,perLine=10;
    int array[ROW]={};
    int found[ROW+1]={};
    //Fill arrays
    filAray(array,pFilRow);
    //Print arrays
    prntAry(array,pFilRow,perLine);
    //Find all values
    int val=50;
    cout<<"Where is "<<val<<" found in the array?"<<endl;
    int nTimes=fndVals(array,pFilRow,val,found);
    //Print all values found
    prntFnd(found,pFilRow,perLine);
    //How many times was value found
    cout<<val<<" was found "<<cntFnd(array,pFilRow,val)<<" times"<<endl;
    return 0;
}
int fndVals(int a[],int n,int val,int f[]){
    //Loop until all elements are found
    int indx,pos=0,count=0;
    do{
        indx=lSearch(pos,a,n,val);
        f[count++]=indx;
        pos=indx+1;
    }while(indx>=0&&indx<n);
    return --count;
}
int  cntFnd(const int a[],int n,int val){
    //Loop until all the elements are found
    int indx,pos=0,count=0;
    do{
        indx=lSearch(pos,a,n,val);
        pos=indx+1;
        count++;
    }while(indx>=0&&indx<n);
    return --count;
}
//Search
int  lSearch(int posStrt,const int a[],int n,int val){
    //Loop until found
    for(int indx=posStrt;indx<n;indx++){
        if(val==a[indx])return indx;
    }
    return -1;
}
//Print perLine Columns for array output by row
void prntFnd(const int a[],int n,int perLine){
    cout<<endl;
    if(a[0]==-1){
        cout<<"The value was not found!"<<endl;
        cout<<endl;
        return;
    }
    cout<<"The value was found at these positions:"<<endl;
    for(int i=0;i<n;i++){
        if(a[i]==-1){
            cout<<endl;
            return;
        }
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//Print Columns for array output by row
void prntAry(const int a[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
//Randomly fill array with 2-digit numbers
void filAray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}