#/*operator overloading
include<iostream>
//#include<conio.h>
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
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		complex add(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};

int main(){
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	//c3= c1+c2;   //can't possible b/c c1 & c2 are of complex type
	c3=c1.add(c2);
	c3.showdata();
	return 0;
}
*/






/*//operators as a name of function
#include<iostream>
//#include<conio.h>
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
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		complex operator+(complex c){
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return(temp);
		}
};

int main(){
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	//c3= c1+c2;   //can't possible b/c c1 & c2 are of complex type
	c3=c1+c2; //OR  c3=c1.operator+(c2);
	c3.showdata();
	return 0;
}
*/


/*//making the complex number negative
#include<iostream>
//#include<conio.h>
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
			cout<<"a="<<a<<"b="<<b<<endl;
		}
		complex operator-(){
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return(temp);
		}
};

int main(){
	complex c1,c2;
	c1.setdata(3,4);
	c2=c1.operator-(); //OR  c2=-c1;
	c2.showdata();
	return 0;
}

*/


/*
//pre & post increament

#include<iostream>
using namespace std;
class Integer{
	private:
	int x;
	public:
	void setdata(int a){
		x=a;
	}
	void showdata(){
		cout<<"x="<<x<<endl;
	}
	Integer operator++(){ //pre-increament
		Integer i;
		i.x=++x;
		return (i);
	}
	Integer operator++(int){  //post-increament
	Integer i;
	i.x=x++;
	return(i);
	}

};

int main(){
	Integer i1,i2;
	i1.setdata(3);
	i1.showdata();
	i2=i1++;   //i2=i1.operator++();
	i1.showdata();
	i2.showdata();
	return 0;
	 
}
*/

