/* 
 * File:   pref.h
 * Author: Justin
 * Created on December 8, 2015, 11:33 AM
 */

using namespace std;
#include <iostream>
#include <string>

#ifndef PREF_H
#define	PREF_H

class preference{
    private:
        float budget;
        int purpose,ramsize,hddsize,ifaccess,keyboard,mouse,monitor;
        int ifkey,ifmouse,ifmonitor;
        string processor,graphics,cooling,casesize;
    public:
        preference();
        //Get functions. Return values.
        float getbudget(){return budget;};
        int getpurpose(){return purpose;};
        int getram(){return ramsize;};
        int gethdd(){return hddsize;};
        int getaccess(){return ifaccess;};
        int getkey(){return keyboard;};
        int getmouse(){return mouse;};
        int getmonitor(){return monitor;};
        string getproc(){return processor;};
        string getgraphics(){return graphics;};
        string getcool(){return cooling;};
        string getcase(){return casesize;};
        //Set functions. Function to re-set values.
        void setbudget();
        void setpurpose();
        void setram();
        void sethdd();
        void setaccess();
        void setkey();
        void setmouse();
        void setmonitor();
        void setproc();
        void setgraphics();
        void setcool();
        void setcase();

};

preference::preference(){
    cout<<"Let's get some information from you now."<<endl;
    cout<<"First of all, what is your budget?"<<endl;
    cin>>budget;
    cout<<endl<<"Cool, let's see...\nWhat is the purpose of your new machine?"<<endl;
    cout<<"1. General Purpose\n";
    cout<<"2. Gaming\n";
    cout<<"3. Video/Picture Editing and Rendering\n";
    cout<<"4. Storage\n";
    cout<<"5. Server\n";
    cin>>purpose;
    cout<<endl<<"Interesting...\nHow much RAM do you want in your machine? (Enter in gigabytes)"<<endl;
    cin>>ramsize;
    cout<<endl<<"Ok.\nHow much storage do you need in you machine? (Enter in gigabytes)"<<endl;
    cin>>hddsize;
    cin.ignore();
    cout<<endl<<"Cool.\nWould you prefer an AMD processor or an Intel processor? (Enter 'AMD' or 'Intel')"<<endl;
    getline(cin,processor);
    cout<<endl<<"Great.\nWould you prefer an AMD graphics card or an NVidia graphics card? (Enter 'AMD' or 'NVidia')"<<endl;
    getline(cin,graphics);
    cout<<endl<<"Looking good.\nWould you prefer water cooling or air cooling? (Enter 'Water' or 'Air')"<<endl;
    getline(cin,cooling);
    cout<<endl<<"Almost done.\nWould you like a big or small case? (Enter 'Big' or 'Small')"<<endl;
    getline(cin,casesize);
    cout<<endl<<"Now some quick questions about your desk."<<endl;
    cout<<"Do you already have peripherals to use with this, including mouse, keyboard, and monitor? (Enter 0 for no and 1 for yes)"<<endl;
    cout<<"\tIf you have some but not all of these, enter no."<<endl;
    cin>>ifaccess;
    if(ifaccess==0){
        cout<<"Do you have a keyboard? (Enter 0 for no and 1 for yes)"<<endl;
        cin>>ifkey;
        if(ifkey==0){
            cout<<"What is your budget for a keyboard?"<<endl;
            cin>>keyboard;
        }
        cout<<"Do you have a mouse? (Enter 0 for no and 1 for yes)"<<endl;
        cin>>ifmouse;
        if(ifmouse==0){
            cout<<"What is your budget for a mouse?"<<endl;
            cin>>mouse;
        }
        cout<<"Do you have a monitor? (Enter a 0 for no and 1 for yes)"<<endl;
        cin>>ifmonitor;
        if(ifmonitor==0){
            cout<<"What is your budget for a monitor?"<<endl;
            cin>>monitor;
        }
    }
    else cout<<"Cool! That will save you some money then."<<endl;
}

void preference::setbudget(){
    cout<<"Enter your new budget."<<endl;
    cin>>budget;
}
void preference::setpurpose(){
    cout<<"What is the purpose of your new machine?"<<endl;
    cout<<"1. General Purpose";
    cout<<"2. Gaming";
    cout<<"3. Video/Picture Editing and Rendering";
    cout<<"4. Storage";
    cout<<"5. Server";
    cin>>purpose;
}
void preference::setram(){
    cout<<"How much RAM do you want in your machine? (Enter in gigabytes)"<<endl;
    cin>>ramsize;
}
void preference::sethdd(){
    cout<<"How much storage do you need in you machine? (Enter in gigabytes)"<<endl;
    cin>>hddsize;
}
void preference::setaccess(){
    cout<<"Do you already have peripherals to use with this, including mouse, keyboard, and monitor? (Enter 0 for no and 1 for yes)"<<endl;
    cout<<"\tIf you have some but not all of these, enter no."<<endl;
    cin>>ifaccess;
}
void preference::setkey(){
    cout<<"Do you have a keyboard? (Enter 0 for no and 1 for yes)"<<endl;
    cin>>ifkey;
    if(ifkey==0){
        cout<<"What is your budget for a keyboard?"<<endl;
        cin>>keyboard;
    }
}
void preference::setmouse(){
    cout<<"Do you have a mouse? (Enter 0 for no and 1 for yes)"<<endl;
    cin>>ifmouse;
    if(ifmouse==0){
        cout<<"What is your budget for a mouse?"<<endl;
        cin>>mouse;
    }
}
void preference::setmonitor(){
    cout<<"Do you have a monitor? (Enter a 0 for no and 1 for yes)"<<endl;
    cin>>ifmonitor;
    if(ifmonitor==0){
        cout<<"What is your budget for a monitor?"<<endl;
        cin>>monitor;
    }
}
void preference::setproc(){
    cout<<endl<<"Would you prefer an AMD processor or an Intel processor? (Enter 'AMD' or 'Intel')"<<endl;
    getline(cin,processor);
}
void preference::setgraphics(){
    cout<<"Would you prefer an AMD graphics card or an NVidia graphics card? (Enter 'AMD' or 'NVidia')"<<endl;
    getline(cin,graphics);
}
void preference::setcool(){
    cout<<"Would you prefer water cooling or air cooling? (Enter 'Water' or 'Air')"<<endl;
    getline(cin,cooling);
}
void preference::setcase(){
    cout<<"Would you like a big or small case? (Enter 'Big' or 'Small')"<<endl;
    getline(cin,casesize);
}

#endif	/* PREF_H */

