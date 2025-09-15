#include<iostream>
using namespace std;

/*
It is a way of recoding conventional operators(+- * /) for user-defined data types(struct,class,enum)

1.use friend function 
2.use member function

syntax operator(symbol)
var3=var1+var2//Operation on two causes a return of the exact type. 
var1=var1+var2//Operation on two gets stored in the first pass data. 
*/
class Time
{
 private:
 int hh,mm,ss;	
 public:
 	void set_data(int hh,int mm,int ss)
 	{
 		this->hh=hh;
 		this->mm=mm;
 		this->ss=ss;
	 }
	 void display_data(string t)
 	{
 		cout<<"\n"<< t <<hh<<" hours"<<" : "<<mm<<" minutes"<<" : " <<ss<<" seconds";
	 }
	 friend Time operator+(Time t1,Time t2);
};

Time operator+(Time t1,Time t2)
	 {
	 	Time temp;
	 	temp.ss=(t1.ss+t2.ss)%60;
	 	temp.mm=((t1.mm+t2.mm)+(t1.ss+t2.ss)/60)%60;
	 	temp.hh=((t1.hh+t2.hh)+(t1.mm+t2.mm)/60);
	 	return temp;
	 }


int main() 
{
	Time t1,t2,t3;
	t1.set_data(3,45,30);
	t1.display_data("Time 1: ");
	t2.set_data(5,4,20);
	t2.display_data("Time 2: ");
	cout<<"\n--------------------";
	t3=t1+t2;
	t3.display_data("Time 3: ");
}


