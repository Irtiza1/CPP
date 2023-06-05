//Array of objects
#include<iostream>
#include<string>
using namespace std;

class Test{
    public:
    int x;
    int y;
    int z;
    char *name;
    char *ptr;
    Test(int x=0,int y=0){
        this->x=x;
        this->y=y;
    }

    Test(int z,char str[]){
        this->z=z;
        name=str;
    }

    Test(char *str,char *str1){
        ptr=str;
        name=str1;
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
    void Print(){
        cout<<z<<endl;
        //for(int j=0;j<sizeof(name)-1;j++){
          //  cout<<name[j];//one way to print
          //    cout<<*(name+j); //sedond way to print
       // }
       cout<<name;
    cout<<endl;
    }

    void Print(int x){
       cout<<ptr;
       cout<<name;
    cout<<endl;
    }

    ~Test(){
         cout<<"deleted";
    }
};

int main(){
    //1st way
 /*   Test t[3]={Test(1,"irtiza"),Test(2,"kashaf"),Test(3,"Hoorain")};

    for(int i=0;i<3;i++){
        t[i].Print();
    }
*/
    //2nd way
 /* Test *ptr_arr[2];
    ptr_arr[0]=new Test("syed","irtiza");
    ptr_arr[1]=new Test("Naa","Maloom");

    for(int i=0;i<3;i++){
        ptr_arr[i]->Print(1);
    }*/

    //3rd way
    Test test[2];
    for(int i=0;i<3;i++){
        test[i].PRINT();
    }
    return 0;
}
