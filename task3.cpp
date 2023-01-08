#include <iostream>
using namespace std;

main()
{
 int hoursNeeded;
 int days;
 int workers;
 int dayHours;
 float  working_days;
 int total_hours;
 int leftHours;
 int morehours;
 cout<<"Enter number of workers:";
 cin>>workers;
 cout<<"Enter number of hours needed:";
 cin>>hoursNeeded;
 cout<<"Enter number of days:";
 cin>>days;
 dayHours = workers*10;
 working_days = days - (days*0.1);
 total_hours = working_days*dayHours;
 if (total_hours >= hoursNeeded)
 {
  leftHours = total_hours-hoursNeeded;
  cout<<"Yes!"<<leftHours<<" hours are left.";
 }
 if (total_hours < hoursNeeded)
 {
  morehours = hoursNeeded - total_hours;
  cout<<"Not enough time! "<<morehours<<" hours needed.";
 }

}

