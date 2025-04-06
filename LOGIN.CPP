#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>

int main() {
	clrscr();
	char nus[100];
	char nps[100];
	char us[100];
	char ps[100];
	int opt = 0;
	int end = 0;
	int vow = 0;
	int dig = 0;

	home:
	cout<<"************MENU***********"<<endl;
	cout<<endl;
	cout<<"[1] - Register"<<endl;
	cout<<"[2] - Login"<<endl;
	cout<<"***************************"<<endl;
	cout<<endl;
	cout<<"Option: ";
	cin>>opt;

	if(opt == 1) {
		clrscr();
		cout<<"************REGISTRATION************"<<endl;
		cout<<endl;
		cout<<"Username: ";
		cin>>nus;

		password:
		cout<<"Password: ";
		cin>>nps;
		int len = strlen(nps);
		if(len<8 || len>12) {
			cout<<"Invalid: Password must be 8 to 12 characters long."<<endl;
			cout<<endl;
			goto password;
		}
		else{
			for(int i = 0; i < strlen(nps); i++) {
					char j = nps[i];
					if(j=='a'||j=='e'||j=='i'||j=='o'||j=='u'){
						vow++;
					}
					if(vow>=2){
						break;
					}
			}
			if(vow<=1){
				cout<<"Password must contain at least 2 vowels"<<endl;
				cout<<endl;
				goto password;
			}
			else{
				for(int k = 0;k < strlen(nps);k++){
					char num = nps[k];
					if(num == '1'||num == '2'||num == '3'||num == '4'||num == '5'||num == '6'||num == '7'||num == '8'||num == '9'){
						dig++;
					}
					if(dig>=2){
						break;
					}
				}
				if(dig<=1){
					cout<<"Password must contain at least two numbers (1-9)"<<endl;
					cout<<endl;
					goto password;
				}
				else{
					clrscr();
					cout<<"Account successfully registered!";
					cout<<endl;
					goto home;
				}
			}
		}
	}
	if(opt==2){
		clrscr();
		cout<<"************LOGIN************"<<endl;
		cout<<endl;
		login:
		cout<<"Username: ";
		cin>>us;
		cout<<"Password: ";
		cin>>ps;

		if(strcmp(us,nus)==0&&strcmp(ps,nps)==0){
			cout<<"Login Successfully!";
			goto exit;
		}
		else if(strcmp(us,nus)==0){
			cout<<"Invalid password"<<endl;
			cout<<endl;
			end++;
			if(end==3){
				cout<<"Maximum number of attempts exceeded. Program terminated!"<<endl;
				goto exit;
			}
			else{
				goto login;
			}
		}
		else if(strcmp(ps,nps)==0){
			cout<<"Invalid username"<<endl;
			cout<<endl;
			end++;
			if(end==3){
				cout<<"Maximum number of attempts exceeded. Program terminated!"<<endl;
				goto exit;
			}
			else{
				goto login;
			}
		}
	}
	exit:
	getch();
	return 0;
}
