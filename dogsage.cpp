//dogs age calculator
#include <iostream>
using namespace std;
int main(){
	float dage;
	int age=0;
	cout << "\nEnter your dog's age in human years :";
	cin >> dage;
	if(dage<=2){
		if(dage==1)
			age=10.5;
		else if(dage==2)
			age=21;
	}
	else  {
		age =21;	 
		for(int i=3;i<=dage;i++){
			age+=4;
		}
	}
	cout << "Your dog's age in dog years is: " << age;
}

