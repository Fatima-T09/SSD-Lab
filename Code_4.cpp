#include <iostream>

using namespace std;

class packing {
public:
    string pack() {
        return("Main Pack");
    }
    int price() {
        return(100);
    }
};

class CD : public packing
{
public:
    virtual string pack() {
        return("CD Pack");
    } ;
};

class Company : public CD {
public:
    int price() = 0;
    
};

class Samsung : public Company {

public:
    string pack() {
        return("Samsung CD");}
    int price() {
        return(500);}
};

class Sony : public Company {

public:
    string pack() {
        return("Sony CD");}
    int price() { 
        return(100);}
};

class CDType {
protected:
    CD cds[5];

public:
    string pack() {
        return("CDType Pack");}
    int price() {
        return(500);}
};

class CDBuilder {
public:
    CDType buildSonyCD(){
        Sony s;
        cout << "\nThis is SONY class = " << s.pack() ;cout<<endl<< "Price = " << s.price(); cout<<endl;
    }
    
    CDType buildSamsungCD(){
        Samsung s1;
        cout<<endl;
        cout << "This is Samsung class = " << s1.pack();cout<<endl << "Price = " << s1.price();cout<<endl;
    }
};

int main()
{
    CDBuilder cd;
    CDType a;
    CDType b;

    a=cd.buildSonyCD();
    b=cd.buildSamsungCD();

}