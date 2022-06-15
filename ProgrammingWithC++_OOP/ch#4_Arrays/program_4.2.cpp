#include <iostream>
using namespace std;

int main(){
	int data[5], i=0;
	while(i<=4){
		cout<<"Enter element in data ["<<i<<"] ?: ";
		cin>>data[i];
		i++;
	}
	for(i=4; i>=0; i--){
		cout<<"The element in data ["<<i<<"] is : "<<data[i]<<endl;
	}
	return 0;
}

