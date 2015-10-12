/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 12, 2015, 2:03 PM
 */

#include <cstdlib>
#include <iostream>
#include "moviedata.h"
#include <string>
using namespace std;

void printinfo(moviedata*);
moviedata *movieinfo();

int main(int argc, char** argv) {
    moviedata *info=movieinfo();
    printinfo(info);
    delete info;
    return 0;
}

moviedata *movieinfo(){
    moviedata *data=new moviedata;
    cout<<endl<<"Please enter the name of a movie."<<endl;
    getline(cin,data->title);
    cout<<"Please enter the director of that movie."<<endl;
    getline(cin,data->director);
    cout<<"Please enter the year the movie was released."<<endl;
    cin>>data->year;
    cout<<"Please enter the running time of the movie."<<endl;
    cin>>data->time;
    return data;
}

void printinfo(moviedata *data){
    cout<<endl<<"Movie: "<<data->title<<endl;
    cout<<"Director: "<<data->director<<endl;
    cout<<"Year: "<<data->year<<endl;
    cout<<"Running Time: "<<data->time<<endl;
}