#include <iostream>
using namespace std;
template <typename T>
T add(T x,T y){
	return x+y;
}
int main(){
	cout << add<int>(3,7)<<endl;
	cout << add<float>(13.9,3.89)<<endl;
	cout << add<double>(5.9,6.9)<<endl;
	cout << add<char>('a','d')<<endl;
	cout << add<string>("om","jadhav")<<endl;
}`