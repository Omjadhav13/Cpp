#include <iostream>
#include <set>
#include <list>

using namespace std;
int main(){
	list <int> line = {10, 2, 5, 10, 20, 5, 2, 10, 5};
	set<int> sets;
	for(int i:line){
		
		sets.insert(i);
	}
	
	for(int s:sets){
		int count=0;
		for(int  i:line){
			if(i==s){
				count++;
				
			}
		}
		cout << s <<"->";
	cout << count<<endl;
	}
	

}