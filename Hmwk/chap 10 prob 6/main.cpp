/* 
 * File:   main.cpp
 * Author: Justin
 * Created on October 5, 2015, 8:52 PM
 */

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
using namespace std;

void menu();
int vowels(char *);
int consnts(char *);

int main(int argc, char** argv) {
    int const SIZE=100;
    int vowl,cons;
    char sentence[SIZE], choice;
    do{
        cout<<"Enter a string less than 100 charactes."<<endl;
        cin.getline(sentence, SIZE);
        menu();
        cin>>choice;
        vowl=vowels(sentence);
        cons=consnts(sentence);
        switch(choice){
            case 'A':case 'a':cout<<"There are a total of "<<vowl<<" vowels in the sentence.";break;
            case 'B':case 'b':cout<<"There are a total of "<<cons<<" consonants in the sentence.";break;
            case 'C':case 'c':cout<<"There are a total of "<<vowl<<" vowels and "<<cons<<" consonants in the sentence.";break;
            case 'D':case 'd':choice='D';break;
            case 'E':case 'e':return 0;
            default:cout<<"Your choice is invalid"<<endl;
        }
        cin.ignore();
    }while(choice=='D');
    return 0;
}

void menu(){
    cout<<' '<<endl<<setw(7)<<"A) Count the number of vowels in the string"<<endl
                   <<setw(7)<<"B) Count the number of consonants in the string"<<endl
                   <<setw(7)<<"C) Count both the vowels and consonants in the string"<<endl
                   <<setw(7)<<"D) Enter another string"<<endl
                   <<setw(7)<<"E) Exit the program"<<endl;           
}

int vowels(char * sentence){
    int vow=0,con=0;
    for( int i=0; i<strlen(sentence); i++){
        char temp=toupper(*(sentence+i));
        switch(temp){
            case'A':case'E':case'I':case'O':case'U':vow++;break;
            default:con++;
        }
    }
  return vow; 
}

int consnts(char *sentence){
    int vow=0,con=0;
    for( int i=0; i<strlen(sentence); i++){
        char temp=toupper(*(sentence+i));
        switch(temp){
            case'A':case'E':case'I':case'O':case'U':vow++;break;
            case' ':case'.':case'!':case'?': break;
            default:con++;
        }
    }
      return con++;
}