#include <iostream>
using namespace std;

int main(){
	int num=0, i=1;
	long int fact=1;
	cout<<"Enter a number: ";
	cin >> num;
	
	while(i<=num){
		fact *= i;
		i++;
	}
	cout<<"The factorial of "<<num<<" is: "<<fact;
	return 0;
}

