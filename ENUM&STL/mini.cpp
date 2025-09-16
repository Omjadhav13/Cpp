#include <iostream>
#include <list>
using namespace std;
int main(){
	list <int> line={11,2,66,44,98,12,45,98,11};
	for(int i:line){
		cout << i<<" ";
	}
	cout << endl;
	
	line.sort();
	line.unique();
		for(int i:line){
		cout << i<<" ";
	}
	cout << endl;
	
//	cout << line.front();
	cout << line.front();
//	cout << min;
}