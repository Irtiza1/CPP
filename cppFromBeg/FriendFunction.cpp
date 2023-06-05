//Friend Function: it is used when two class exist independently but want to share their attributes(like two friends)

//simple example of friend func
/*#include <iostream>
using namespace std;
class Temperature
{
int celsius;
public:
Temperature()
{
celsius = 0;
}
friend int temp( Temperature ); // declaring friend function
};
int temp( Temperature t ) // friend function definition
{
t.celsius = 40;
return t.celsius;
}
int main()
{
Temperature tm;
cout << "Temperature in celsius : " << temp( tm ) << endl;
return 0;
}*/


/*
//friend func with two classes
#include <iostream>
using namespace std;
class B; //declaration of class B
class A
{
int value;
public:
A()
{
value = 5;
}
friend int sum(A, B); // declaring friend function
};
class B
{
int value;
public:
B()
{
value = 3;
}
friend int sum(A, B); // declaring friend function
};
int sum( A v1, B v2 ) // friend function definition (and its a global friend func)
{
return (v1.value + v2.value);
}
int main()
{
A a;
B b;
cout << "Sum : " << sum( a, b ) << endl;
return 0;
}
*/
/*
//friend Class
#include<iostream>
using namespace std;
class B; //since B is friend of A so B can access all A class attributes

class A{
    int x;
    friend class B;

    public:
    A(){}
    A(int x):x(x){}
};

class B{
public:
void print(){
  A a(6);
   cout<<a.x<<endl; 
}
};
int main(){
B b;
b.print();
}*/


/*
//class member as friend
#include<iostream>
using namespace std;

class A; //forward declaration

class B{
    public:
    void display(A a);
};

class A{
    int x;
    public:
    A(){}
    A(int x):x(x){}
    friend void B::display(A);
};

void B::display(A obj){
    cout<<obj.x<<endl;
}


int main(){
    A a(5);
    B b;
    b.display(a);
}
*/


//overloadding using friend function
#include<iostream>
using namespace std;

class Math{
    int x;
    public:
    Math(){}
    Math(int c):x(c){}

    void display(){
        cout<<x<<endl;
    }

    //  Math operator+(const Math& obj){//with friend fun (overloading)
    //     x+=obj.x;
    //     return *this;
    //  }


    //  Math operator++(){
    //     x++;
    //     return *this;
    //  }
     friend Math operator+( Math obj1,Math obj2);
     friend Math operator-( Math obj1,Math obj2); //with friend func(overloading)
     friend Math operator++(Math& obj,int); 
     friend Math operator++(Math& obj); 
     friend Math operator--(Math& obj,int); 
     friend Math operator--(Math& obj); 
};

Math operator-(Math obj1,Math obj2){
    Math m;
    m.x=obj1.x-obj2.x;
    return m; 
}
Math operator+(Math obj1,Math obj2){
    Math m;
    m.x=obj1.x+obj2.x;
    return m; 
}

Math operator++(Math& obj,int){
    obj.x+=2; //Math m; m.x+=2; return m;
    return obj;
}
Math operator++(Math& obj){
    obj.x++; //or ++obj.x;
    return obj;
}
Math operator--(Math& obj,int){
    obj.x-=2; //Math m; m.x-=2; return m;
    return obj;
}
Math operator--(Math& obj){
    obj.x--;  //or --obj.x;
    return obj;
}
int main(){
    Math m(10),m1(7);
    Math m2,m3;
    cout<<"subtract"<<endl;
    m3=m-m1;
    m3.display();
    cout<<"add"<<endl;
    m2=m+m1;
    m2.display();

    cout<<"obj1: 10"<<endl;
    ++m;
    m.display();
    m++;
    m.display();

    cout<<"obj2: 7"<<endl;
    --m1;
    m1.display();
    m1--;
    m1.display();

}