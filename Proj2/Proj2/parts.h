/* 
 * File:   parts.h
 * Author: Justin
 * Created on December 9, 2015, 3:23 PM
 */

using namespace std;
#include <iostream>
#include "pref.h"
#include <string>

#ifndef PARTS_H
#define	PARTS_H

class parts{
private:
    //Prices are from Amazon as of 12/9/2015 unless specified otherwise
    //RAM options: 10 different kinds. cheap, medium, expensive. different brands. 4 different sizes
    // ID #
    //-----4gb RAM-----
    // 100      Kingston $19.99 http://www.amazon.com/dp/B008CP5QR2/?tag=pcpapi-20
    // 101      Kingston Hyperx Fury Blue $22.67 http://www.amazon.com/dp/B00J8E92R6/?tag=pcpapi-20
    // 102      G.Skill RipjawsX $31.00 http://www.amazon.com/dp/B00741FGRA/?tag=pcpapi-20
    // 103      Corsair Vengeance Blue $24.99 http://www.amazon.com/dp/B004RFGALC/?tag=pcpapi-20
    // 104     ADATA XPG v1.0 OC $34.99 http://www.amazon.com/dp/B00F902OBO/?tag=pcpapi-20
    //-----8gb RAM-----
    // 110      Crucial $35.99 http://www.amazon.com/dp/B00AZGZFGS/?tag=pcpapi-20
    // 111      Kingston HyperX Fury $38.49 http://www.amazon.com/dp/B00J8E8ZMY/?tag=pcpapi-20
    // 112      Crucial Ballistix Sport $38.99 http://www.amazon.com/dp/B006YG9E7O/?tag=pcpapi-20
    // 113      Kingston HyperX Fury $40.75 http://www.amazon.com/dp/B00J8E9334/?tag=pcpapi-20
    // 114      Kingston HyperX Savage $61.90 http://www.amazon.com/dp/B00N9PVYXK/?tag=pcpapi-20
    //-----16gb RAM-----
    // 120     Crucial Ballistix $71.99 http://www.amazon.com/dp/B006YG9EEW/?tag=pcpapi-20
    // 121     Kingston $72.99 http://www.amazon.com/dp/B008C4LITS/?tag=pcpapi-20
    // 122     Kingston HyperX $75.99 http://www.amazon.com/dp/B00N9PVZXO/?tag=pcpapi-20
    // 123     Kingston HyperX Fury $79.25 http://www.amazon.com/dp/B00J8E8ZOC/?tag=pcpapi-20
    // 124     Corsair Vengeance Pro $101.18 http://www.amazon.com/dp/B00D2LGRPG/?tag=pcpapi-20
    // 125     Corsair Dominator Platinum $124.99 http://www.amazon.com/dp/B00J128GQS/?tag=pcpapi-20
    //
    //Storage options: cheap, medium, expensive. SSD and HDD.
    //-----SSD-----
    // 200     ADATA Premier Pro 128gb $44.99 http://www.amazon.com/dp/B009SX6VLC/?tag=pcpapi-20
    // 201     Kingston SSDNow 120gb $48.95 http://www.amazon.com/dp/B00A1ZTZOG/?tag=pcpapi-20
    // 202     Samsung 850 EVO 120gb $67.99 http://www.amazon.com/dp/B00OAJ5N6I/?tag=pcpapi-20
    // 203     SanDisk SSD Plus 240gb $69.99 http://www.amazon.com/dp/B00S9Q9VS4/?tag=pcpapi-20
    // 204     Samsung 850 EVO 250gb $77.99 http://www.amazon.com/dp/B00OAJ412U/?tag=pcpapi-20
    // 205     SanDisk Extreme PRO 240gb $109.99 http://www.amazon.com/dp/B00KHRYRNM/?tag=pcpapi-20
    // 206     Intel 530 Series 240gb $132.98 http://www.amazon.com/dp/B00DTPYSEM/?tag=pcpapi-20
    //-----HDD-----
    // 250     WD Blue 500gb $42.95 http://www.amazon.com/dp/B000Q82PIQ/?tag=pcpapi-20
    // 251     Hitachi Deskstar 1Tb $44.450 http://www.amazon.com/dp/B001W3NM2C/?tag=pcpapi-20
    // 252     Seagate Barracuda 1Tb $64.98 http://www.amazon.com/dp/B0012YXWWQ/?tag=pcpapi-20
    // 253     Hitachi 2Tb $71.25 http://www.amazon.com/dp/B002XHLLH4/?tag=pcpapi-20
    // 254     Seagate Barracuda 3Tb $107.48 http://www.amazon.com/dp/B005OK9TBC/?tag=pcpapi-20
    //
    //Processor options: cheap, medium, expensive. Intel and AMD.
    //-----AMD-----
    // 300     AMD FX 8350 $169.96 http://www.amazon.com/dp/B009O7YUF6/?tag=pcpapi-20
    // 301     AMD A10-6800k $135.99 http://www.amazon.com/dp/B00CPLGGXM/?tag=pcpapi-20
    //-----Intel----
    // 310     Intel Pentium G3258 $69.99 http://www.amazon.com/dp/B00KPRWAZQ/?tag=pcpapi-20
    // 311     Intel Core i5 4690k FROM NEWEGG $239.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117372&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 312     Intel Core i7 4790k FROM NEWEGG $339.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117369&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 313     Intel Core i7 5930k FROM NEWEGG $579.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117403&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //
    //Motherboard options: cheap, medium, expensive. AMD and Intel. Small and big.
    //-----AMD----
    // 400     AM3+   Asus M5A99X EVO R2.0 ATX $114.99 http://www.amazon.com/dp/B0091RA8U0/?tag=pcpapi-20
    // 401     AM3+   Asus Crosshair V Formula ATX $239.99 http://www.amazon.com/dp/B00906DHLE/?tag=pcpapi-20
    // 402     FM2+   FROM NEWEGG Gigabyte GA-F2A88XM-D3H mATX $64.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16813128659&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 403     FM2+   Asrock FM2A88X-ITX+ $109.86 ITX http://www.amazon.com/dp/B00FWSO9F2/?tag=pcpapi-20
    //-----Intel----
    // 410     LGA 1150 Gigabyte Z97 GA-Z97MX-Gaming 5 mATX $136.79 http://www.amazon.com/dp/B00K8HNGXS/?tag=pcpapi-20
    // 411     LGA 1150 Asus SABERTOOTH Z97 MARK 2 ATX $191.98 http://www.amazon.com/dp/B00K2R6E10/?tag=pcpapi-20
    // 412     LGA 1150 Asus H97i-Plus ITX $114.85 http://www.amazon.com/dp/B00K2R6BZE/?tag=pcpapi-20
    // 413     LGA 2011-3 Asrock X99 Extreme4 ATX FROM NEWEGG $210.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16813157543&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 414     LGA 2011-3 Asus TUF SABERTOOTH X99 ATX $309.99 http://www.amazon.com/dp/B00VUK54F0/?tag=pcpapi-20
    // 415     LGA 2011-3 Asus Rampage V Extreme ATX $504.77 http://www.amazon.com/dp/B00N1QKUQO/?tag=pcpapi-20
    //
    //Cooling options: cheap, expensive. water or air.
    //-----Water----
    // 500     Corsair H110 $114.99 http://www.amazon.com/dp/B00B4OCW7K/?tag=pcpapi-20
    // 501     Corsair H60 $59.99 http://www.amazon.com/dp/B00A0HZMGA/?tag=pcpapi-20
    //-----Air-----
    // 510     Noctua NH-U12 $77.03 http://www.amazon.com/dp/B00C9EYVGY/?tag=pcpapi-20
    // 511     Cooler Master Hyper 212 Evo $28.54 http://www.amazon.com/dp/B005O65JXI/?tag=pcpapi-20
    // 512     Bequiet! Shadow Rock 2 FROM NEWEGG $49.99 http://www.newegg.com/Product/Product.aspx?Item=9SIA68V21E0641&cm_re=bequiet_shadow_rock-_-9SIA68V21E0641-_-Product
    //
    //Graphics options: AMD and Nvidia. cheap, medium, expensive.
    //-----AMD-----
    // 600      MSI R9 390x Gaming 8G $429.99 http://www.amazon.com/dp/B00ZGF158A/?tag=pcpapi-20
    // 601     MSI R9 380 Gaming 4G $229.99 http://www.amazon.com/dp/B00ZGF0VGC/?tag=pcpapi-20
    // 602     Gigabyte R7 370 $129.99 http://www.amazon.com/dp/B00ZGF40QO/?tag=pcpapi-20
    //-----Nvidia----
    // 610      Gigabyte GTX 970 $362.40 http://www.amazon.com/dp/B00NH5T1MS/?tag=pcpapi-20
    // 611     EVGA GTX 980 FROM NEWEGG $499.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16814487079&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 612     MSI GTX 980 ti $659.99 http://www.amazon.com/dp/B0106QZE62/?tag=pcpapi-20
    // 613     EVGA GTX 960 FROM NEWEGG $209.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16814487091&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    // 614     Asus GTX 950 $161.81 http://www.amazon.com/dp/B014VHZ4IU/?tag=pcpapi-20
    //
    //Power Supply options: cheap, medium, expensive.
    // 700     EVGA 500W Bronze $45.80 http://www.amazon.com/dp/B00DGHKK7M/?tag=pcpapi-20
    // 701     Corsair CX 750W Bronze $66.99 http://www.amazon.com/dp/B00ALK3KEM/?tag=pcpapi-20
    // 702     Seasonic 850W Bronze $109.99 http://www.amazon.com/dp/B00607JNIM/?tag=pcpapi-20
    //
    //Case options:
    //-----ITX----
    // 800     Cooler Master Elite 130 $44.99 http://www.amazon.com/dp/B00DJ6A88G/?tag=pcpapi-20
    // 801     Corsair Obsidian 250D $84.99 http://www.amazon.com/dp/B00HFRTF5W/?tag=pcpapi-20
    //-----mATX----
    // 810     Rosewill mATX Case $29.99 http://www.amazon.com/dp/B005LIDU5S/?tag=pcpapi-20
    // 811     Corsair Obsidian 350D $97.99 http://www.amazon.com/dp/B00BWLL9MY/?tag=pcpapi-20
    // 812     Cooler Master N200 $49.99 http://www.amazon.com/dp/B00CUZP0SU/?tag=pcpapi-20
    //-----ATX----
    // 820     Cougar Case Solution 2 $39.99 http://www.amazon.com/gp/product/B00YRLX8I4/ref=olp_product_details?ie=UTF8&me=
    // 821     Corsair Carbide 200R $49.99 http://www.amazon.com/dp/B009GXZ8MM/?tag=pcpapi-20
    // 822     Fractal Design Define R5 $119.48 http://www.amazon.com/dp/B00Q380LDY/?tag=pcpapi-20
    // 823     Cooler Master HAF 912 FROM NEWEGG $62.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16811119233&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //
public:
    parts();
};

class ram{
private:
    int size;
    float price;
    string brand;
public:
    int getsize(){return size;};
    float getprice(){return price;};
    string getbrand(){return brand;};
    void setsize(int);
    void setprice(int);
    void setbrand(int);
};

class proc{
private:
    float price;
    string brand;
    string model;
public:
    float getprice(){return price;};
    string getbrand(){return brand;};
    string getmodel(){return model;};
    void setprice(int);
    void setbrand(int);
    void setmodel(int);
};

class storage{
private:
    int size;
    float price;
    string brand;
    string type;
public:
    int getsize(){return size;};
    void setsize(int);
    float getprice(){return price;};
    void setprice(int);
    string getbrand(){return brand;};
    void setbrand(int);
    string gettype(){return type;};
    void settype(int);
};

class mobo{
private:
    float price;
    string size;
    string brand;
    string chipset;
public:
    float getprice(){return price;};
    void setprice(int);
    string getsize(){return size;};
    void setsize(int);
    string getbrand(){return brand;};
    void setbrand(int);
    string getchipset(){return chipset;};
    void setchipset(int);
};

class cooling{
private:
    float price;
    string brand;
    string type;
public:
    float getprice(){return price;};
    void setprice(int);
    string getbrand(){return brand;};
    void setbrand(int);
    string gettype(){return type;};
    void settype(int);
};

class graphics{
private:
    float price;
    string brand;
    string model;
public:
    float getprice(){return price;};
    void setprice(int);
    string getbrand(){return brand;};
    void setbrand(int);
    string getmodel(){return model;};
    void setmodel(int);
};

class psu{
private:
    float price;
    int watt;
    string brand;
public:
    float getprice(){return price;};
    void setprice(int);
    int getwatt(){return watt;};
    void setwatt(int);
    string getbrand(){return brand;};
    void setbrand(int);
};

class Case{
private:
    float price;
    string size;
    string brand;
public:
    float getprice(){return price;};
    void setprice(int);
    string getsize(){return size;};
    void setsize(int);
    string getbrand(){return brand;};
    void setbrand(int);
};

parts::parts(){
    cout<<"HI"<<endl;
    ram info[15];
    storage info2[11];
    proc info3[5];
    mobo info4[9];
    cooling info5[4];
    graphics info6[7];
    psu info7[2];
    Case info8[8];
    for(int i=0;i<16;i++){
        info[i].setbrand(i);
        info[i].setprice(i);
        info[i].setsize(i);
    }
    for(int i=0;i<12;i++){
        info2[i].setbrand(i);
        info2[i].setprice(i);
        info2[i].setsize(i);
        info2[i].settype(i);
    }
    for(int i=0;i<6;i++){
        info3[i].setbrand(i);
        info3[i].setmodel(i);
        info3[i].setprice(i);
    }
    for(int i=0;i<10;i++){
        info4[i].setbrand(i);
        info4[i].setchipset(i);
        info4[i].setprice(i);
        info4[i].setsize(i);
    }
    for(int i=0;i<5;i++){
        info5[i].setbrand(i);
        info5[i].setprice(i);
        info5[i].settype(i);
    }
    for(int i=0;i<8;i++){
        info6[i].setbrand(i);
        info6[i].setmodel(i);
        info6[i].setprice(i);
    }
    for(int i=0;i<3;i++){
        info7[i].setbrand(i);
        info7[i].setprice(i);
        info7[i].setwatt(i);
    }
    for(int i=0;i<9;i++){
        info8[i].setbrand(i);
        info8[i].setprice(i);
        info8[i].setsize(i);
    }
    cout<<"Hello"<<endl;
}

void ram::setbrand(int i){
    if(i==0||i==11)brand="Kingston";
    if(i==1||i==6||i==8||i==13)brand="Kingston HyperX Fury";
    if(i==2)brand="G.Skill RipjawsX";
    if(i==3)brand="Corsair Vengeance";
    if(i==4)brand="ADATA XPG";
    if(i==5)brand="Crucial";
    if(i==7||i==10)brand="Crucial Ballistix";
    if(i==9)brand="Kingston HyperX Savage";
    if(i==12)brand="Kingston HyperX";
    if(i==14)brand="Corsair Vengeance Pro";
    if(i==15)brand="Corsair Dominator Platinum";
}

void ram::setprice(int i){
    if(i==0)price=19.99;
    if(i==1)price=22.67;
    if(i==2)price=31.00;
    if(i==3)price=24.99;
    if(i==4)price=34.99;
    if(i==5)price=35.99;
    if(i==6)price=38.49;
    if(i==7)price=38.99;
    if(i==8)price=40.75;
    if(i==9)price=61.90;
    if(i==10)price=71.99;
    if(i==11)price=72.99;
    if(i==12)price=75.99;
    if(i==13)price=79.25;
    if(i==14)price=101.18;
    if(i==15)price=124.99;
}

void ram::setsize(int i){
    if(i<5)size=4;
    if(i<10&&i>4)size=8;
    if(i>9)size=16;
}

void storage::setbrand(int i){
    if(i==0)brand="ADATA Premier Pro";
    if(i==1)brand="Kingston SSDNow";
    if(i==2||i==4)brand="Samsung 850 EVO";
    if(i==3)brand="SanDisk SSD Plus";
    if(i==5)brand="SanDisk Extreme PRO";
    if(i==6)brand="Intel 530";
    if(i==7)brand="Western Digital";
    if(i==8||i==10)brand="Hitachi";
    if(i==9||i==11)brand="Seagate";
}

void storage::setprice(int i){
    if(i==0)price=44.99;
    if(i==1)price=48.95;
    if(i==2)price=67.99;
    if(i==3)price=69.99;
    if(i==4)price=77.99;
    if(i==5)price=109.99;
    if(i==6)price=132.98;
    if(i==7)price=42.95;
    if(i==8)price=44.45;
    if(i==9)price=64.98;
    if(i==10)price=71.25;
    if(i==11)price=107.48;
}

void storage::setsize(int i){
    if(i==0)size=128;
    if(i==1||i==2)size=120;
    if(i==3||i==5)size=240;
    if(i==4||i==6)size=250;
    if(i==7)size=500;
    if(i==8||i==9)size=1000;
    if(i==10)size=2000;
    if(i==11)size=3000;
}

void storage::settype(int i){
    if(i<7)type="SSD";
    if(i>6)type="HDD";
}

void proc::setbrand(int i){
    if(i==0||i==1)brand="AMD";
    if(i>1)brand="Intel";
}

void proc::setmodel(int i){
    if(i==0)model="FX 8350";
    if(i==1)model="A10-6800k";
    if(i==2)model="Pentium G3258";
    if(i==3)model="Core i5 4690k";
    if(i==4)model="Core i7 4790k";
    if(i==5)model="Core i7 5930k";
}

void proc::setprice(int i){
    if(i==0)price=169.96;
    if(i==1)price=135.99;
    if(i==2)price=69.99;
    if(i==3)price=239.99;
    if(i==4)price=339.99;
    if(i==5)price=579.99;
}

void mobo::setbrand(int i){
    if(i==0||i==1||i==5||i==6||i==8||i==9)brand="Asus";
    if(i==2||i==4)brand="Gigabyte";
    if(i==3||i==7)brand="Asrock";
}

void mobo::setchipset(int i){
    if(i==0||i==1)chipset="AM3+";
    if(i==2||i==3)chipset="FM2+";
    if(i>3&&i<7)chipset="LGA 1150";
    if(i>6)chipset="LGA 2011-3";
}

void mobo::setprice(int i){
    if(i==0)price=114.99;
    if(i==1)price=239.99;
    if(i==2)price=64.99;
    if(i==3)price=109.86;
    if(i==4)price=136.79;
    if(i==5)price=191.98;
    if(i==6)price=114.85;
    if(i==7)price=210.99;
    if(i==8)price=309.99;
    if(i==9)price=504.77;
}

void mobo::setsize(int i){
    if(i<2||i==5||i>6)size="ATX";
    if(i==2||i==4)size="mATX";
    if(i==3||i==6)size="ITX";
}

void cooling::setbrand(int i){
    if(i<2)brand="Corsair";
    if(i==2)brand="Noctua";
    if(i==3)brand="Cooler Master";
    if(i==4)brand="Bequiet!";
}

void cooling::setprice(int i){
    if(i==0)price=114.99;
    if(i==1)price=59.99;
    if(i==2)price=77.03;
    if(i==3)price=28.54;
    if(i==4)price=49.99;
}

void cooling::settype(int i){
    if(i<2)type="Watercooling";
    if(i>1)type="Aircooling";
}

void graphics::setbrand(int i){
    if(i<3)brand="AMD";
    if(i>2)brand="NVidia";
}

void graphics::setmodel(int i){
    if(i==0)model="MSI R9 390x";
    if(i==1)model="MSI R9 380";
    if(i==2)model="Gigabyte R7 370";
    if(i==3)model="Gigabyte GTX 970";
    if(i==4)model="EVGA GTX 980";
    if(i==5)model="MSI GTX 980 ti";
    if(i==6)model="EVGA GTX 960";
    if(i==7)model="Asus GTX 950";
}

void graphics::setprice(int i){
    if(i==0)price=429.99;
    if(i==1)price=229.99;
    if(i==2)price=129.99;
    if(i==3)price=362.40;
    if(i==4)price=499.99;
    if(i==5)price=659.99;
    if(i==6)price=209.99;
    if(i==7)price=161.81;
}

void psu::setbrand(int i){
    if(i==0)brand="EVGA";
    if(i==1)brand="Corsair";
    if(i==2)brand="Seasonic";
}

void psu::setprice(int i){
    if(i==0)price=45.80;
    if(i==1)price=66.99;
    if(i==2)price=109.99;
}

void psu::setwatt(int i){
    if(i==0)watt=500;
    if(i==1)watt=750;
    if(i==2)watt=850;
}

void Case::setbrand(int i){
    if(i==0)brand="Cooler Master Elite 130";
    if(i==1)brand="Corsair Obsidian 250D";
    if(i==2)brand="Rosewill";
    if(i==3)brand="Corsair Obsidian 350D";
    if(i==4)brand="Cooler Master N200";
    if(i==5)brand="Cougar Case Solution 2";
    if(i==6)brand="Corsair Carbide 200R";
    if(i==7)brand="Fracal Design Define R5";
    if(i==8)brand="Cooler Master HAF 912";
}

void Case::setprice(int i){
    if(i==0)price=44.99;
    if(i==1)price=84.99;
    if(i==2)price=29.99;
    if(i==3)price=97.99;
    if(i==4)price=49.99;
    if(i==5)price=39.99;
    if(i==6)price=49.99;
    if(i==7)price=119.48;
    if(i==8)price=62.99;
}

void Case::setsize(int i){
    if(i<2)size="ITX";
    if(i>1&&i<5)size="mATX";
    if(i>4)size="ATX";
}



#endif	/* PARTS_H */

