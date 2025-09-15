#include <iostream>
using namespace std;
class Box{
	private:
		int length,breadth,height,total;
	public:
		Box(){
			length=0;
			breadth=0;
			height=0;
			displayBox();
		}
		Box(int length,int breadth,int height){
			this->length=length;
			this->breadth=breadth;
			this->height=height;
			volume();
		}
		Box(int value){
			length=value;
			breadth=value;
			height=value;
			volume();
		}
		void displayBox(){
			cout << "\nLength: "<<length<<" Breadth: "<<breadth << " Height: "<<height;
			cout << "\nVolume: "<<total;
		}
		void volume(){
			total=length*breadth*height;
			displayBox();
		}
		~Box(){
			cout << "\nBox object is being destroyed.";
		}
};
int main(){
	int length,breadth,height;
	Box b;
	Box b1(10,5,2);
	Box b3(5);
}
