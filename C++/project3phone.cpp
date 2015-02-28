#include <iostream>
using namespace std;


/*
PhoneNumber class is designed to store phone numbers information about them, 
and to output on demand. It uses many variables and methods to perform this.
*/
class PhoneNumber
{
      private:
      int countryCode; //The country code of a phone number
      int areaCode; //The area code of a phone number
      int number; //The phone number itself
      char type; //The type of phone number
      int year; // The year this number was acquired
      public:
      //These methods will be commented on before they appear below the end 
      //of this class.
      

      PhoneNumber ();
      PhoneNumber (int, int, int, char, int);
      PhoneNumber (int, char);
      PhoneNumber (int, int, char);
      PhoneNumber (int);
      PhoneNumber (int, int);
      
      void setCountry(int);
      void setArea(int);
      void setNumber(int);
      void setType(char);
      void setYear(int);
      
      int getCountry() const;
      int getArea() const;
      int getNumber() const;
      char getType() const;
      int getYear() const;
      
      void printNumber(ostream& out) const;
      void printPhoneNumberStats(ostream& out) const;
};

/*
Constructor 1
Used if there is no initial parameters, sets all default variables
*/
PhoneNumber::PhoneNumber()
{
countryCode = 43;
areaCode = 800;
number = 8675309;
type = 'H';
year = 1981;
}

/*
Constructor 2
Used if all variables are used when initializing the object
Rest of values are default
*/
PhoneNumber::PhoneNumber(int ccode, int acode, int num, char line, int year)
{
setCountry(ccode);
setArea(acode);
setNumber(num);
setType(line);
setYear(year);
}

/*
Constructor 3
Used if there is only the phone number given when initializing the object
Rest of values are default
*/
PhoneNumber::PhoneNumber(int num)
{
countryCode = 43;
areaCode = 800;
setNumber(num);
type = 'H';
year = 1981;
}

/*
Constructor 4
Used if there is only the phone number and type given as parameters
Rest of values are default
*/
PhoneNumber::PhoneNumber(int num, char line)
{
countryCode = 43;
areaCode = 800;
setNumber(num);
setType(line);
year = 1981;
}

/*
Constructor 5
Used if there is the area code, phone number, and type passed as parameters
Rest of values are default
*/
PhoneNumber::PhoneNumber(int acode, int num, char line)
{
countryCode = 43;
setArea(acode);
setNumber(num);
setType(line);
year = 1981;
}

/*
Constructor 6
Used if there is only the area code and phone number passed
Rest of values are default
*/
PhoneNumber::PhoneNumber(int acode, int num)
{
countryCode = 43;
setArea(acode);
setNumber(num);
type = 'H';
year = 1981;
}

/*
Setvar 1
Sets the country code to the value passed from when the object was instanciated
*/
void PhoneNumber::setCountry(int ccode)
{
countryCode = ccode;
}
/*
Setvar 2
Sets the area code to the value passed from when the object was instanciated
*/
void PhoneNumber::setArea(int acode)
{
areaCode = acode;
}
/*
Setvar 3
Sets the phone number to the value passed from when the object was instanciated
*/
void PhoneNumber::setNumber(int num)
{
number = num;
}
/*
Setvar 4
Sets the type to the value passed from when the object was instanciated
*/
void PhoneNumber::setType(char line)
{
type = line;
}
/*
Setvar 5
Sets the year to the value passed from when the object was instanciated
*/
void PhoneNumber::setYear(int yr)
{
year = yr;
}
/*
Getvar 1
Gets the country code from the same value used in the constructor
Returns the country code
*/
int PhoneNumber::getCountry() const
{
return countryCode;
}
/*
Getvar 2
Gets the area code from the same value used in the constructor
Returns the area code
*/
int PhoneNumber::getArea() const
{
return areaCode;
}
/*
Getvar 3
Gets the phone number from the same value used in the constructor
Returns the phone number
*/
int PhoneNumber::getNumber() const
{
return number;
}
/*
Getvar 4
Gets the type from the same value used in the constructor
Returns the type
*/
char PhoneNumber::getType() const
{
return type;
}
/*
Getvar 5
Gets the year from the same value used in the constructor
Returns the year
*/
int PhoneNumber::getYear() const
{
return year;
}
/*
This method uses the method getNumber to get the phone number stored for this 
object then uses that to create a line of output that is to be passed by reference
to the main function.
*/
void PhoneNumber::printNumber(ostream& out) const
{
out << "The phone number is: " << getNumber() << endl;
}
/*
This method uses multiple methods in order to create a line of output to be
passed by reference to the main function, where it will be displayed.
*/
void PhoneNumber::printPhoneNumberStats(ostream& out) const
{
out << "The country code is: " << getCountry() << endl;
out << "The area code is: " << getArea() << endl;
out << "The type is: " << getType() << endl;
out << "The year is: " << getYear() << endl << endl;
}

int main()
{
    PhoneNumber firstNum;
    PhoneNumber secondNum(39, 415, 8675555, 'B', 2012);
    PhoneNumber thirdNum(1212121);
    PhoneNumber fourthNum(1234566, 'C');
    PhoneNumber fifthNum(925, 4392181);
    PhoneNumber sixthNum(925, 5512346, 'H');

    firstNum.printNumber(cout);
    firstNum.printPhoneNumberStats(cout);
    secondNum.printNumber(cout);
    secondNum.printPhoneNumberStats(cout);
    thirdNum.printNumber(cout);
    thirdNum.printPhoneNumberStats(cout);
    fourthNum.printNumber(cout);
    fourthNum.printPhoneNumberStats(cout);
    fifthNum.printNumber(cout);
    fifthNum.printPhoneNumberStats(cout);
    sixthNum.printNumber(cout);
    sixthNum.printPhoneNumberStats(cout);
    
  return 0;
}
