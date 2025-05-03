#include<iostream>

using namespace std; 
int main()
{int year;
   cout<< "Enter the year:";
cin>>year;
 if((year%4==0&&year%100!=0)||(year%400==0))
 {cout<<"A YEAR IS A LEAP YEAR";}
      else
        {cout<<"A YEAR IS NOT A LEAP YEAR";}
     return 0;
  }
