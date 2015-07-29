//This is Sheerin Chaudhary's assignment 6 for summer 2015
//This program will compute phone numbers in various ways calling function readoriginalnumbers
//to read the telephone numbers in. Breakoriginalnumber function to separate telephone numbers
//and function printnumber3ways to read telephone in three ways
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream infile("assignment6.txt");
void readoriginalnumber(  string &);
void breakoriginalnumber( string &, string, string &, string &);
void printnumber3ways(string &, string, string &, string &);

int main()
{
    int j;

    string telephone;
    string area,exchange,extension;
    
    readoriginalnumber(telephone);
    
    for(j=0;j<7;j++) {

        
        breakoriginalnumber( area, telephone,exchange,extension);
        printnumber3ways(area,telephone,exchange,extension);
        
    }
    
    
    
    
    return 0;
    
}
//Function readoriginalnumber
//Input:
//  This function will

void readoriginalnumber( string &tele)
{

    
  
        cout<<"enter a telephone number"<<endl;
        getline(cin,tele);
        cout<<tele<<endl;

    
    return;
    
}

void breakoriginalnumber( string &are, string tele, string &exch, string &exten)
{
    
    cout<<"the original telephone number is "<<tele<<endl;
    string::size_type x;
    x=tele.length();
    
    switch(x) {
        case 13:
            are= tele.substr(1,3);
            cout<<are<<" is the area code   ";
            exch=tele.substr(5,3);
            cout<<exch<<" is the exchange   ";
            exten=tele.substr(9,4);
            cout<<exten<<" is the extension ";
            break;
            
        case 12:
            are= tele.substr(1,2);
            cout<<are<<" is the area code   ";
            exch=tele.substr(4,3);
            cout<<exch<<" is the exchange   ";
            exten=tele.substr(8,4);
            cout<<exten<<" is the extension ";
            break;
            
        case 11:
            are= tele.substr(1,1);
            cout<<are<<" is the area code   ";
            exch=tele.substr(3,3);
            cout<<exch<<" is the exchange   ";
            exten=tele.substr(7,4);
            cout<<exten<<" is the extension ";
            
    }
    return;
}

void printnumber3ways(string &are, string tele, string &exch, string &exten)
{
    
    cout<<are<<"/"<<exch<<"/"<<exten<<"  is the slash way of printing"<<endl;
    
    cout<<are<<exch<<exten<<"  is the no-punctuation way of print"<<endl;
    
    cout<<exch<<"-"<<exten<<" in in the area code "<<are<<" is the full way of printing"<<endl;
    
    return;
}
