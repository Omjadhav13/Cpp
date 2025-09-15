#include<iostream>
using namespace std;
int main()
{
	
	string line;
	int i,j,vowel,conso;
	vowel=conso=0;
  	cout<<"Enter data:";
  	getline(cin,line);
  	
  	for(i=0;line[i]!='\0';i++)//accessing by index
  	{
  		
  		if(line[i]>='a' && line[i]<='z' || line[i]>='A' && line[i]<='Z'){
    		char c=line[i];
  			if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' ||c=='E' || c=='I' | c=='O' || c=='U'){
  				vowel++;
			  }
			  else
					conso++;
		  }
	
  		
   	} 
  
  		cout << " \nVowels " << vowel;

	  	cout << " \nConsonents " << conso;

  
}

