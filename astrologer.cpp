//astrologer
#include <iostream>
#include <string>
using namespace std;

int main() {
    int day;
    string month;
    cout << "Enter the month of birth (may,june,etc): ";
    cin >> month;
    cout << "Enter the day of birth: ";
    cin >> day;
    if (month=="march" && day>=21 || (month=="april" && day<=19)) {	
        cout << "\nYour Astrological sign is: Aries"; 
    } 
	else if (month=="april" && day>=20 || (month=="may" && day<=20)) {	
        cout << "\nYour Astrological sign is: Taurus";   
    } 
	else if (month=="may" && day>=21 || month=="june" && day<=20) {	
        cout << "\nYour Astrological sign is: Gemini";    
    } 
	else if (month=="june" && day>=21 || month=="july" && day<=22) {	
        cout << "\nYour Astrological sign is: Cancer" ;    
    } 
	else if (month=="july" && day>=23 || month=="august" && day<=22) {	
        cout << "\nYour Astrological sign is: Leo";    
    } 
	else if (month=="august" && day>=23 || month=="september" && day<=22) {	
        cout << "\nYour Astrological sign is: Virgo";    
    } 
	else if (month=="september" && day>=23 || month=="october" && day<=22) {	
        cout << "\nYour Astrological sign is: Libra";    
    } 
	else if (month=="october" && day>=23 || month=="november" && day<=21) {	
        cout << "\nYour Astrological sign is: Scorpio" ;    
    } 
	else if (month=="november" && day>=22 || month=="december" && day<=21) { 	
        cout << "\nYour Astrological sign is: Sagittarius" ;    
    } 
	else if (month=="december" && day>=22) || month=="january" && day<=19) {	
        cout << "\nYour Astrological sign is: Capricorn" ;    
    } 
	else if (month=="january" && day>=20 || month=="february" && day<=18) {	
        cout << "\nYour Astrological sign is: Aquarius" ; 
    } 
	else if (month=="february" && day>=19 || month=="march" && day<=20) {	
        cout << "\nYour Astrological sign is: Pisces" ;    
    } 
	else {
        cout << "\nInvalid date or month entered." ;
    }
}

