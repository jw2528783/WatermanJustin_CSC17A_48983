/* 
 * File:   card.h
 * Author: Justin
 * Created on October 15, 2015, 11:59 AM
 *      Card Specifications Class
 */

#ifndef CARD_H
#define	CARD_H

class card{
    private:
        char number;
    public:
        card(char);                    //Constructor
        void setnum(char);             //Mutator
        char getnum(){return number;}; //Accessor
        char suit();                   //Suit Property
        char numval();                 //Numerical Value Property
        char faceval();                //Face value

};

#endif	/* CARD_H */

