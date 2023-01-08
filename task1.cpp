#include <iostream>
using namespace std;
float pyramid (float length, float width, float hieght,string unit);
main()
{
 float length, width, hieght, volume ;
 string unit;
 cout<<"enter length (in meters):";
 cin>>length;
 cout<<"enter width (in meters):";
 cin>>width;
 cout<<"enter hieght (in meters):";
 cin>>hieght;
 cout<<"enter the unit:";
 cin>>unit;
 volume = pyramid(length, width, hieght, unit);
 cout<<"pyramid volume("<<length <<","<<width<<","<<hieght<<" " <<unit <<" )"<< volume <<" cubic "<<unit<<"s";
}


float pyramid (float length, float width, float hieght,string unit)
{

    if (unit == "milimeter")
    {
       float l1 = length*1000;
       float h1 = width*1000;
       float w1 = hieght*1000;
       float volume = (l1*w1*h1)/3;
       return volume;

    }
    if (unit == "centimeter")
    {
       float l2 = length*100;
       float h2 = width*100;
       float w2 = hieght*100;
       float volume = (l2*w2*h2)/3;
       return volume;
    }if (unit == "kilometer")
    {
       float l3 = length/1000;
       float h3 = width/1000;
       float w3 = hieght/1000;
       float volume = (l3*w3*h3)/3;
       return volume;
    }

    
}