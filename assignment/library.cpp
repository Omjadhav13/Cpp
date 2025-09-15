#include <iostream>
using namespace std;

class Book{
	private:
		static int book_id_gen;
		int bookid;
		string title,author;
	public:
		void addbook(string t,string a){
			bookid=++book_id_gen;
			title=t;
			author=a;
			cout <<"\nBook added successfuly..";
			cout << "\nBook ID: "<<bookid <<", Title: "<<title <<", Author: "<<author;
		}
		void displaybook(){
			cout << "\nBook ID: "<<bookid <<", Title: "<<title <<", Author: "<<author;
		}
		int getbook(){
			return bookid;
		}
		
		
};
int Book::book_id_gen=100;

int main(){
	Book b[50];
	int books=0,id;
	string title,author;
	bool flag;
	int choice;
	do{
		cout <<"\nLibrary Management System";
		cout <<"\n1. Add Book";
		cout <<"\n2. Display All Books";
		cout <<"\n3. Search for a Book";
		cout <<"\n4. Exit";
		cout <<"\nEnter your choice:";
		cin >> choice;
		cin.ignore();
		switch(choice){
			case 1:
				cout <<"\nEnter Title ";
				getline(cin,title);
				cout << "\nEnter author ";
				getline(cin,author);
				b[books].addbook(title,author);
				books++;
				break;
			case 2:
				for(int i=0;i<books;i++){
						b[i].displaybook();					
					}
				break;
			case 3:
				cout <<"\nEnter Book ID ";
				cin >> id;
				flag=false;
				for(int i=0;i<books;i++){
					if(id==b[i].getbook()){
						b[i].displaybook();
						flag=true;
						break;
					}
				}
				if(flag==false){
					cout <<"\nBook not found..";
				
				}
				break;
			case 4:
				cout << "Exiting...";
				break;
			default:
				cout <<"\n Invalid choice";
				break;	
		}

	}while(choice!=4);
}
