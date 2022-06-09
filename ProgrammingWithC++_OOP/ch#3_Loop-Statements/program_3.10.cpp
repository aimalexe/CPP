#include <iostream>
using namespace std;

int main(){
	int octal=0, num=0;
	cout<<"Enter a number: ";
	cin>>num;
	do{
		octal = num % 8 ;
		cout<<octal;
		
		num= num/8;
	}while(1<=num);

	return 0;
}

