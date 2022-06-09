#include <iostream>
using namespace std;

int main(){
	char name[15], adress[15], ask;
	int marks;
	do{
		cout<<"Enter student\'s name: ";
		cin>>name;
		cout<<"Enter student\'s adress: ";
		cin>>adress;
		cout<<"Enter student\'s marks: ";
		cin>>marks;
		
		cout<<"Name: "<<name<<"\tAdress: "<<adress<<"\tMARKS: "<<marks;
		
		cout<<"\nMore record? [Y/N]";
		cin>>ask;
	}while(ask=='y' || ask=='Y');

	return 0;
}

