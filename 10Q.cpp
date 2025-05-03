#include<iostream>

using namespace std; 
int main(){
    double side1,side2,side3;
    cout<<"Enter the value of length of side 1,side2,side3";
    cin>>side1>>side2>>side3;
    if(side1==side2&&side2==side3)
    {cout<<"The triangle is Equilateral";}
    else if(side1==side2||side2==side3||side1==side3)
    {cout<<"The triangle is isosceles";}
    else{
        cout<<"The triangle is scalene";
    }
}