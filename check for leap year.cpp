
//ENTER THE YEAR TO CHECK WHEATER IT IS LEAP YAER OR NOT!
#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
    int year;
    cout<<"ENTER THE YEAR TO CHECK IT IS LEAP YAER OR NOT"<<endl;
    cin>>year;
    if((year%4==0)&&(year%100!=0||year%400==0))
    {
        cout<<"Is a leap year "<<year;
    }
     else
    {
        cout<<"Is not a leap year "<<year;
    }
    return 0;
}
