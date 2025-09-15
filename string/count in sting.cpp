#include<iostream>
using namespace std;
int main()
{
	
	string line;
	int i,Acount,acount,sym,words,count=0;
	Acount=acount=sym=0,words=1;
  	cout<<"Enter data:";
  	getline(cin,line);
  	for(i=0;line[i]!='\0';i++)//accessing by index
  	{
  		
  		if(line[i]>='0' && line[i]<='9' )//0 to 9 digits
  		count++;
  		else if(line[i]>='A' && line[i]<='Z' )//0 to 9 digits
  		Acount++;
  		else if(line[i]>='a' && line[i]<='z' )//0 to 9 digits
  		acount++;
  		else if(line[i]==' '){
	  		
	  		words++;
  		}
  		else//0 to 9 digits
  			sym++;
  		
   	} 
  	cout<<"\nTotal numbers  are:"<<i;
  	cout<<"\nTotal digits in string are:"<<count;
  	cout<<"\nTotal Capitals in string are:"<<Acount;
  	cout<<"\nTotal small in string are:"<<acount;
  	cout<<"\nTotal symbols in string are:"<<sym;
  	cout<<"\nTotal words in string are:"<<words;

  
}

