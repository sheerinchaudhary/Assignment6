//This is Sheerin Chaudhary's assignment 6 for summer 2015
//This program will compute phone numbers in various ways calling function readoriginalnumbers
//to read the telephone numbers in. Breakoriginalnumber function to separate telephone numbers
//and function printnumber3ways to read telephone in three ways
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
ifstream infile("assignment6input.txt");
ofstream outfile("assignment6output.txt");
void readoriginalnumber(  string &);
void breakoriginalnumber( string &, string, string &, string &);
void printnumber3ways(string &, string, string &, string &);

int main()
{
    int j;

    string telephone;
    string area,exchange,extension;
   
    
    
    for(j=0;j<6;j++) {
        
        readoriginalnumber(telephone);
        
        breakoriginalnumber( area, telephone,exchange,extension);
        printnumber3ways(area,telephone,exchange,extension);
        
        
        
    }
    
    
    return 0;
    
}
//Function readoriginalnumber
//Input:
//  This function will not receive  reference paramater of tele.
//Process:
//  This function will read telephone numbers from input file.
//Output:
//  It will send telephone numbers from input file to the main function.

void readoriginalnumber( string &tele)
{

    

    
    cout<<"Enter a telephone number"<<endl;
    getline(infile,tele);
    cout<<tele<<endl;

    
    return;
    
}
//Function breakoriginalnumber
//Input:
//  This function will receive three reference strings called are,exch,and exten
//and string tele, which  will represent the telephone numbers.
//Process:
//  This function will process three switch cases of different lengths of paramater,tel
//and separate the tele into area, exchange, and extention.
//Output:
//  It will print to output file which case it follows
// according to the length of the telephone number that it receives.

void breakoriginalnumber( string &are, string tele, string &exch, string &exten)
{
    outfile<<endl<<endl;
    outfile<<"the original telephone number is "<<tele<<endl;
    string::size_type x;
    x=tele.length();
    
    switch(x) {
        case 14:
            are= tele.substr(1,3);
            outfile<<are<<" is the area code   "<<endl;
            exch=tele.substr(6,3);
            outfile<<exch<<" is the exchange   "<<endl;
            exten=tele.substr(10,4);
            outfile<<exten<<" is the extension "<<endl;
            break;
            
        case 13:
            are= tele.substr(1,2);
            outfile<<are<<" is the area code   "<<endl;
            exch=tele.substr(5,3);
            outfile<<exch<<" is the exchange   "<<endl;
            exten=tele.substr(9,4);
            outfile<<exten<<" is the extension "<<endl;
            break;
            
        case 12:
            are= tele.substr(1,1);
            outfile<<are<<" is the area code   "<<endl;
            exch=tele.substr(4,3);
            outfile<<exch<<" is the exchange   "<<endl;
            exten=tele.substr(8,4);
            outfile<<exten<<" is the extension "<<endl;
            
    }
    return;
}
//Function printnumber3ways
//Input:
//  This function will receive three reference string paramaters of are,exch, and exten and
//string paramater of tele.
//Process:
//  This function will process string paramater, tele, in three ways using reference paramater
//are,exch, and exten. It will process one using slash,
//another with no-punctuation and one with paramater exch, and exten with area code,are.
//Output:
//  It will print to outfile three different ways paramater, tele, can printed out.
void printnumber3ways(string &are, string tele, string &exch, string &exten)
{
    
    outfile<<are<<"/"<<exch<<"/"<<exten<<"  is the slash way of printing"<<endl;
    
    outfile<<are<<exch<<exten<<"  is the no-punctuation way of print"<<endl;
    
    outfile<<exch<<"-"<<exten<<" in the area code "<<are<<" is the full way of printing"<<endl;
    
    
    return;
}
