#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i=6, space=4, j;
	while (i>=1){
		cout<<setw(space);
		j=1 ;
		while(j<=i){
			cout<<"x";
			j++;
		}
		cout <<endl;
		i--;
		space++;
	}
	return 0;
}

