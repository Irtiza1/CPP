//Interfaces: If a class only have declared virtual function then it's called interface
//Abstract classes: If a class have declared pure virtual funcion with some other defined function then it's called abstract class

/*#include<iostream>
using namespace std;

class shape{
    protected:
    float dimension;
    public:
    void getDimension(){
        cin>>dimension;
    }

    virtual float calTotal()=0;
};

class Square:public shape{
    public:
    float calTotal(){
        return dimension*dimension;
    }  
};

class Circle:public shape{
    public:
    float calTotal(){
        return 3.14*dimension*dimension;
    }
};

int main(){
    Square s;
    s.getDimension();
    cout<<s.calTotal()<<endl;

    Circle c;
    c.getDimension();
    cout<<c.calTotal()<<endl;
}
*/

//making the pointer of the abstract class
#include<iostream>
using namespace std;
class Shape {
public:
    virtual double area() = 0; // pure virtual function
};

class Rectangle : public Shape {
public:
    Rectangle(double a,double b):length(a),width(b){}
    double area() { return length * width; }
private:
    double length;
    double width;
};

int main() {

    Shape* ptr = new Rectangle(1.5,2); // pointer to a Rectangle object
    //method 1
    Shape& ref = *ptr;            // reference to the Rectangle object
    double rect_area = ref.area();   // calls the area() function of the Rectangle object
    cout<<rect_area;
   
   //OR method 2
   // cout<<ptr->area();
    
    delete ptr;
    return 0;
}

//note: we can also create the pointer of interfaces(like Interface *ptr=new Derived(1,2,3);)