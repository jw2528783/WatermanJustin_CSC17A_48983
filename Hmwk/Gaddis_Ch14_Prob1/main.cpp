/* 
 * File:   main.cpp
 * Author: Justin
 * Created on December 1, 2015, 12:42 PM
 */

#include <iostream>
#include <string>
using namespace std;

class Numbers{
    private:
        int number;
    public:
        Numbers();
        void print();
        string less20[20]={"zero", "one", "two", "three", "four", "five", 
            "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", 
            "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
        string less100[10]= {"", "", "twenty", "thirty", "forty", "fifty", "sixty", 
            "seventy", "eighty", "ninety"}; 
        string hundred = "hundred"; 
        string thousand = "thousand";
};

int main(int argc, char** argv) {
    //Numbers info;
    int n=2168;
    cout<<endl<<endl<<n<<endl;
    cout<<n/10<<endl;
    cout<<n/1000<<endl;
    cout<<(n-((n/1000)*1000))/10<<endl;
    return 0;
}

Numbers::Numbers(){
    cout<<"Enter a non-negative number between 0 and 9,999"<<endl;
    cin>>number;
    print();
}

void Numbers::print(){
    if(number>19){
        if(number>99){
            if(number>999){
                if((number-((number/100)*100))<20)cout<<less20[number/1000]<<" "<<thousand<<" "<<less20[number/100]<<" "<<hundred<<" "<<less20[(number-((number/1000)*1000))]<<endl;
                else cout<<less20[number/1000]<<" "<<thousand<<" "<<less20[number/100]<<" "<<hundred<<" "<<less100[(number-((number/1000)*1000))/10]<<" "<<less20[(number-((number/1000)*1000))%10]<<endl;
            }
            else {
                if((number-((number/100)*100))<20)cout<<less20[number/100]<<" "<<hundred<<" "<<less20[(number-((number/100)*100))]<<endl;
                else cout<<less20[number/100]<<" "<<hundred<<" "<<less100[(number-((number/100)*100))/10]<<" "<<less20[(number-((number/100)*100))%10]<<endl;
            }
        }
        else cout<<less100[number/10]<<" "<<less20[number%10];
    }
    else cout<<less20[number]<<endl;
}