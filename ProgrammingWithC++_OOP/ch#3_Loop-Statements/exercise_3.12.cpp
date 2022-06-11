#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int i=1, j=0, space=8;
	do{
		cout<<setw(space);
		j=1;
		do{
			cout<<"y ";
			j++;
		}while (j<=i);
		cout<<endl;
		i++;
		space--;
	}while (i<=4);
	
	i=4;
	space=5;
	do{
		cout<<setw(space);
		j=1;
		do{
			cout<<"x ";
			j++;
		}while (j<=i);
		cout<<endl;
		i--;
		space++;
	}while (i>=1);
}

