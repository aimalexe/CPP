#include <iostream>
using namespace std;

int main(){
	float sum=0, c=1; 
	while (c<=45){
		sum += 1/c;
		c++;
	}
	cout<<"The sum of given series is: "<<sum; 
	return 0;
}

