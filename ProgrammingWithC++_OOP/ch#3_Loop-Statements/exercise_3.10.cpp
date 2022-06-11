#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i=6, space=4;
	for( ; i>=1; i--, space++){
		cout<<setw(space);
		for(int j=1 ; j<=i; j++)
			cout<<"x ";
		cout <<endl;
	}
	return 0;
}

