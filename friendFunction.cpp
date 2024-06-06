/*friend function:

#include<iostream>
using namespace std;

class complex{
 private:
 int a,b;
 public:
 void setdata(int x,int y){
 a=x;
 b=y;
 }
 void showdata(){
 cout<<"\na= "<<a<<"b= "<<b;
 }

 friend void fun(complex );
};

void fun(complex c){
	cout<<"sum is: "<<c.a+c.b; //its wrong b/c friend func. approaching directly

}

int main(){
complex c1,c2,c3;
c1.setdata(3,4);
c1.showdata();
fun(c1);
return 0;
}*/





/*//friend function for 2 class:
#include<iostream>
//#include<conio.h>
using namespace std;
class B; //declaring class
class A{
private:
int a;
public:
void setdata(int x){
a=x;
}

friend void fun(A,B);

};

class B{
private:
int b;
public:
void setdata(int y){
b=y;
}

friend void fun(A,B);

};

void fun(A o1, B o2){
cout<<"sum is: "<<o1.a+o2.b;
}

int main(){
A obj1;
B obj2;
obj1.setdata(2);
obj1.setdata(3);
fun(obj1,obj2);
return 0;
}*/



/*//overloading of operators as a friend function
#include<iostream>
using namespace std;
class complex{
	private:
	int a,b;
	public:
	void setdata(int x, int y){
		a=x;
		b=y;
	}

	void showdata(){
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}

	friend complex operator +(complex X, complex Y);
};
complex operator+(complex X, complex Y){
	complex temp;
	temp.a=X.a+Y.a;
	temp.b=X.b+Y.b;
	return(temp);
}
int main(){
	complex c1,c2,c3;
	c1.setdata(3,4);
	c1.setdata(5,6);
    c3=operator+(c1,c2); 	//c3=c1+c2;
	c3.showdata();
	return 0;
}*/



/*//overloading of UNARY operators as a friend function
#include<iostream>
using namespace std;
class complex{
	private:
	int a,b;
	public:
	void setdata(int x, int y){
		a=x;
		b=y;
	}

	void showdata(){
		cout<<"a= "<<a<<"b= "<<b<<endl;
	}
    friend complex operator-(complex);
};


	complex operator-(complex X){
	complex temp;
	temp.a=-X.a;
	temp.b=-X.b;
	return (temp);
	}


int main(){
complex c1,c2;
    c1.setdata(3,4);
    c2=-c1; //c2=operator-(c1);
    c1.showdata();
    c2.showdata();
return 0;
}*/



