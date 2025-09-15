#include<iostream>
using namespace std;
int main(){
	int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }
	cout<<"\nEntered "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }  	
	for(int i=size-1;i>0;i--)//passes
	{ 
	  for(int j=0;j<i;j++)//sort
		{
			if(a[j]<a[j+1])//comapre
				{
					int temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
		}
		
	}
	cout<<"\nSorted "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }   

}

