#include <iostream>
using namespace std;

int main(){
	int arr[5], sum, i;
	float average;
	for(i=0; i<=4; i++){
		cout<<"Enter element in arr ["<<i<<"] ?: ";
		cin>>arr [i];
	}
	for (i=0 ; i<= 4; i++){
		sum += arr[i];
	}
	average=sum/5;
	cout<<"\nThe sum is: "<<sum<<"\nThe average is: "<<average;
	return 0;
}

