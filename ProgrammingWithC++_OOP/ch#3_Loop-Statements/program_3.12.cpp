#include <iostream>
using namespace std;

int main(){
	char name[15], ask;
	int age=0;
	while(1){
		cout<<"\nWhat is your name? ";
		cin>>name;
		cout<<"What is your age? ";
		cin>>age;
		cout<<"\nDo you want to continue [Y/N]? ";
		cin>>ask;
		if (ask=='y' || ask=='Y')
			continue;
		else 
			break;
	}
	cout <<"\n\nThank you.";
	return 0;
}

