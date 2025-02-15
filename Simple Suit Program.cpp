#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	char menu;
	cout<<"game suit"<<endl;
	cout<<"1. Vs Com"<<endl;
	cout<<"2. Vs Player"<<endl;
	cout<<"Menu(1/2) : ";cin>>menu;
	system("cls");
	switch(menu){
		case 1:
			int player1;
			int player2;
			string won="Player 1 Won";
			string* Won= &won;
			string draw="Draw";
			string* Draw= &draw;
			string lose="Player 2 Won";
			string* Lose= &lose;
			do{
				cout<<"silahkan pilih"<<endl;
				cout<<"1. Batu"<<endl;
				cout<<"2. Gunting"<<endl;
				cout<<"3. Kertas"<<endl;
				cout<<"Pilih Player 1 : ";cin>>player1;
				system("cls");
			}
			while(player1>3);
			
			do{
				cout<<"silahkan pilih"<<endl;
				cout<<"1. Batu"<<endl;
				cout<<"2. Gunting"<<endl;
				cout<<"3. Kertas"<<endl;
				cout<<"Pilih Player 2 : ";cin>>player2;
				system("cls");
			}
			while(player2>3);
			
			if((player1==1&&player2==2)||(player1==2&&player2==3)||(player1==3&&player2==1)){
				cout<<won<<endl;
			}
			else if((player1==1&&player2==1)||(player1==2&&player2==2)||(player1==3&&player2==3)){
				cout<<draw<<endl;
			}
			else if((player1==2&&player2==1)||(player1==3&&player2==2)||(player1==1&&player2==3)){
				cout<<lose<<endl;
			}
			break;
	}