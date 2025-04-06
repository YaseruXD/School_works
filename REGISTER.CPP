#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>

char name[100], prog[100], add[100], con[100], reg[100], age[100];
int opt = 0, opt2 = 0;
void regis(),view();
int main() {
	clrscr();
	cout<<"************MENU************\n";
	cout<<endl;
	cout<<"[1] - Register\n[2] - View\n[3] - Exit\n\n";
	cout<<"Option: ";
	cin>>opt;

	if(opt==3){
		cout<<"Program Terminated!";
		getch();
	}
	else if(opt==2){
		view();
	}
	else if(opt==1){
		regis();
	}
	getch();
	return 0;
}

void regis() {
	clrscr();
	cout<<"************REGISTER USER************\n";

	cin.ignore();
	cout<<"Name: ";
	cin.getline(name,100);
	cout<<"Program: ";
	cin.getline(prog,100);
	cout<<"Address: ";
	cin.getline(add,100);
	cout<<"Age: ";
	cin.getline(age,100);
	cout<<"Contact Number: ";
	cin.getline(con,100);
	cout<<"Religion: ";
	cin.getline(reg,100);
	main();
}
void view(){
	clrscr();
	cout<<"************VIEW************\n";
	cout<<endl;
	cout<<"Name: ";
	cout<<name<<endl;
	cout<<"Program: ";
	cout<<prog<<endl;
	cout<<"Address: ";
	cout<<add<<endl;
	cout<<"Age: ";
	cout<<age<<endl;
	cout<<"Contact Number: ";
	cout<<con<<endl;
	cout<<"Religion: ";
	cout<<reg<<endl<<endl;
	cout<<"Go back? [1]Yes [2]No: ";
	cin>>opt2;
	if(opt2==2){
		cout<<"Program Terminated!";
		getch();
	}
	else if(opt2==1){
		main();
	}

}