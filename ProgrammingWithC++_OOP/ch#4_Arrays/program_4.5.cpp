#include <iostream>
using namespace std;

int main(){
	int arr1 [5], arr2 [5], sum [5], i=0;
	for(i=0; i<=4; i++){
		cout<<"Enter element in arr1 ["<<i<<"] ?: ";
		cin>>arr1 [i];
	}
	cout<<endl;
	for(i=0; i<=4; i++){
		cout<<"Enter element in arr2 ["<<i<<"] ?: ";
		cin>>arr2 [i];
	}
	cout<<endl;
	for(i=0; i<=4; i++){
		sum [i]= arr1 [i] + arr2 [i];
		
		cout<<"The sum of arr1 ["<<i<<"] and arr2 ["<<i<<"] is : "<<sum [i]<<endl;
	}
	return 0;
}

