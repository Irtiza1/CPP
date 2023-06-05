//chain function, inline function
#include<iostream>
using namespace std;

class Test{
    public:
    int x;
    int y;
    Test(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }

    Test& setX(int a){
        x=a;
        return *this;
    }
    Test& setY(int b){
        y=b;
        return *this;
    }

    void print(){
    cout<<x;
    cout<<y;
    cout<<endl;
    }
    inline void PRINT(){
        cout<<"inline"<<endl;
    }
};

int main(){
    Test t;
    //t.print().setX(10).setY(20); //this gives error b/c print is not return the address
    t.setX(10).setY(20).print();//here print will be called when setY send address of class TEST
    t.setX(100).setY(200);
    t.print();
    t.PRINT();
    return 0;
}
