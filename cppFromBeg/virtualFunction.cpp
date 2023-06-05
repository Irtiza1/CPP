// #include <iostream>
// using namespace std;
// class Animal {
// public:
// void eat(){
// cout<<"Eating...";
// }
// };
// class Dog: public Animal
// {
// public:
// void eat()
// {
// cout<<"Eating bread...";
// }
// };
// int main(void) {
// Dog d = Dog();
// d.eat();
// return 0;
// }


//CASE 1:
/*
#include<iostream>
using namespace std;
class A
{
public:
void show()
{
cout << "Base class" << endl;
}
};
class B: public A
{
public:
void show()
{
cout << "Derived Class" << endl;
}
};

int main()
{
A *a;
B b;
a = &b;
a->show(); // Early binding (b/c show() in class A is not virtual)
return 0;
}
*/

//CASE 2:

#include <iostream>
using namespace std;
class Shape {
public:
virtual void draw() {
cout << "Drawing Shape" << endl;
}
};
class Circle : public Shape {
public:
void draw() {
cout << "Drawing Circle" << endl;
}
};
int main() {
Shape* s;
Circle c;
s = &c;
s->draw(); // Late binding: calls Circle's draw() function at runtime (b/c draw() in base class is  virtual)
return 0;
}