//mutable, static, const variable
#include<iostream>
using namespace std;

class Book{
public:
const int x;
Book():x(0){
    s=0;
}
static int m;
static void print(){
    cout<<m;
}
static void age(){
    m=90;
    print();
}
mutable int s;
void inc() const{
s++;
cout<<s;
cout<<x;
}
};
int Book::m=0;

int main(){
    //Book b;
    //b.age(); //calling static fun with obj name;
    
    const Book b1;
     b1.inc();
    Book::age(); // calling static fun explicitly with the class name
}