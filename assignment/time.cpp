#include <iostream>
using namespace std;
class Time{
	private:
		int hours,minutes,seconds;
	public:
		Time(int hours,int minutes,int seconds){
			this->hours=hours;
			this->minutes=minutes;
			this->seconds=seconds;
		}
		displayTime(string time){
			cout << "\n"<<time << hours<<" hours , " << minutes<<" minutes , "<<  seconds<<" seconds";
		}
		friend void addTime(Time t1,Time t2);
};
void addTime(Time t1,Time t2){
	int sec,min,hr;
	sec=(t1.seconds+t2.seconds)%60;
	min=((t1.minutes+t2.minutes)+(t1.seconds+t2.seconds)/60)%60;
	hr=((t1.hours+t2.hours)+(t1.minutes+t2.minutes)/60);
	cout << "\nTotal Time:"<< hr<<" hours , " << min<<" minutes , "<<  sec<<" seconds";	
}
int main(){
	Time t1(3,45,54);
	t1.displayTime("Time 1: ");
	Time t2(2,30,35);
	t2.displayTime("Time 2: ");
	addTime(t1,t2);
}
