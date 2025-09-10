//Skip Numbers
#include <iostream>
using namespace std;
int main(){
	
	for(int i=0;i<=6;i++){
		if(i==3 || i==6){
			continue;
		}
		cout << i << " ";
	}	
}

