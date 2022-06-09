#include <iostream>
using namespace std;

int main(){
	int num=1, sum=0;
	while(num<=10){
		cout<<"->"<<num<<endl;
		sum += num;
		num++;		
	}
	cout<<"\nThe sum is: "<<sum;
	return 0;
}

