#include <iostream>
using namespace std;

int main(){
	int i=1;
	while (i<=3){
		int j=1, n=1;
		while(j<=5){
			cout<< n <<"\t";
			n=n+i;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

