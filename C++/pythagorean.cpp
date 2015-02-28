#include<iostream>
#include <stdio.h>
#include <math.h>
/*The Pythagorean Theorem calculator
By: Nicholas Carter
11/18/2011*/
using namespace std;
int main()
{
    double a=0;
    double b=0; 
    double c=0; 
    double unk=0;
    std::cout << "Insert a measurement for a known side (Not the hypotenuse), then hit enter.";
    cin>>a;
    std::cout << "Insert a measurement for the other side (If unknown, insert 0).";
    cin>>b;
    if (b==0)
    {
         std::cout << "Insert the length of the hypotenuse.";
         cin>>c;
         unk=(pow (c,2)) - (pow (a,2));
         unk = sqrt (unk);
         std::cout << "Your answer is:\"";
         std::cout << unk;
         cin.get();
    }
    else 
    {
         unk=(pow (b,2)) + (pow (a,2));
         unk = sqrt (unk);
         std::cout << "Your answer is:";
         std::cout << unk;
         cin.get();
    }
    cin.get();

    return 0;
}
