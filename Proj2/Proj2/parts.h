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
    //-----4gb RAM-----
    //      Kingston $19.99 http://www.amazon.com/dp/B008CP5QR2/?tag=pcpapi-20
    //      Kingston Hyperx Fury Blue $22.67 http://www.amazon.com/dp/B00J8E92R6/?tag=pcpapi-20
    //      G.Skill RipjawsX $31.00 http://www.amazon.com/dp/B00741FGRA/?tag=pcpapi-20
    //      Corsair Vengeance Blue $24.99 http://www.amazon.com/dp/B004RFGALC/?tag=pcpapi-20
    //      ADATA XPG v1.0 OC $34.99 http://www.amazon.com/dp/B00F902OBO/?tag=pcpapi-20
    //-----8gb RAM-----
    //      Crucial $35.99 http://www.amazon.com/dp/B00AZGZFGS/?tag=pcpapi-20
    //      Kingston HyperX Fury $38.49 http://www.amazon.com/dp/B00J8E8ZMY/?tag=pcpapi-20
    //      Crucial Ballistix Sport $38.99 http://www.amazon.com/dp/B006YG9E7O/?tag=pcpapi-20
    //      Kingston HyperX Fury $40.75 http://www.amazon.com/dp/B00J8E9334/?tag=pcpapi-20
    //      Kingston HyperX Savage $61.90 http://www.amazon.com/dp/B00N9PVYXK/?tag=pcpapi-20
    //-----16gb RAM-----
    //      Crucial Ballistix $71.99 http://www.amazon.com/dp/B006YG9EEW/?tag=pcpapi-20
    //      Kingston $72.99 http://www.amazon.com/dp/B008C4LITS/?tag=pcpapi-20
    //      Kingston HyperX $75.99 http://www.amazon.com/dp/B00N9PVZXO/?tag=pcpapi-20
    //      Kingston HyperX Fury $79.25 http://www.amazon.com/dp/B00J8E8ZOC/?tag=pcpapi-20
    //      Corsair Vengeance Pro $101.18 http://www.amazon.com/dp/B00D2LGRPG/?tag=pcpapi-20
    //      Corsair Dominator Platinum $124.99 http://www.amazon.com/dp/B00J128GQS/?tag=pcpapi-20
    //
    //Storage options: cheap, medium, expensive. SSD and HDD.
    //-----SSD-----
    //      ADATA Premier Pro 128gb $44.99 http://www.amazon.com/dp/B009SX6VLC/?tag=pcpapi-20
    //      Kingston SSDNow 120gb $48.95 http://www.amazon.com/dp/B00A1ZTZOG/?tag=pcpapi-20
    //      Samsung 850 EVO 120gb $67.99 http://www.amazon.com/dp/B00OAJ5N6I/?tag=pcpapi-20
    //      SanDisk SSD Plus 240gb $69.99 http://www.amazon.com/dp/B00S9Q9VS4/?tag=pcpapi-20
    //      Samsung 850 EVO 250gb $77.99 http://www.amazon.com/dp/B00OAJ412U/?tag=pcpapi-20
    //      SanDisk Extreme PRO 240gb $109.99 http://www.amazon.com/dp/B00KHRYRNM/?tag=pcpapi-20
    //      Intel 530 Series 240gb $132.98 http://www.amazon.com/dp/B00DTPYSEM/?tag=pcpapi-20
    //-----HDD-----
    //      WD Blue 500gb $42.95 http://www.amazon.com/dp/B000Q82PIQ/?tag=pcpapi-20
    //      Hitachi Deskstar 1Tb $44.450 http://www.amazon.com/dp/B001W3NM2C/?tag=pcpapi-20
    //      Seagate Barracuda 1Tb $64.98 http://www.amazon.com/dp/B0012YXWWQ/?tag=pcpapi-20
    //      Hitachi 2Tb $71.25 http://www.amazon.com/dp/B002XHLLH4/?tag=pcpapi-20
    //      Seagate Barracuda 3Tb $107.48 http://www.amazon.com/dp/B005OK9TBC/?tag=pcpapi-20
    //
    //Processor options: cheap, medium, expensive. Intel and AMD.
    //-----AMD-----
    //      AMD FX 8350 $169.96 http://www.amazon.com/dp/B009O7YUF6/?tag=pcpapi-20
    //      AMD A10-6800k $135.99 http://www.amazon.com/dp/B00CPLGGXM/?tag=pcpapi-20
    //-----Intel----
    //      Intel Pentium G3258 $69.99 http://www.amazon.com/dp/B00KPRWAZQ/?tag=pcpapi-20
    //      Intel Core i5 4690k FROM NEWEGG $239.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117372&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      Intel Core i7 4790k FROM NEWEGG $339.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117369&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      Intel Core i7 5930k FROM NEWEGG $579.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16819117403&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //
    //Motherboard options: cheap, medium, expensive. AMD and Intel. Small and big.
    //-----AMD----
    //      AM3+   Asus M5A99X EVO R2.0 ATX $114.99 http://www.amazon.com/dp/B0091RA8U0/?tag=pcpapi-20
    //      AM3+   Asus Crosshair V Formula ATX $239.99 http://www.amazon.com/dp/B00906DHLE/?tag=pcpapi-20
    //      FM2+   FROM NEWEGG Gigabyte GA-F2A88XM-D3H mATX $64.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16813128659&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      FM2+   Asrock FM2A88X-ITX+ $109.86 ITX http://www.amazon.com/dp/B00FWSO9F2/?tag=pcpapi-20
    //-----Intel----
    //      LGA 1150 Gigabyte Z97 GA-Z97MX-Gaming 5 mATX $136.79 http://www.amazon.com/dp/B00K8HNGXS/?tag=pcpapi-20
    //      LGA 1150 Asus SABERTOOTH Z97 MARK 2 ATX $191.98 http://www.amazon.com/dp/B00K2R6E10/?tag=pcpapi-20
    //      LGA 1150 Asus H97i-Plus ITX $114.85 http://www.amazon.com/dp/B00K2R6BZE/?tag=pcpapi-20
    //      LGA 2011-3 Asrock X99 Extreme4 ATX FROM NEWEGG $210.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16813157543&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      LGA 2011-3 Asus TUF SABERTOOTH X99 ATX $309.99 http://www.amazon.com/dp/B00VUK54F0/?tag=pcpapi-20
    //      LGA 2011-3 Asus Rampage V Extreme ATX $504.77 http://www.amazon.com/dp/B00N1QKUQO/?tag=pcpapi-20
    //
    //Cooling options: cheap, expensive. water or air.
    //-----Water----
    //      Corsair H110 $114.99 http://www.amazon.com/dp/B00B4OCW7K/?tag=pcpapi-20
    //      Corsair H60 $59.99 http://www.amazon.com/dp/B00A0HZMGA/?tag=pcpapi-20
    //-----Air-----
    //      Noctua NH-U12 $77.03 http://www.amazon.com/dp/B00C9EYVGY/?tag=pcpapi-20
    //      Cooler Master Hyper 212 Evo $28.54 http://www.amazon.com/dp/B005O65JXI/?tag=pcpapi-20
    //      Bequiet! Shadow Rock 2 FROM NEWEGG $49.99 http://www.newegg.com/Product/Product.aspx?Item=9SIA68V21E0641&cm_re=bequiet_shadow_rock-_-9SIA68V21E0641-_-Product
    //
    //Graphics options: AMD and Nvidia. cheap, medium, expensive.
    //-----AMD-----
    //      MSI R9 390x Gaming 8G $429.99 http://www.amazon.com/dp/B00ZGF158A/?tag=pcpapi-20
    //      MSI R9 380 Gaming 4G $229.99 http://www.amazon.com/dp/B00ZGF0VGC/?tag=pcpapi-20
    //      Gigabyte R7 370 $129.99 http://www.amazon.com/dp/B00ZGF40QO/?tag=pcpapi-20
    //-----Nvidia----
    //      Gigabyte GTX 970 $362.40 http://www.amazon.com/dp/B00NH5T1MS/?tag=pcpapi-20
    //      EVGA GTX 980 FROM NEWEGG $499.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16814487079&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      MSI GTX 980 ti $659.99 http://www.amazon.com/dp/B0106QZE62/?tag=pcpapi-20
    //      EVGA GTX 960 FROM NEWEGG $209.99 http://www.newegg.com/Product/Product.aspx?Item=N82E16814487091&nm_mc=AFC-C8Junction&cm_mmc=AFC-C8Junction-PCPartPicker,%20LLC-_-na-_-na-_-na&cm_sp=&AID=10446076&PID=3938566&SID=
    //      Asus GTX 950 $161.81 http://www.amazon.com/dp/B014VHZ4IU/?tag=pcpapi-20
    //
    //Power Supply options: cheap, medium, expensive.
    //      EVGA 500W Bronze $45.80 http://www.amazon.com/dp/B00DGHKK7M/?tag=pcpapi-20
    //      Corsair CX 750W Bronze $66.99 http://www.amazon.com/dp/B00ALK3KEM/?tag=pcpapi-20
    //      Seasonic 850W Bronze $109.99 http://www.amazon.com/dp/B00607JNIM/?tag=pcpapi-20
    //
    //Case options:
    //-----ITX----
    //      Cooler Master Elite 130 $44.99 http://www.amazon.com/dp/B00DJ6A88G/?tag=pcpapi-20
    //      Corsair Obsidian 250D $84.99 http://www.amazon.com/dp/B00HFRTF5W/?tag=pcpapi-20
    //-----mATX----
    //      Rosewill mATX Case $29.99 http://www.amazon.com/dp/B005LIDU5S/?tag=pcpapi-20
    //      Corsair Obsidian 350D $97.99 http://www.amazon.com/dp/B00BWLL9MY/?tag=pcpapi-20
    //      Cooler Master N200 $49.99 http://www.amazon.com/dp/B00CUZP0SU/?tag=pcpapi-20
    //-----ATX----
    //      
};

#endif	/* PARTS_H */

