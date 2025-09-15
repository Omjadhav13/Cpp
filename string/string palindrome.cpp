#include<iostream>
using namespace std;
int main()
{
	
	string line;
	int i,j;
	bool flag=true;
  	cout<<"Enter data:";
  	getline(cin,line);
  	for(j=0;line[j]!='\0';j++);
  	
  	j=j-1;
  	for(i=0;i<j;i++,j--)//accessing by index
  	{
  		if(line[i]!=line[j]){
  			flag=false;
  			break;
		  }
  		
   	} 
  	if(flag==true){
  		cout << " \nIts palindrome";
	  }
	  else 
	  	cout << " \nIts not a palindrome";

  
}

