/*
#include<iostream>
#include <string> // program uses C++ standard string class
using namespace std;
// GradeBook class definition
class GradeBook
{
public:
GradeBook( string ); // constructor that initializes a GradeBook object
void setCourseName( string ); // function that sets the course name
string getCourseName(); // function that gets the course name
void displayMessage(); // function that displays a welcome message
private:
string courseName; // course name for this GradeBook
};

GradeBook::GradeBook( string name )
{
setCourseName( name ); // validate and store courseName
} // end GradeBook constructor
// function that sets the course name;
// ensures that the course name has at most 25 characters



void GradeBook::setCourseName( string name )
{
if ( name.length() <= 25 ) // if name has 25 or fewer characters
courseName = name; // store the course name in the object
if ( name.length() > 25 ) // if name has more than 25 characters
{
// set courseName to first 25 characters of parameter name
courseName = name.substr( 0, 25 ); // start at 0, length of 25
cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
<< "Limiting courseName to first 25 characters.\n" << endl;
} // end if
} // end function setCourseName


// function to get the course name
string GradeBook::getCourseName()
{
return courseName; // return object's courseName
} // end function getCourseName
// display a welcome message to the GradeBook user
void GradeBook::displayMessage()
{
// call getCourseName to get the courseName
cout << "Welcome to the grade book for\n" << getCourseName()
<< "!" << endl;
}

int main()
{
// create two GradeBook objects;
// initial course name of gradeBook1 is too long
GradeBook gradeBook1( "CS101 Introduction to Programming in C++" );
GradeBook gradeBook2( "CS102 C++ Data Structures" );
// display each GradeBook's courseName
cout << "gradeBook1's initial course name is: "
<< gradeBook1.getCourseName()
<< "\ngradeBook2's initial course name is: "
<< gradeBook2.getCourseName() << endl;
// modify myGradeBook's courseName (with a valid-length string)
gradeBook1.setCourseName( "CS101 C++ Programming" );
// display each GradeBook's courseName
cout << "\ngradeBook1's course name is: "
<< gradeBook1.getCourseName()
<< "\ngradeBook2's course name is: "
<< gradeBook2.getCourseName() << endl;
} */


#include<iostream>
#include<string>
using namespace std;
class book{
    private:
    string name;
    public:
    book(string x){
        set_Name(x);
    }

    void set_Name(string z){
         if(z.length()<25){
            cout<<"string in less then 25"<<endl;
            name=z;
        }
        else{
            if(z.length()>25){
            cout<<"string in greater then 25"<<endl;
            name=z.substr(0,25);
            }
        }
    }

    string get_Name(){
        return name;
    }

    void display(){
       cout<<get_Name()<<endl;
    }

};

int main(){
    book b1("welcome the c++ and start learning oop is of great fun");
    b1.display();
    return 0;
}