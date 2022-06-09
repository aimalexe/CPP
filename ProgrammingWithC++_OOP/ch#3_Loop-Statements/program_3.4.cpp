#include <iostream>
using namespace std;

int main(){
	int num, bin;
	cout<<"Enter a number: ";
	cin>>num;
	while(1<=num){
		bin = num % 2;
		cout<<bin;
		num = num / 2;
	}
	return 0;
}

