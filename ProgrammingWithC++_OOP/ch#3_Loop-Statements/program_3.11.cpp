#include <iostream>
using namespace std;

int main(){
	int num=0, i=1;
	long int fact=1;
	cout<<"Enter a number: ";
	cin >> num;
	do{
		fact *= i;
		i++;
	}
	while(num>=i);
	cout<<"The factorial of "<<num<<" is: "<<fact;
	return 0;
}

