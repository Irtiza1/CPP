//has a relation is (aggregation) which means that class B obj is the attribute of class A then A has a B
//is a relation is the inheritance
//there are two types of Association:
//1- Aggregation (independent)-> in this we create class B pointer/pointer Array as attibute to class A and use to add class B obj in class A
//2- Composition(dependent)-> in this class B obj is attribute class A and we connect it with that constructor of classs A,so when the obj of Class A formed in main then class B obj will also create

//---------------------
//in cler
//compostion&aggregation | (is a | has a) relation
#include<iostream>
#include<string>
using namespace std;
class Instructor;
class Course;

class Course{
Instructor *Ins;
string Cname;

public:
Course(){}
Course(string a,Instructor* ptr){
    Cname=a;
    Ins=ptr;
}
    string getCname()
    {
    return Cname;
    }

    void setCname(string Cname)
    {
    this->Cname = Cname;
    }

    Instructor *getIns()
    {
        return Ins;
    }
};


class Instructor{
    Course *C[5];
    Course *temp[5];
    string Iname;
    int numCrs;

public:
Instructor(){}
Instructor(string a){
    Iname=a;
}
    string getIname()
    {
    return this->Iname;
    }

    void setIname(string Iname)
    {
    this->Iname = Iname;
    }


void AddCourse(Course* crs){
    ///this function add ins to dept
    if(numCrs<5){
        C[numCrs]=crs;
        numCrs++;
        cout<<crs->getCname()<<"has been added!"<<endl;
    }
    else{
        cout<<"course limit exceeds"<<endl;
    }
}

int x=0;
void RemoveCourse(Course* Crs){
    for(int i=0;i<numCrs;i++){
        if(C[i]==Crs){
            cout<<"deleted successfully"<<endl;
            continue;
        }
        else{
            temp[x]=C[i];
            x++;
        }
    }
    numCrs--;
    for(int i=0;i<numCrs;i++){
        C[i]=temp[i];
    }
}

    Course* getC(int i)
    {
        return C[i];
    }

    int getNumCrs()
    {
    return this->numCrs;
    }

};


class Deptarment{
string name;
int numIns;
Instructor *inst[5];
Instructor *temp[5];
public:
Deptarment(){}
Deptarment(string a):name(a),numIns(0){}

void AddInstructor(Instructor* ins){
    ///this function add ins to dept
    if(numIns<5){
        inst[numIns]=ins;
        numIns++;
        cout<<"Ins has been added!"<<endl;
    }
    else{
        cout<<"departement has no vacancy to add INS"<<endl;
    }
}
int x=0;
void RemoveInstructor(Instructor* ins){
    for(int i=0;i<numIns;i++){
        if(inst[i]==ins){
            cout<<"deleted successfully"<<endl;
            continue;
        }
        else{
            temp[x]=inst[i];
            x++;
        }
    }
    numIns--;
    for(int i=0;i<numIns;i++){
        inst[i]=temp[i];
    }
}


void print(){
    cout<<name<<" departement details"<<endl;
    for(int i=0;i<numIns;i++){
        Instructor* instruct= inst[i];
        cout<<instruct->getIname()<<endl;
        
        for(int j=0;j<instruct->getNumCrs();j++){
           cout<<"("<<"Course "<<j+1<<": "<<instruct->getC(j)->getCname()<<")"<<endl;
        }
    }
}


};

int main(){
    Instructor *inst1=new Instructor("irtiza");
    Instructor *inst2=new Instructor("subhan");

    Course* crs1=new Course("OOP",inst1);
    inst1->AddCourse(crs1);
    Course* crs2=new Course("DLD",inst2);
    inst2->AddCourse(crs2);

    Deptarment dept("CS");
    dept.AddInstructor(inst1);
    dept.AddInstructor(inst2);
    dept.print();
    // inst1->RemoveCourse(crs1);
    dept.print();
    delete inst1;
    delete inst2;
    delete crs1;
    delete crs2;

}