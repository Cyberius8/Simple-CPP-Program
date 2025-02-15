#include<iostream>
using namespace std;

int main(){
	int panjang;
	int sorting;
	cout<<"masukan banyaknya : ";cin>>panjang;
	int random[panjang];
	for(int i=0;i<panjang;i++){
		cout<<"random "<<i+1<<" : ";
		cin>>random[i];
	}
	int min=random[1];
	for(int n=0;n<panjang;n++){
		if(random[n]<min){
			sorting=random[n];
            random[n]=random[n+1];
        	random[n+1]=sorting;
		}
	}
	
	cout << endl << "\t\tHasil dari pengurutannya Adalah";
    for(int i=0;i<panjang;i++){
        cout << " " << random[i];
    }
}