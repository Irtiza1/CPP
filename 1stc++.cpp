/*#include<iostream>
#define PI 3.142

void area();
int r=2;

class myclass{
	 public:
	int a;
	void display(){
	std::cout<<"inside class"<<std::endl;	
	}	
};

int main(){
	 myclass m;
	 m.a=90;
	 m.display();
	 area();
	  std::cout<<"hello world from the main function"<<std::endl;
	 std::cout<<m.a<<std::endl;
	 return 0;
}

void area(){
	float area;
	area=PI*r*r;
	std::cout<<area<<std::endl;
}*/

/*Defaults arguments*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
int add(int ,int);
int main(){
	//clrscr();
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
	
	int sum=add(a,b);
	cout<<"sum is"<<sum<<endl;
	return 0;	
}

int add(int x,int y){
	return(x+y);
}*/


#include<iostream>
#include<conio.h>
using namespace std;
int add(int ,int,int=0); //int add(int ,int=0,int=0);
int main(){
	//clrscr();
	int a,b;
	cout<<"enter two numbers: ";
	cin>>a>>b;
	
	int sum=add(a,b);
	cout<<"sum is"<<sum<<endl;
	
	int a,b,c;
	cout<<"enter three numbers: ";
	cin>>a>>b>>c;
	
	int sum=add(a,b,c);
	cout<<"sum is"<<sum<<endl;
	
	return 0;	
}

int add(int x,int y,int z){
	return(x+y+c);
}
