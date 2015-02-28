#include <string>
#include <iostream>
#include <fstream>
using namespace std;
const int height = 12;
const int width = 30;
void builder(char [][width]);
void printarray(char [][width]);
void spawner(char [][width]);
bool checker (char [][width], int, int, char);





int main ()
{
int l;
char a = 'a';
char boa[height][width];

builder(boa);
printarray(boa);
spawner(boa);
printarray(boa);

cin >> l;
return 0;
}


void builder (char boa[][width])
{
ifstream board("board.txt");
 for(int j=0;j<height;j++)
 {
  for(int k=0;k<width;k++)
   {board >> boa[j][k];}
 }
}


void printarray (char boa[][width]) 
{
  for (int n=0; n<height; n++)
  {
      for (int o=0; o<width; o++)
      {
          cout << boa[n][o];
      }
  cout << "\n";
  }
}


void spawner (char boa[][width])
{
 char current;
 bool alive;
 char boanew [height][width];
 
   for (int j=0;j<height;j++)
  {
  for (int k=0;k<width;k++)
      {
      boanew[j][k] = boa[j][k];
      }
  }
 
 for(int t=0;t<10;t++)
 {
         for(int j=1;j<height-1;j++)
         {
                 for(int k=1;k<width-1;k++)
                 {
                 current = boa[j][k];
                 alive = checker(boa,j,k,current);
                 if (alive == true)
                 {
                 boanew[j][k] = 'X';
                 }
                 else
                 {
                 boanew[j][k] = '.';
                 }
                 }
         }
         for (int j=0;j<height;j++)
         {
             for (int k=0;k<width;k++)
             {
             boa[j][k] = boanew[j][k];
             }
         }
         printarray(boanew);
 }
}
 
 
bool checker (char boa[][width],int j, int k, char now)
{
     int neighbor = 0;
     if (boa[j-1][k-1] == 'X')
     neighbor++;
     if (boa[j-1][k] == 'X')
     neighbor++;
     if (boa[j-1][k+1] == 'X')
     neighbor++;
     if (boa[j][k+1] == 'X')
     neighbor++;
     if (boa[j+1][k+1] == 'X')
     neighbor++;
     if (boa[j+1][k] == 'X')
     neighbor++;
     if (boa[j+1][k-1] == 'X')
     neighbor++;
     if (boa[j][k-1] == 'X')
     neighbor++;
     if(neighbor == 2 || neighbor == 3 && now == 'X')
     return true;
     else if (neighbor == 3 && now == '.')
     return true;
     else 
     return false;
}
