/* 
 * File:   card.cpp
 * Author: Justin
 * Created on October 15, 2015, 11:59 AM
 *      Card Class Implementation
 */

//User Library for Specification
#include "card.h"

card::card(char n){
    setnum(n);
}

void card::setnum(char n){
    if(n<1||n>52)number=1;
    else number=n;
}

char card::suit(){
    char suit2[4]={'S','H','C','D'};
    return suit2[(number-1)/13];
}

char card::numval(){
    char numval=(number-1)%13+1;
    if(numval>10)numval=10;
    return numval;
}

char card::faceval(){
    char faceval[13]={'A','2','3','4','5','6',
                  '7','8','9','T','J','Q','K'};
    return faceval[(number-1)%13];
}