/*Q2 Write a program to enter your age then check you are eligible for vote or not using if else statement*/

#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:";
    cin>>age;

    if(age>=18)
    {
        cout<<"You are eligible for the vote.";
    }
    else{
        cout<<"You are not eligible for vote.";
    }

    return 0;
}