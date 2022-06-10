#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	for(int i=1, s=8; i<=10; i+=2, s--){
		cout<<setw(s);
		for (int j=1; j<=i; j++){
			cout<<"*";
		}
		cout<<endl;
	}

	return 0;
}

