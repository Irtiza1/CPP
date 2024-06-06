/*functions within the structure:
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private: //its not manadatory to write privateas element of class are by default private
	int a,b;
	public:
		void set_data(int x,int y){
			a=x;
			b=y;
		}
		void show_data(){
			cout<<"a="<<a<<"b="<<b;
			
		}
};

int main(){
	complex c1; //c1 is an object
	c1.set_data(3,4);
	c1.show_data();
	return 0;
}*/


/*funtion outside of the structure
#include<iostream>
#include<conio.h>
using namespace std;

class complex{
	private: //its not manadatory to write privateas element of class are by default private
	int a,b;
	public:
		void set_data(int ,int );
		void show_data(){
			cout<<"a="<<a<<"b="<<b;	
		}
};
void complex:: set_data(int x,int y){
			a=x;
			b=y;
}
int main(){
	complex c1; //c1 is an object
	c1.set_data(3,4);
	c1.show_data();
	return 0;
}
*/



/*
//complex add
#include<iostream>
#include<conio.h>
using namespace std;
class complex{
	private: //its not manadatory to write privateas element of class are by default private
	int a,b;
	public:
		void set_data(int x,int y){
			a=x;
			b=y;
		}
		void show_data(){
			cout<<"a="<<a<<"b="<<b;
			
		}
		complex add(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return (temp);
		}
};

int main(){
	complex c1,c2,c3; //c1 is an object
	c1.set_data(3,4);
	c2.set_data(5,6);
	c3=c1.add(c2);
	c3.show_data();
	return 0;
}*/
