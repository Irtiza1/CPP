/*//product through recursion:

#include<iostream>
using namespace std;
int product(int);
int main(){
   int n,x;

   cin>>n;
  x=product(n);
  cout<<"product: "<<x<<endl; 
    return 0;
}

int product(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*product(n-1);
    }
}

*/

/*//Return a value from main indicating that the program terminated successfully.
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    if(n%2==0){
        main();
    }
    else{
        return 0;
    }
    return 0;
}*/


/*//taking sentence in form of string as input

#include<iostream>
#include<string>
using namespace std;

class book{
public:
    void displaymessage(string nameofcourse){
        cout<<"welcome to the grade book! "<<nameofcourse<<endl;
    }
};

int main(){
    string nameofcourse;
    book mybook;

    cout<<"PLEASE ENTER THE COURSE NAME: "<<endl;
    getline(cin,nameofcourse);
    cout<<endl;



    mybook.displaymessage(nameofcourse);


}
*/

/*
//getters &setters
#include<iostream>
#include<string>
#include "gradebook"
using namespace std;


int main(){
GradeBook gradeBook1( "CS101 Introduction to C++ Programming" );
GradeBook gradeBook2( "CS102 Data Structures in C++" );
cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
<< "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
<< endl;
    return 0;
}   */


/*
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook
using namespace std;
// constructor initializes courseName with string supplied as argument
GradeBook::GradeBook( string name )
{
setCourseName( name ); // call set function to initialize courseName
} // end GradeBook constructor
// function to set the course name
void GradeBook::setCourseName( string name )
{
courseName = name; // store the course name in the object
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
} // end function displayMessage
*/

