/*FUNCTION ARE DECLARE OUTSIDE OF STRUCTURE:
#include<iostream>
#include<conio.h>
using namespace std;
struct book{
	int bookid;
	char title[20];
	float price;
};
void display(book);
book input();
int main(){
	book b1;
	b1=input();
	display(b1);
	return 0;
}

void display(book b){
	cout<<"a="<<b.bookid<<" "<<"b="<<b.title<<" "<<"c="<<b.price;
}
book input(){
	book b;
	cout<<"emter bookid,book title, book price:";
	cin>>b.bookid>>b.title>>b.price;
	return (b);
}*/


/*//FUNCTION ARE DECLARED INSIDE OF STRUCTURE:
#include<iostream>
#include<conio.h>
using namespace std;
struct book{
	int bookid;
	char title[20];
	float price;
	
	void input(){
	book b;
	cout<<"emter bookid,book title, book price:";
	cin>>bookid>>title>>price;
	
	}
	
	void display(){
	cout<<"a="<<bookid<<" "<<"b="<<title<<" "<<"c="<<price;
	}
	
};

int main(){
	book b1;
	b1.input();
	b1.display();
	return 0;
}
*/