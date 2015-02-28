#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstring>

using namespace std;

int main (void)
{
int check;
int hi;
int wordlen;
char guess;
char guess2;
char guess3;
int i;
int k;
int t;
int guessnum = 5;
string progress;
string theword;
ifstream hmfile("HM1.txt");
string progcheck;

getline(hmfile,theword);

progress = theword;
wordlen = theword.length();

for (k=0; k <wordlen; k++)
    {
    check = isalpha(theword[k]);
    if(check != 0)
    progress[k] = '-';

    }

while (guessnum !=0 && progress != theword)
{
cout<<"Please make your guess.";
cin >> guess;
guess2 = guess + 32;
guess3 = guess - 32;
progcheck=progress;

t = 0;
do 
{
if (theword[t] == guess)
    progress[t]=guess;
    else if (theword[t] == guess2)
    progress[t]=guess2;
    else if (theword[t] == guess3)
    progress[t]=guess3;
    t++;
}while (t < wordlen);

 if (progcheck== progress)
   {
   guessnum--;
   cout<<"\n Wrong guess, you have " << guessnum << " more tries. \n";
   }
 cout<<progress + "\n\n";
 

}
if (guessnum==0)
cout << "You lose :( the word was " + theword;
else 
cout << "You win! You guessed '" + theword + "' properly!";

cin>>hi;
return 0;
}
