
// operator overloadding function
/*#include<iostream>
using namespace std;

class Math{
    int x;
    public:
    Math(){}
    Math(int c):x(c){}

    void display(){
        cout<<x<<endl;
    }

     Math operator+(const Math& obj){//with friend fun (overloading)
        x+=obj.x;
        return *this;
     }

    Math operator-(const Math& obj){//with friend fun (overloading)
        x-=obj.x;
        return *this;
    }
    Math operator*(const Math& obj){//with friend fun (overloading)
        x*=obj.x;
        return *this;
    }
    Math operator/(const Math& obj){//with friend fun (overloading)
        x/=obj.x;
        return *this;
    }
     
    Math operator++(){
        x++;
        return *this;
    }
    Math operator++(int){
        x++; //OR ++x;
        return *this;
    }

    Math operator--(){
        --x;
        return *this;
    }
    Math operator--(int){
        x--; //OR --x;
        return *this;
    }
    
};

int main(){
    Math m(10),m1(7);
    Math m2,m3;
    cout<<"subtract"<<endl;
    m3=m-m1;
    m3.display();
    cout<<"add"<<endl;
    m2=m+m1;
    m2.display();

    cout<<"obj: 10"<<endl;
    ++m;
    m.display();
    m++;
    m.display();

    cout<<"obj1: 7"<<endl;
    --m1;
    m1.display();
    m1--;
    m1.display();

}
*/

// //overloadding the excertion operator
// #include<iostream>
// using namespace std;

// class Book{
//     public:
//     int id;
//     float percentage;
//     double decimal;
//     char ch;
//     char fname[50];
//     string lname;
//   friend ostream& operator<<(ostream &output,const Book& obj);
//   friend istream& operator>>(istream &input, Book& obj);  


// };


//   ostream& operator<<(ostream &output,const Book& obj){
//     cout<<"id:";
//     output<<obj.id<<endl;
//     cout<<"percentage: ";
//     output<<obj.percentage<<endl;
//     cout<<"decimal";
//     output<<obj.decimal<<endl;
//     cout<<"character: ";
//     output<<obj.ch<<endl;
//     cout<<"fname: ";
//     output<<obj.fname<<endl;
//     cout<<"lname: ";
//     output<<obj.lname<<endl;
//     return output;
// }
// istream& operator>>(istream &input, Book& obj){
//     cout<<"id:";
//     input>>obj.id;
//     cout<<endl;
//     cout<<"percentage: ";
//     input>>obj.percentage;
//     cout<<endl;
//     cout<<"decimal";
//     input>>obj.decimal;
//     cout<<endl;
//     cout<<"character: ";
//     input>>obj.ch;
//     cout<<endl;
//     cout<<"fname: ";
//     input>>obj.fname;
//     cout<<endl;
//     cout<<"lname: ";
//     input>>obj.lname;
//     cout<<endl;
//     return input;
// }

// int main(){
//     Book b;
//     cin>>b;
//     cout<<b;
// }



//some more operator
#include <iostream>
using namespace std;
class MyClass {
private:
    int value;

public:
MyClass(){}
    MyClass(int val) : value(val) {}

    // Overloading the % operator
    MyClass operator%(const MyClass& other) const {
        return MyClass(value % other.value);
    }

    // Overloading the ^ operator
    MyClass operator^(const MyClass& other) const {
        return MyClass(value ^ other.value);
    }

    // Overloading the & operator
    MyClass operator&(const MyClass& other) const {
        return MyClass(value & other.value);
    }
 
    // Overloading the | operator
    MyClass operator|(const MyClass& other) const {
        return MyClass(value | other.value);
    }

    // Overloading the ~ operator
    MyClass operator~() const {
        return MyClass(~value);
    }

    // Overloading the ! operator
    bool operator!() const {
        return !value;
    }

    // Overloading the , operator
    MyClass operator,(const MyClass& other) const {
        return other;
    }

    // Overloading the = operator
    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Overloading the < operator
    bool operator<(const MyClass& other) const {
        return value < other.value;
    }

    // Overloading the > operator
    bool operator>(const MyClass& other) const {
        return value > other.value;
    }

    // Overloading the <= operator
    bool operator<=(const MyClass& other) const {
        return value <= other.value;
    }

    // Overloading the >= operator
    bool operator>=(const MyClass& other) const {
        return value >= other.value;
    }

    // Overloading the == operator
    bool operator==(const MyClass& other) const {
        return value == other.value;
    }

    // Overloading the != operator
    bool operator!=(const MyClass& other) const {
        return value != other.value;
    }

    // Overloading the && operator
    bool operator&&(const MyClass& other) const {
        return value && other.value;
    }

    // Overloading the || operator
    bool operator||(const MyClass& other) const {
        return value || other.value;
    }

    // Overloading the += operator
    MyClass& operator+=(const MyClass& other) {
        value += other.value;
        return *this;
    }

    // Overloading the -= operator
    MyClass& operator-=(const MyClass& other) {
        value -= other.value;
        return *this;
    }

    // Overloading the /= operator
    MyClass& operator/=(const MyClass& other) {
        value /= other.value;
        return *this;
    }

    // Overloading the %= operator
    MyClass& operator%=(const MyClass& other) {
        value %= other.value;
        return *this;
    }

    // Overloading the ^= operator
    MyClass& operator^=(const MyClass& other) {
        value ^= other.value;
        return *this;
    }

    // Overloading the &= operator
    MyClass& operator&=(const MyClass& other) {
        value &= other.value;
        return *this;
    }

    // Overloading the |= operator
    MyClass& operator|=(const MyClass& other) {
        value |= other.value;
        return *this;
    }

    // Overloading the *= operator
    MyClass& operator*=(const MyClass& other) {
        value *= other.value;
        return *this;
    }

    // Overloading the <<= operator
    MyClass& operator<<=(const MyClass& other) {
        value <<= other.value;
        return *this;
    }

    // Overloading the >>= operator
    MyClass& operator>>=(const MyClass& other) {
        value >>= other.value;
        return *this;
    }

    // Overloading the [] operator
    int operator[](int index) const {
        // Example implementation
        return value + index;
    }

    // Overloading the () operator
    void operator()(int param) const {
        // Example implementation
        cout << "Calling operator() with parameter: " << param << endl;
    }

    // Overloading the -> operator
    MyClass* operator->() {
        return this;
    }

    // Overloading the ->* operator (error coming)
    // int (MyClass::*memberFunctionPointer)() const = nullptr;
    // int operator ->*() {
    //     return (this->*memberFunctionPointer)();
    // }

    // Overloading the new operator
    void* operator new(size_t size) {
        cout << "Custom new operator called" << endl;
        return ::operator new(size);
    }

    // Overloading the new[] operator
    void* operator new[](size_t size) {
        cout << "Custom new[] operator called" << endl;
        return ::operator new[](size);
    }

    // Overloading the delete operator
    void operator delete(void* ptr) {
        cout << "Custom delete operator called" << endl;
        ::operator delete(ptr);
    }

    // Overloading the delete[] operator
    void operator delete[](void* ptr) {
        cout << "Custom delete[] operator called" << endl;
        ::operator delete[](ptr);
    }

    // Example member function for operator->*
    int memberFunction() const {
        return value;
    }
     // Overloading the << operator for output
    friend ostream& operator<<(ostream& os, const MyClass& obj) {
        os << obj.value;
        return os;
    }
};
int main() {
    MyClass obj1(5);
    MyClass obj2(3);

    MyClass result1 = obj1 % obj2;
    MyClass result2 = obj1 ^ obj2;
    MyClass result3 = obj1 & obj2;
    MyClass result4 = obj1 | obj2;
    MyClass result5 = ~obj1;
    bool result6 = !obj1;
    MyClass result7 = (obj1, obj2);
    MyClass result8;
    result8 = obj1;
    bool result9 = obj1 < obj2;
    bool result10 = obj1 > obj2;
    bool result11 = obj1 <= obj2;
    bool result12 = obj1 >= obj2;
    bool result13 = obj1 == obj2;
    bool result14 = obj1 != obj2;
    bool result15 = obj1 && obj2;
    bool result16 = obj1 || obj2;
    obj1 += obj2;
    obj1 -= obj2;
    obj1 /= obj2;
    obj1 %= obj2;
    obj1 ^= obj2;
    obj1 &= obj2;
    obj1 |= obj2;
    obj1 *= obj2;
    obj1 <<= obj2;
    obj1 >>= obj2;
    int result17 = obj1[2];
    obj1(42);
    // MyClass* ptr = &obj1;
    // ptr->memberFunctionPointer = &MyClass::memberFunction;
    // int result18 = obj1->*();

    MyClass* dynamicObj1 = new MyClass(10);
    delete dynamicObj1;

    MyClass* dynamicArray = new MyClass[5];
    delete[] dynamicArray;

    // Outputting the results
    cout << "Result 1: " << result1 << endl;
    cout << "Result 2: " << result2 << endl;
    cout << "Result 3: " << result3 << endl;
    cout << "Result 4: " << result4 << endl;
    cout << "Result 5: " << result5 << endl;
    cout << "Result 6: " << result6 << endl;
    cout << "Result 7: " << result7 << endl;
    cout << "Result 8: " << result8 << endl;
    cout << "Result 9: " << result9 << endl;
    cout << "Result 10: " << result10 << endl;
    cout << "Result 11: " << result11 << endl;
    cout << "Result 12: " << result12 << endl;
    cout << "Result 13: " << result13 << endl;
    cout << "Result 14: " << result14 << endl;
    cout << "Result 15: " << result15 << endl;
    cout << "Result 16: " << result16 << endl;
    cout << "Result 17: " << result17 << endl;
    //cout << "Result 18: " << result18 << endl;

    return 0;
}
