/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 5, 2015, 7:07 PM
 * Chapter 10 Problem 6
 */

#include <fstream>
#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char** argv) {
    ifstream infile("test.txt",ios::in);
    ofstream outfile("done.txt",ios::out);
    string name,dummy,done;
    cout<<"I will correct your sentences so that they will be all lowercase except for";
    cout<<" the first letter of each sentence. \n";
    cout<<"Please enter the name of the first file that you want to be corrected.";
    cout<<"\n(Hint: the name of the file is 'test')"<<endl;
    cin>>name;
    if(!infile)return 0;
    cout<<"Now enter the name of the new file that will be created when the ";
    cout<<"sentences are corrected. \n(Hint: the name of the file is 'done')"<<endl;
    cin>>dummy;
    if(!outfile)return 0;
    getline(infile,name);
    if(!infile)return 0;
    while(infile){
        cout<<name<<endl;
        getline(infile,name);
    }
    char temp[name.size()];
    for(int i=0;i<name.size();i++){
        name[i]=temp[i];
        cout<<temp[i];
    }
    /*for(int i=0;i<name.length();i++){
        if(name[i]>'@' && name[i]<'['){
            tolower(name[i]);
            if(name[i-1]=='.'){
                name[i]=name[i];
            }
        }
    }
    */
    outfile<<name;
    infile.close();
    outfile.close();
    return 0;
} 