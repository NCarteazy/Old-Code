#include <iostream>
#include <cmath>
using namespace std;



class Complex
{
private:
       int real;
       int imag;
public:
       Complex();
       Complex(int);
       Complex(int,int);
       Complex operator+(const Complex&);
       Complex operator-(const Complex&);
       Complex operator*(const Complex&);
       Complex operator-();
       bool operator==(const Complex&);
       friend ostream &operator<<(ostream&, const Complex&);
};

Complex::Complex()
{
real = 0;
imag = 0;
}
Complex::Complex(int re)
{
real = re;
imag = 0;
}
Complex::Complex(int re, int im)
{
real = re;
imag = im;
}

Complex Complex::operator+(const Complex &right)
{
Complex newp;
newp.real = real + right.real;
newp.imag = imag + right.imag;
return newp;
}

Complex Complex::operator-(const Complex &right)
{
Complex newm;
newm.real = real - right.real;
newm.imag = imag - right.imag;
return newm;
}

Complex Complex::operator*(const Complex &right)
{
Complex newmu;
newmu.real = (real*right.real - imag*right.imag);
newmu.imag = (real*right.imag + imag*right.real);
return newmu;
}

Complex Complex::operator-()
{
Complex une;
une.real = real * -1;
une.imag = imag * -1;
return une;
}

bool Complex::operator==(const Complex &right)
{
if ((real == right.real)&&(imag == right.imag))
return true;
else
return false;
}

ostream &operator<<(ostream &out, const Complex &right)
{
if(right.real != 0 && right.imag != 0)
{
out << right.real;
if (right.imag > 0)
out << '+';
else
out << '-';
out << abs(right.imag) << 'i';
}
else if(right.real == 0 && right.imag != 0)
{
out << right.imag << 'i';
}
else if(right.real != 0 && right.imag == 0)
{
out << right.real;
}
else
{
out << '0';
}
return out;
}


int main()
{
    int i;
Complex first;            
Complex second(-4);       
Complex third(1,-2);       
Complex fourth(-1,2);
Complex fifth(3,0);
Complex sixth(0,3);
Complex seventh(5,3);
Complex eighth(6,10);
Complex ninth(7,4);
Complex tenth(-14,8);
    
cout << endl;
    
if (third == fourth)
  cout << "The complex numbers are equal." << endl;
else  
  cout << "They complex numbers are not equal." << endl;
 
if (first == first)
  cout << "The complex numbers are equal." << endl;
else
  cout << "They complex numbers are not equal." << endl;

if (first == third + fourth)
  cout << "The complex numbers are equal." << endl;
else
  cout << "They complex numbers are not equal." << endl;

cout << endl;
cout << "(" << first << ")" << " + " << "(" << second << ")" << " = " << first + second << endl;
cout << "(" << first << ")" << " - " << "(" << second << ")" << " = " << first - second << endl;
cout << "(" << first << ")" << " * " << "(" << second << ")" << " = " << first * second << endl;
cout << "-(" << second << ")" << " = " << -second << endl;

cout << endl;
cout << "(" << third << ")" << " + " << "(" << fourth << ")" << " = " << third + fourth << endl;
cout << "(" << third << ")" << " - " << "(" << fourth << ")" << " = " << third - fourth << endl;
cout << "(" << third << ")" << " * " << "(" << fourth << ")" << " = " << third * fourth << endl;
cout << "-(" << third << ")" << " = " << -third << endl;

cout << endl;
cout << "(" << fifth << ")" << " + " << "(" << sixth << ")" << " = " << fifth + sixth << endl;
cout << "(" << fifth << ")" << " - " << "(" << sixth << ")" << " = " << fifth - sixth << endl;
cout << "(" << fifth << ")" << " * " << "(" << sixth << ")" << " = " << fifth * sixth << endl;
cout << "-(" << fifth - sixth << ")" << " = " <<
-(fifth - sixth) << endl;

cout << endl;
cout << "(" << seventh << ")" << " + " << "(" << eighth << ")" << " = " << seventh + eighth << endl;
cout << "(" << seventh << ")" << " - " << "(" << eighth << ")" << " = " << seventh - eighth << endl;
cout << "(" << seventh << ")" << " * " << "(" << eighth << ")" << " = " << seventh * eighth << endl;
cout << "-(" << seventh * eighth << ")" << " = " <<
-(seventh * eighth) << endl;

cout << endl;
cout << "(" << ninth << ")" << " + " << "(" << tenth << ")" << " = " << ninth + tenth << endl;
cout << "(" << ninth << ")" << " - " << "(" << tenth << ")" << " = " << ninth - tenth << endl;
cout << "(" << ninth << ")" << " * " << "(" << tenth << ")" << " = " << ninth * tenth << endl;
cout << "-(" << ninth + tenth << ")" << " = " << -(ninth + tenth) << endl;
cout << endl;

cin >> i;
return 0;
}
