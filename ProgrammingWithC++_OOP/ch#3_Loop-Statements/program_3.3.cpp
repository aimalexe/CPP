#include <iostream>
using namespace std;

int main(){
	int num=0, prod=1, i=1;
	cout<<"Enter a number? ";
	cin>>num;
	
	while(i<=10){
		prod = i * num;
		cout<<num<<" x "<<i<<" = "<<prod<<endl;
		i++;
	} 
	return 0;
}

