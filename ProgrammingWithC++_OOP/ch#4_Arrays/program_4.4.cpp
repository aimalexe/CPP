#include <iostream>
using namespace std;

int main(){
	int arr [5], i, max;
	for(i=0; i<=4; i++){
		cout<<"Enter element in arr ["<<i<<"] ?: ";
		cin>>arr [i];
	}
	max= arr [0];
	i=0;
	while (i<=4){
		if(max<arr [i]){
			max = arr [i];
		}
		i++;
	}
	cout<<"\nThe maximum value is : "<<max;
	return 0;
}

