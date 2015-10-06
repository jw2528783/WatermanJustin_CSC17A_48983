/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 5, 2015, 9:23 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstring>
using namespace std;

int counter(char *, int const);

int main(int argc, char** argv) {
    int numword;
    int const SIZE=100;
    char phrase[SIZE];
    cout<<"Enter a sentence with less than 100 characters."<<endl;
    cin.getline(phrase, SIZE);
    numword=counter(phrase, SIZE);
    cout<<"There are "<<numword<<" words."<<endl;
    float avgltr=(static_cast<float>(strlen(phrase)-(numword-1))/numword);
    cout<<"There are an average of "<<avgltr<<" letters."<<endl;
    return 0;
}
int counter(char *phrase, int size){
    int count=1;
    for(int i=0;i<size;i++){
        if(phrase[i]!='\0'){
            if(phrase[i]==' '){
                count++;
                if(phrase[i]==phrase[i+1] && phrase[i]==' ')count--;
            }
        }
    }
    return count;
}