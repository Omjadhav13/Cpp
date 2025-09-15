#include <iostream>
using namespace std;
class Distance{
	private:
		float feet;
		float inches;
	public:
		void setdata(float feet,float inches){
			this->feet=feet;
			this->inches=inches;
			
		}
		void display(){
			cout << "\n"<<feet << " "<< inches;
		}
	friend bool operator==(Distance d1,Distance d2);	
};
bool operator==(Distance d1,Distance d2){
	Distance tempinch;
	d1.inches+=d1.feet*12;
	d2.inches+=d2.feet*12;
	if((d1.inches)==(d2.inches)){
		return true;
	}
	else 
		return false;
}
int main(){
	Distance d1,d2;
	d1.setdata(13,3);
	d2.setdata(13,3);
	d1.display();
	d2.display();
	if(d1==d2)
		cout << "true";
	else
		cout << "false";
}
