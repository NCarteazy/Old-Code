#include<iostream>
using namespace std;
int main ()
{
    int sum=0; 
    int fn2=0; 
    int fn1=1; 
    int fn0=0;
    for (int c=0; c<=10000000&&fn0<4000000;  c++)
    {
        fn0=fn1+fn2; 
        if (fn0%2 == 0)
        {sum=sum+fn0;}
        fn2=fn1;
        fn1=fn0;
        }
        cout<<sum;
        cin.get();
        return 0;
}
