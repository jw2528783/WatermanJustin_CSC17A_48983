/* 
 * File:   main.cpp
 * Author: Justin 
 * Created on December 7, 2015, 1:20 PM
 */

#include <iostream>
#include <string>
using namespace std;

class parkedcar{
    private:
        string color,make,model,license;
        int minutes;
    public:
        parkedcar(){
            color="Red",make="Ford";model="Mustang";license="ABC1234";
            minutes=31;
        }
        string getmake(){return make;};
        string getmodel(){return model;};
        string getlicense(){return license;};
        string getcolor(){return color;};
        int getmin(){return minutes;};
};

class meter{
    private:
        int minpaid;
    public:
        meter(){minpaid=30;};
        int getminpaid(){return minpaid;};
};

class cop{
private:
    string name;
    int badge;
public:
    cop(){
        name="John";
        badge=1234567;
    };
    void istimeexpired();
    void writeticket();
    string getname(){return name;};
    int getbadge(){return badge;};
};

class ticket{
private:
    string officer,color,make,model,license;
    int fine,badge;
public:
    ticket(){
        int temp;
        parkedcar info;
        cop info2;
        color=info.getcolor();
        make=info.getmake();
        model=info.getmodel();
        license=info.getlicense();
        if(info.getmin()>60){
            fine=25;
            temp=(info.getmin())/60;
            for(int i=0;i<temp;i++)fine=fine+10;
        }
        else fine=25;
        officer=info2.getname();
        badge=info2.getbadge();
    }
    string getmake(){return make;};
    string getmodel(){return model;};
    string getlicense(){return license;};
    string getcolor(){return color;};
    string getofficer(){return officer;};
    int getfine(){return fine;};
    int getbadge(){return badge;};
    void printticket();
};

int main(int argc, char** argv) {
    cop info;
    info.istimeexpired();
    return 0;
}

void cop::istimeexpired(){
    parkedcar info;
    meter info2;
    int minutes,minutespaid;
    minutes=info.getmin();
    minutespaid=info2.getminpaid();
    if(minutes>minutespaid){
        cout<<"Time expired!\n"<<endl;
        writeticket();
    }
}

void cop::writeticket(){
    ticket info;
    info.printticket();
}

void ticket::printticket(){
    cout<<"----------TICKET----------"<<endl;
    cout<<"License Number: "<<license<<endl<<"Color: "<<color<<endl;
    cout<<"Make: "<<make<<endl<<"Model: "<<model<<" "<<endl;
    cout<<"Fine: "<<fine<<endl;
    cout<<"Officer: "<<officer<<"   #"<<badge<<endl;
}