//Season detector
#include <iostream>
using namespace std;
int main(){
	
	int umon,udate;
	cout << "\nEnter the month (1-12): ";
	cin>>	umon;
	cout <<"\nEnter the day (1-31): ";
	cin >> udate;
	if(umon==12 && udate<=21 || umon<=3 || umon==3 && udate<=19)
		cout << "\n The season is Winter.";
	else if (umon==3 && udate>=20 ||umon>=4 && umon<=5 || umon==6 && udate<=20)
		cout << "\n The season is Spring.";
	else if (umon==6 && udate>=21 || umon>=7 && umon<=8 || umon==9 && udate<=21)
		cout << "\n The season is Summer.";
	else if (umon==9 && udate>=22|| umon>=10 && umon<=12 || umon==12 && udate<=20)
		cout << "\n The season is Autumn.";		
}

