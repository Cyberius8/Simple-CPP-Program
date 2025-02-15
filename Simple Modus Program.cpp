#include<iostream>
using namespace std;

int modus(int data[],int size)
{
	int banyak=0;
	int nilai=0;
	for(int i=0;i<size;i++)
	{
		int sama=0;
		for(int j=0;j<size;j++)
		{
			if(data[i]==data[j])
			{
				sama++;
			}
		}
		
		if(sama>banyak)
		{
			nilai=data[i];
			banyak=sama;
		}
	}
	cout<<"Angka yang paling sering muncul adalah "<<nilai;
	cout<<endl;
	cout<<"dengan banyak ";
	return banyak;
}

int main()
{
	int data[]={6,2,8,5,2,5,9,0,0,2,0,8,2};
	int size=sizeof(data)/sizeof(int);
	int mod=modus(data,size);
	cout<<mod;
}