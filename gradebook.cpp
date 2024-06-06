class book{
string coursename;
public:
    GradeBook( string name )
{
    setCourseName( name ); // call set function to initialize courseName
}

    void setcoursename(string  name){
        coursename=name;
    }


    string getcoursename(){
        return coursename;
    }

    void displaymessage(){
        cout<<"welcome to the grade from "<<getcoursename()<<endl;
    }
};