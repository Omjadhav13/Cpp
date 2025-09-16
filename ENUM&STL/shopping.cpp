#include <iostream> 
#include <vector> 
using namespace std;
class Shop
{
	private:
		vector<string> list;
	public:
		bool search_item(string item)
		{
			for(string i: list)
			{
				if(i==item)
					return  true;
		    }
		    return false;
		}
		
		void add(string item)
		{
			if(search_item(item)==false)
			{
				list.emplace_back(item);
		        cout<<"\n"<<item<<" added in list.";
			}
			else
				cout<<"\n"<<item<<" already in list";
		}
		
		void dele(string item){
			
			if(search_item(item)==false){
				cout << item << "not in the cart"<<endl;
				
			}
			else{
				int pos;
			for(int i=0;i<=list.size();i++){
				if(item==list[i]){
					pos=i;
				}
			}
				list.erase(list.begin());
				cout << item <<" deleted from cart"<<endl;
			}
		}
		void display(){
			for(int i=0;i<list.size();i++){
				cout << "\n"<<(i+1)<<". "<<list[i]<<endl;
			}
		
}
};
int main(){
	Shop s;
	int choice;
	string pro;
	
	do{
		cout <<"Please choose an option:"<<endl;
		cout <<"1. Add an item"<<endl;
		cout <<"2. Delete an item"<<endl;
		cout <<"3. View shopping list"<<endl;
		cout <<"0.Exit"<<endl;
		cin >> choice;
		cin.ignore();
		switch(choice){
			case 1:
				cout << "Enter the item: "<<endl;
				getline(cin,pro);
				s.add(pro);
				break;
			case 2:
				cout << "Enter the item: "<<endl;
				getline(cin,pro);
				s.dele(pro);
				break;
			case 3:
				s.display();
				break;
			case 0:
				cout << "Thankyou "<< endl;
				break;
			default :
				cout << "invlaid choice";
				break;
		}
		
	}while(choice!=0);
}
