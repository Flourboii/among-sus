// First Name: Emanuele, Second Name: Farina, Date: 5/9/21
// Description: non so cosa cazzo fa sto codice

#include "C:\Users\RITA\Documents\Include\std_lib_facilities.h"

int main()
{
 int a = 0;     
 int b = 0;     
 string str;  
 
 double e = 0;
 double smallest = 0;
 double largest = 0;
 
 string unit;
 constexpr double cm_in = 2.54;
 constexpr double in_ft = 12;

 vector <double> vect; 

 int conta = 0;
 double somma = 0;

 cout << "Digita primo valore di e ";
 cin >> e;
 smallest = e;
 largest = e;

 while ( true ) 
   {  
      cout << "Inserisci in numero e l'unita " << '\n' << "Unita disponibili cm, in, m, ft" << '\n';
      cin >> e >> unit;
      cout << e << unit << '\n';
      
      if ( e < smallest ){
         cout << "Numero piu piccolo per ora " << '\n';
         smallest = e;}
      if ( e > largest ){
         cout << "Numero piu grande per ora " << '\n';
         largest = e;}
      
      if ( unit == "cm" || unit == "m" || unit == "in" || unit == "ft" ){
         if ( unit == "cm" ){
         cout << "Misura in metri " << e/100 << "m" << '\n';
         cout << "Misura in inches " << e/cm_in << "in" << '\n';
         cout << "Misura in feet " << e/cm_in/in_ft << "ft" << '\n';}
         else if ( unit == "m"){
         cout << "Misura in centimetri " << e*100 << "cm" << '\n';
         cout << "Misura in inches " << e*100/cm_in << "in" << '\n';
         cout << "Misura in feet " << e*100/cm_in/in_ft << "ft" << '\n';}      
         else if ( unit == "in"){
         cout << "Misura in metri " << e*cm_in/100 << "m" << '\n';
         cout << "Misura in centimeri " << e*cm_in << "cm" << '\n';
         cout << "Misura in feet " << e/in_ft << "ft" << '\n';}      
         else if ( unit == "ft"){
         cout << "Misura in metri " << e*in_ft*cm_in/100 << "m" << '\n';
         cout << "Misura in inches " << e*in_ft << "in" << '\n';
         cout << "Misura in cm " << e*in_ft*cm_in << "cm" << '\n';}}
      else{
         cout << "Per piacere digita una tra le unità elencante prima " << '\n';} 
      
      if ( unit == "cm" || unit == "m" || unit == "in" || unit == "ft" ){
         if ( unit == "cm" ){
            conta++;
            e = e/100;
            somma = somma + e;}
         else if ( unit == "m"){
            conta++;
            somma = somma + e;}      
         else if ( unit == "in"){
            conta++;
            e = e*cm_in/100;
            somma = e + somma;}      
         else if ( unit == "ft"){
            conta++;
            e = e*in_ft*cm_in/100;
            somma = e + somma;}}

      if ( unit == "cm" || unit == "m" || unit == "in" || unit == "ft" ){
         if ( unit == "cm" ){
            e = e/100;
            vect.push_back(e);}
         else if ( unit == "m"){
            vect.push_back(e);}      
         else if ( unit == "in"){
            e = e*cm_in/100;
            vect.push_back(e);}      
         else if ( unit == "ft"){
            e = e*in_ft*cm_in/100;
            vect.push_back(e);}}

      cout <<"Inserisci | per fermare il ciclo ";   
      cin >> str; 
     
      if ( str == "|")
        break; 
   }

 cout << "Conta = " << conta << '\n';
 cout << "Somma = " << somma << '\n';
 cout << "Numero piu grande = " << largest << '\n';
 cout << "Numero piu piccolo = " << smallest << '\n';
 for ( int i = 0; i < vect.size(); i++ ) {
      cout << vect[i] << " ";}
 
 cout << "Insert first and second inter ";
 cin >> a >> b;     
 cout << "First Number " << a << " Second Number  " << b <<'\n';

 if ( a < b ){
    cout << "The bigger number is " << b << '\n';
    cout << "The smaller number is " << a << '\n';}
 else{
    cout << "The bigger number is " << b << '\n';
    cout << "The smaller number is " << a << '\n';}

 if ( a == b)
    cout << "The number are equal" << '\n';

 double c = a;
 double d = b;
 double differ = c - d;
 
 if ( differ < 100.0 && differ > -100.0 )
    cout << "The number are almost equal" << '\n';
}