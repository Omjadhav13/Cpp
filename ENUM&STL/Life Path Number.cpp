#include <iostream>
#include <vector>
#include <map>
using namespace std;
string numero(int no){
	vector<string> list={" ","The Leader","The Peacemaker","The Communicator","The Builder","The Adventurer","The Caregiver","The Seeker","The Powerhouse","The Humanitarian"};
	return list[no];
}
string properties(int no){
	map<int,string> property;
	property[1]="Positive: Independent, Ambitious, Pioneer, Determined | Negative: Self-centered, Dominating, Aggressive, Stubborn";
	property[2]="Positive: Cooperative, Diplomatic, Harmonious, Patient | Negative: Shy, Dependent, Indecisive, Timid";
	property[3]="Positive: Creative, Expressive, Social, Optimistic | Negative: Scattered, Superficial, Unfocused, Moody";
	property[4]="Positive: Disciplined, Hard-working, Practical, Organized | Negative: Rigid, Dogmatic, Lacking imagination, Stubborn";
	property[5]="Positive: Adaptable, Resourceful, Free-spirited, Versatile | Negative: Restless, Impulsive, Irresponsible, Inconsistent";
	property[6]="Positive: Nurturing, Loving, Responsible, Compassionate | Negative: Self-righteous, Anxious, Controlling, Worried";
	property[7]="Positive: Analytical, Intuitive, Spiritual, Wise | Negative: Aloof, Secretive, Pessimistic, Sarcastic";
	property[8]="Positive: Authoritative, Ambitious, Visionary, Financially savvy | Negative: Materialistic, Controlling, Domineering, Impatient";
	property[9]="Positive: Compassionate, Idealistic, Selfless, Artistic | Negative: Possessive, Defensive, Emotional, Impatient";
	return property[no];
}
int sum_it(int no)
 {
  	int sum=0;
  	while(no>0)
  	{
  		int digit=no%10;
  		no=no/10;
  		sum+=digit;
  	}
  	return sum;
 }
 
 int with_in_9(int number)
 {
 	while(number>9)
 		number=sum_it(number);
 	return number;
 }

 int main() 
 {
  	string name;
	int date,day,year;
	cout << "\nEnter your name: ";
	cin>> name;
	
	cout << "\nEnter your birth date: ";
	cin>> date;
	date=with_in_9(date);
	
	cout << "\nEnter your birth day: ";
		cin >> day;
	day=with_in_9(day);
	
	cout << "\nEnter your birth year: ";
	cin >> year;
	year=with_in_9(year);
	
  	int sum=date+year+day;
	int total=with_in_9(sum);
  	cout<<"\n"<<name<<" your numrology number is: "<<total<<" \nType:"<<numero(with_in_9(sum));
  	cout << "\nYour properties are : "<< properties(total);
  	
  	
 	return 0;
}

