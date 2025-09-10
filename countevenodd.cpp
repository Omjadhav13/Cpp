//countevenodd 
#include <iostream>
using namespace std;
int main(){
	int num,ecount=0,ocount=0;
	while(true){
		cout << "\nEnter the Numbers: (OR -1 to exit)\n";
		cin >> num;
		if(num%2==0){
			ecount++;
			cout << "\nNumber of even numbers: "<<ecount;
			cout << "\nNumber of odd numbers: " << ocount;
		}	
		else if(num==-1){
			break;
		}
		else {
			ocount++;
			cout << "\nNumber of even numbers: "<<ecount;
			cout << "\nNumber of odd numbers: " << ocount;	
		}
	}

}

