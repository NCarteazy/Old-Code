#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void Table();
void fillTopRow(double[][25]);
void fillUpper(double[][25]);
void fillLower(double[][25]);
void fillCountry(string[]);
void Converter(double[][25],string[]);

int main (void)
{
    double Convert[25][25];
    string Country[25];
    Table();
    fillTopRow(Convert);
    fillUpper(Convert);
    fillLower(Convert);
    fillCountry(Country);
    Converter(Convert,Country);
    
    system("PAUSE");
    return 0;
}

void Table()
{
     cout<<"|              LIST OF POSSIBLE COUNTRIES             |"<<endl;
     cout<<"|-----------------------------------------------------|"<<endl;
     cout<<"|                                                     |"<<endl;
     cout<<"|   USD        VDN        SEK        MYR        RUB   |"<<endl;
     cout<<"|   CHF        PKR        DZD        ARS        GBP   |"<<endl;
     cout<<"|   BOB        BWP        BRL        CNY        CZK   |"<<endl;
     cout<<"|   SDG        GHS        GTQ        HUF        IDR   |"<<endl;
     cout<<"|   JPY        KES        KRW        OMR        THB   |"<<endl;
     cout<<"|-----------------------------------------------------|"<<endl<<endl; 
}                   

void fillTopRow(double Convert[][25])
{
    ifstream infile("CurrencyInfo.txt");
    
    for (int j=0; j<25; j++)
    {
        infile>>Convert[0][j];
    }
    
    infile.close();
}

void fillUpper(double Convert[][25])
{
    for (int i=1; i<25; i++)
    {
        for (int j=i; j<25; j++)
        {
            Convert[i][j]=Convert[0][i]/Convert[0][j];
        }
    }
}

void fillLower(double Convert[][25])
{
    for (int i=1; i<25; i++)
    {
        for (int j=0; j<i; j++)
        {
            Convert[i][j]=1.0/Convert[j][i];
        }
    }
}

void fillCountry(string Country[])
{
     ifstream infile("titles.txt");
     
     for(int i=0; i<25; i++)
     {
        infile>>Country[i];
     }
     
     infile.close();
}

void Converter(double Convert[][25],string Country[])
{
     string Country1,Country2;
     double Amount;
     int i,j;
     char again;
     
     do
     {
          
     cout<<"Input first country:  ";
     cin>>Country1;
     for(i=0; i<3; i++)
     {
              Country1[i]=toupper(Country1[i]);
     }
     
     cout<<"Input second country: ";
     cin>>Country2;
     for(i=0; i<3; i++)
     {
              Country2[i]=toupper(Country2[i]);
     }
     
     cout<<"Input amount to be converted: ";
     cin>>Amount;
     
     for(i=0; Country1!=Country[i]; i++)
     {
     }
     
     for(j=0; Country2!=Country[j]; j++)
     {
     }
     
     cout<<fixed<<showpoint<<setprecision(2);
     cout<<"Converted amount: "<<Amount*Convert[i][j]<<endl;
     
     
     cout<<"Again? (y/n): ";
     cin>>again;
     again=toupper(again);
     cout<<"______________________________________________________"<<endl<<endl;
     
     }while(again=='Y');
     
     
}
