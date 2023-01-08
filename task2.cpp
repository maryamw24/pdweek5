#include <iostream>
using namespace std;
float taxCalculator(char type, float price);

main()
{
    char type;
    float price;
    float finalPrice;
    cout<<"Enter price of the vehicle:";
    cin>>price;
    cout<<"Enter type of code:";
    cin>>type;
    finalPrice = taxCalculator(type, price);
    cout<<"The final price on a vehicle of type "<<type<< " after adding the tax is "<<finalPrice;



}


float taxCalculator(char type, float price)
{
    float taxAmount;
    float finalPrice;
 if (type == 'M')
 {
     taxAmount = price*(0.06);
     finalPrice = price + taxAmount;

 }
 if (type == 'E')
 {
     taxAmount = price*(0.08);
     finalPrice = price + taxAmount;
 }
 if (type == 'S')
 {
     taxAmount = price*(0.1);
     finalPrice = price + taxAmount;
 }
if (type == 'V')
 {
     taxAmount = price*(0.12);
     finalPrice = price + taxAmount;
 }
if (type == 'T')
 {
     taxAmount = price*(0.15);
     finalPrice = price + taxAmount;
 }
  return finalPrice;
 
}