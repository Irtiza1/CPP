
// #include<iostream>
// using namespace std;
/*template<class T, class U, class
V=double>
class A {
T x;
U y;
V z;
static int count;
};
int main()
{
A<char, string> a;
A<int,string > b;
cout << sizeof(a) << endl;
cout << sizeof(b) << endl;
cout<<sizeof(string) << endl;
cout<<sizeof(char)<< endl;
cout<<sizeof(bool)<< endl;
cout<<sizeof(float)<< endl;
cout<<sizeof(int)<< endl;
cout<<sizeof(double)<< endl;
return 0;

}*/
/*
class Base{
public:
virtual void display()=0;
};
class Child: public Base{
public:
virtual void display(){
cout<<"Never Give up!!!"<<endl;
}
};

int main(){
Child obj;
cout<<sizeof(obj)<<endl;
return 0;
}*/



// class Base {
// public:
//      void display(){
        
//      }
// };


/*
class Base {
public:
     
};

int main() {
    Base obj ;
    std::cout << sizeof(obj) << std::endl;
   
    return 0;
}
*/
/*class A{
public:
void square (int *x){
*x = (*x)++ * (*x);
}
void square (int *x, int *y){
*x = (*x) * --(*y);
}
};
int main(){
A obj;
int number = 10;
obj.square(&number);
cout <<number;
return 0;
}*/

/*
int main() {
int ex=0;
int var = 0;
try {
try {
throw var;
}
catch (int ex) {
ex+=10;
cout << "Error handling :: Val :" << var<<" Ex :"<<ex<<endl;
throw;
}
}
catch (...) {
cout << "All Exception Catch: val :"<< var<<" Ex : "<<ex<<endl;
}
return 0;
}*/

// class A{
// int x;
// public: A(int i) { x = i; }
// void print() { cout << x; }
// };
// class B: virtual public A{
// public: B():A(10) { }
// };
// class C: virtual public A{
// public: C():A(10) { }
// };
// class D: public B, public C {
//     public:
//     D():A(10){}
// };
// int main(){
// D d;
// d.print();
// return 0;
// }

/*
//Question #4
#include<iostream>
#include<string>
#include<cstring>
using namespace std;

class Sport{
private:
    string current_champ;
    int start_year;
    string headquarter_location;

public:
    Sport(){}
    Sport(string a,int  b,string c){
        current_champ=a;
        start_year=b;
        headquarter_location=c;
    }
    string getCurrent_champ()
    {
        return this->current_champ;
    }


    void setCurrent_champ(string current_champ)
    {
        this->current_champ = current_champ;
    }


    int getStart_year()
    {
        return this->start_year;
    }


    void setStart_year(int start_year)
    {
        this->start_year = start_year;
    }


    string getHeadquarter_location()
    {
        return this->headquarter_location;
    }


    void setHeadquarter_location(string headquarter_location)
    {
        this->headquarter_location = headquarter_location;
    }
};

class Tournament{
    private:
        Sport* sport;

	public:
    Tournament():sport(new Sport()){}
    Tournament(string a,int b, string c):sport(new Sport(a,b,c)){}
    ~Tournament(){
        delete sport;
    }

     void Begin_Tournament(Sport s){
        if(s.getHeadquarter_location()=="Karachi" | s.getHeadquarter_location()=="Toronto"){
            cout<<"Tournament begins"<<endl;
        }
    }

    Sport* getSport() {
		return this->sport;
	}

	void setSport(Sport* sport) {
		this->sport = sport;
	}
};

class WorldCup:public Tournament{
    public:
    WorldCup():Tournament(){}
    WorldCup(string a,int b, string c):Tournament(a,b,c){}
    void Begin_Tournament(Sport s){
        if((s.getHeadquarter_location()!="Karachi" || s.getHeadquarter_location()!="Toronto")&& (s.getStart_year()>1950)){
            cout<<"World Cup begins"<<endl;
        }
    }
};


template<class T>
void Printit(T s){
    cout<<"head: "<<s.getHeadquarter_location()<<endl;
    cout<<"curr champ: "<<s.getCurrent_champ()<<endl;
    cout<<"start year: "<<s.getStart_year()<<endl;
}

int main(){
Sport s1("TeamA", 2021, "Karachi");
    Sport s2("TeamB", 2000, "London");

    Tournament t;
    t.Begin_Tournament(s1); // Output: Tournament begins
    t.Begin_Tournament(s2); // No output

    WorldCup wc;
    wc.Begin_Tournament(s1); // No output
    wc.Begin_Tournament(s2); // Output: World Cup begins


    Printit(s1);
}*/


/*
//QUESTION# 5
#include<iostream>
#include<string>
#include <iostream>

class JumpingCastle {
private:
    int count;
public:
    JumpingCastle() : count(0) {}

    void enter() {
        if (count >= 10) {
            throw "Count Overflow";
        }
        count++;
    }

    void exit() {
        if (count <= 0) {
            throw "Count Underflow";
        }
        count--;
    }

    int getCount() {
        return count;
    }
};

int main() {
    JumpingCastle jumpingCastle;

    while (true) {
        std::cout << "Current count: " << jumpingCastle.getCount() << std::endl;
        std::cout << "Enter (1) or Exit (2) or Stop(0): ";
        int choice;
        std::cin >> choice;

        try {
            if (choice == 1) {
                jumpingCastle.enter();
                std::cout << "Person entered.\n";
            } else if (choice == 2) {
                jumpingCastle.exit();
                std::cout << "Person exited.\n";
                
            } else if (choice == 0) {
                exit(1);
            }else {
                std::cout << "Invalid choice. Try again.\n";
            }
        } catch (const char* exception) {
            std::cout << "Exception: " << exception << std::endl;
        }
    }

    return 0;
}
*/

/*
//QUESTION #06
#include<iostream>
#include<string>
using namespace std;

class FiLE{
    private:
        int size;
        string location;
        string creaetd_dated;
        string modified_date;

    public:
    FiLE(){}
    FiLE(int a,string b,string c,string d){
        size=a;
        location=b;
        creaetd_dated=c;
        modified_date=d;
    }
        int getSize()
        {
            return this->size;
        }

    
        void setSize(int size)
        {
            this->size = size;
        }

    
        string getLocation()
        {
            return this->location;
        }

    
        void setLocation(string location)
        {
            this->location = location;
        }

    
        string getCreaetd_dated()
        {
            return this->creaetd_dated;
        }

    
        void setCreaetd_dated(string creaetd_dated)
        {
            this->creaetd_dated = creaetd_dated;
        }

    
        string getModified_date()
        {
            return this->modified_date;
        }

    
        void setModified_date(string modified_date)
        {
            this->modified_date = modified_date;
        }

    virtual void print(){
        cout<<size<<endl;
        cout<<location<<endl;
        cout<<creaetd_dated<<endl;
        cout<<modified_date<<endl;
    }

    virtual void open()=0;
};

class PDF:public FiLE{
    public:
     PDF(int a,string b,string c,string d) :FiLE(a,b, c, d){}
    void open(){
        cout<<"pdf file opens"<<endl;
    }
    void print(){
        cout<<"PDF specs"<<endl;
        cout<<getSize()<<endl;
        cout<<getLocation()<<endl;
        cout<<getCreaetd_dated()<<endl;
        cout<<getModified_date()<<endl;
        
    }
};
class ASCII:public FiLE{
     public:
     ASCII(int a,string b,string c,string d) :FiLE(a,b, c, d){}
    void open(){
        cout<<"SACII file open"<<endl;
    }
    void print(){
        cout<<"ASCII specs"<<endl;
        cout<<getSize()<<endl;
        cout<<getLocation()<<endl;
        cout<<getCreaetd_dated()<<endl;
        cout<<getModified_date()<<endl;
        
    }
};
class PS:public FiLE{
    public:
    PS(int a,string b,string c,string d) :FiLE(a,b, c, d){}
    void open(){
        cout<<"PS file opens"<<endl;
    }
    void print(){
        cout<<"PS specs"<<endl;
        cout<<getSize()<<endl;
        cout<<getLocation()<<endl;
        cout<<getCreaetd_dated()<<endl;
        cout<<getModified_date()<<endl;
        
    }
};


bool operator*( FiLE & file_object_1,FiLE & file_object_2){
    if(file_object_1.getSize()==file_object_2.getSize() && file_object_1.getLocation()==file_object_2.getLocation() ){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    FiLE *ptr1,*ptr2,*ptr3;
    PDF pdf(1000,"RAM","2/2/22","6/3/22");
    ptr1=&pdf;
    ASCII ascii(5024,"ROM","22/7/23","3/10/50");
    ptr2=&ascii;
    PS ps(1024,"ROM","22/7/1999","3/10/2000");   
    ptr3=&ps;
    ptr1->print();
    ptr2->print();
    ptr3->print();
    cout<<pdf*ascii<<pdf*pdf<<ascii*ps<<pdf*ps;
}*/


/*
//QUESTION # 7
//done
#include<iostream>
#include<string>
using namespace std;

class Car {
protected:
    int speed;
    double regularPrice;
    string color;

public:
    Car() {}
    Car(int a, double b, string c) {
        speed = a;
        regularPrice = b;
        color = c;
    }

    int getSpeed() {
        return speed;
    }

    void setSpeed(int speed) {
        this->speed = speed;
    }

    double getRegularPrice() {
        return regularPrice;
    }

    void setRegularPrice(double regularPrice) {
        this->regularPrice = regularPrice;
    }

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }

    virtual double getSalePrice() = 0;
};

class Truck : public Car {
private:
    int weight;

public:
    Truck(int a, double b, string c, int d) : Car(a, b, c) {
        weight = d;
    }

    int getWeight() {
        return weight;
    }

    void setWeight(int weight) {
        this->weight = weight;
    }

    double getSalePrice() {
        if (weight > 2000) {
            return (getRegularPrice() - (0.1 * getRegularPrice()));
        } else {
            return (getRegularPrice() - (0.2 * getRegularPrice()));
        }
    }
};

class Ford : public Car {
private:
    int year;
    int manufacturerDiscount;

public:
    Ford(int a, double b, string c, int d, int e) : Car(a, b, c) {
        year = d;
        manufacturerDiscount = e;
    }

    int getYear() {
        return year;
    }

    void setYear(int year) {
        this->year = year;
    }

    int getManufacturerDiscount() {
        return manufacturerDiscount;
    }

    void setManufacturerDiscount(int manufacturerDiscount) {
        this->manufacturerDiscount = manufacturerDiscount;
    }

    double getSalePrice() {
        return (getRegularPrice() - manufacturerDiscount);
    }
};

class Sedan : public Car {
private:
    int length;

public:
    Sedan(int a, double b, string c, int d) : Car(a, b, c) {
        length = d;
    }

    int getLength() {
        return length;
    }

    void setLength(int length) {
        this->length = length;
    }

    double getSalePrice() {
        if (length > 20) {
            return (getRegularPrice() - (0.05 * getRegularPrice()));
        } else {
            return (getRegularPrice() - (0.1 * getRegularPrice()));
        }
    }
};

int main() {
    Sedan sedan(200, 20000, "Red", 18);

    Ford ford1(180, 30000, "Blue", 2022, 5000);
    Truck truck(220, 35000, "Black",6000);

    Car* car = nullptr; // Car class is abstract, so we cannot create an instance of it

    cout << "Sale price of Sedan: " << sedan.getSalePrice() << endl;
    cout << "Sale price of Ford1: " << ford1.getSalePrice() << endl;
    cout << "Sale price of Truck: " << truck.getSalePrice() << endl;

    return 0;
}
*/


//QUESTION # 7(FINAL EXAM)
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

class Student {
private:
    int ID;
    string name;
    string gender;
    int quiz1Score;
    int quiz2Score;
    int midtermScore;
    int finalScore;
    int totalScore;

public:
    Student(){}
    Student(int id, const string& n, const string& g, int q1, int q2, int midterm, int final) {
        ID = id;
        name = n;
        gender = g;
        quiz1Score = q1;
        quiz2Score = q2;
        midtermScore = midterm;
        finalScore = final;
        totalScore = q1 + q2 + midterm + final;
    }

    int getID() const {
        return ID;
    }

    const string& getName() const {
        return name;
    }

    const string& getGender() const {
        return gender;
    }

    int getQuiz1Score() const {
        return quiz1Score;
    }

    int getQuiz2Score() const {
        return quiz2Score;
    }

    int getMidtermScore() const {
        return midtermScore;
    }

    int getFinalScore() const {
        return finalScore;
    }

    int getTotalScore() const {
        return totalScore;
    }
};

class StudentRecords {
private:
    static const int MAX_STUDENTS = 20;
    Student students[MAX_STUDENTS];
    int numStudents;

public:
    StudentRecords(){
        numStudents = 0;
    }

    void addStudent(const Student& student) {
        if (numStudents < MAX_STUDENTS) {
            students[numStudents] = student;
            numStudents++;
        } else {
            cout << "Maximum number of students reached." << endl;
        }
    }

    void readRecordsFromFile(const string& filename) {
        ifstream file(filename);
        if (file.is_open()) {
            int id, q1, q2, midterm, final;
            string name, gender;

            while (file >> id >> name >> gender >> q1 >> q2 >> midterm >> final) {
                Student student(id, name, gender, q1, q2, midterm, final);
                addStudent(student);
            }

            file.close();
        } else {
            cout << "Failed to open the file: " << filename << endl;
        }
    }

    void printStudentByID(int id) const {
        for (int i = 0; i < numStudents; i++) {
            if (students[i].getID() == id) {
                cout << "ID: " << students[i].getID() << endl;
                cout << "Name: " << students[i].getName() << endl;
                cout << "Gender: " << students[i].getGender() << endl;
                cout << "Quiz 1 Score: " << students[i].getQuiz1Score() << endl;
                cout << "Quiz 2 Score: " << students[i].getQuiz2Score() << endl;
                cout << "Midterm Score: " << students[i].getMidtermScore() << endl;
                cout << "Final Score: " << students[i].getFinalScore() << endl;
                cout << "Total Score: " << students[i].getTotalScore() << endl;
                return;
            }
        }

        cout << "Student with ID " << id << " not found." << endl;
    }

    string getStudentNameWithMaxMidtermScore() const {
        int maxMidtermScore = students[0].getMidtermScore();
        int maxMidtermIndex = 0;

        for (int i = 1; i < numStudents; i++) {
            if (students[i].getMidtermScore() > maxMidtermScore) {
                maxMidtermScore = students[i].getMidtermScore();
                maxMidtermIndex = i;
            }
        }

        return students[maxMidtermIndex].getName();
    }

    double getAverageFinalScore() const {
        double sum = 0.0;

        for (int i = 0; i < numStudents; i++) {
            sum += students[i].getFinalScore();
        }

        return sum / numStudents;
    }
};

int main() {
    StudentRecords records;
    records.readRecordsFromFile("student_records.txt");

    cout << "Name of the student who scored the maximum score in the mid-term: "
         << records.getStudentNameWithMaxMidtermScore() << endl;

    cout << "Average score of the final exam: " << records.getAverageFinalScore() << endl;

    int searchID;
    cout << "Enter the ID of the student to search: ";
    cin >> searchID;
    records.printStudentByID(searchID);

    return 0;
}

