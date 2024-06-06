/*#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(){
			cout<<"hello constructor";
		}
};

int main(){
	complex c1;
	complex x1,x2,x3;
	return 0;
}
*/

 /*//passing argument from constructor:
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(int x,int y){
		a=x;b=y;
		cout<<"a="<<a<<"b="<<b;
		//	cout<<"hello constructor";
		}
};

int main(){
	complex c1(3,4);
	complex x1(2,1),x2(1,1);
	return 0;
}*/


//constructor overloadding:
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private:
		int a,b;
	public:
		complex(int x,int y){ //constructor for 2 arguments (parameterized contstructor)
		a=x;b=y;
		cout<<"a="<<a<<"b="<<b<<endl;
		}
		
		complex(int k){ ///constructor for one argument (parameterized contstructor)
		a=k;
		cout<<"k="<<k<<endl;
		}
		
		complex(){ ///constructor for zero argument (default constructor)
		
		}
		
		complex(complex &c){ //copy contructor (having complex type as argument)
			a=c.a;
			b=c.b;
			cout<<"a="<<a<<"b="<<b<<endl;
		}
};

int main(){
	complex c1(3,4)/* we can write it as c1=complex(3,4)*/,c2(100)/*c2=complex(100) OR c2=100*/;
	complex x1(2,1),x2(1,1);
	complex f1;
	complex c4(c1);
	return 0;
}