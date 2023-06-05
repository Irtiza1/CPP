//function template | class template
#include<iostream>

using namespace std;

//template func

//case 1
/*
template<class X>
X compare(X a,X b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    cout<<compare(2,3); //cout<<compare<int>(2,3);
    cout<<compare(3.44,3.54);//cout<<compare<doubl/float>(2,3)
}*/


/*

//case 2
template<class Y>
void compare(Y a,Y b){
    if((a+b)>10){
        cout<<"you are teenager"<<endl;
    }
    else{
        cout<<"your are child"<<endl;
    }
}
//case 3
template<class Y>
int Compare(Y a,Y b){
    if((a+b)>10){
        cout<<"you are teenager ";
        return a+b;
    }
    else{
        cout<<"your are child ";
        return a+b;
    }
}

//case 4
template<class T>
T COMPARE(int a,int b){
    return a/b;
}

//case 5
template<class T>
void SWAP(T &a,T& b){
    T temp;
    temp=a;
    a=b;
    b=temp;
}

//template with two generic types
template<class T1,class T2>
void SWITCH(T1 &a,T2 &b){
    T1 temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    //case2
    compare(2,3); //compare<int>(2,3);
    compare(4.5,6.6);//compare<float/double>(4.5,6.6);
    cout<<endl;

    //case3
    cout<<Compare<int>(2,3);  //cout<<Compare(2,3);  
    cout<<endl;
    cout<<Compare<double>(4.5,6.6);//cout<<Compare(4.5,6.6);
    cout<<endl;

    //case4(in this case i need to tell type template b/c it's manadatory)
    cout<<COMPARE<double>(2,3);
    cout<<endl;
    cout<<COMPARE<float>(4,4);
    cout<<endl;
    cout<<COMPARE<int>(3,4);
    cout<<endl;

    int a=4,b=9;
    SWAP<int>(a,b);
    cout<<a<<" "<<b<<endl;

    //case 5 (in this template we are having to diff types and by using this temp we are switcing their data type) 
    int x=66;
    char ch='A';

    SWITCH<int,char>(x,ch);
    cout<<x<<" "<<ch<<endl;
}
*/


/*
//specialized Template
template<class T>
void fun(T a){
    cout<<"normal func"<<endl;
    cout<<"you printed: "<<a<<endl;
}
template<>
void fun(int a){
    cout<<"specialized func"<<endl;
    cout<<"you printed: "<<a<<endl;
}


//template overloading
template<class T,class u>
void fun(T a,u b){
    cout<<"overloaded template"<<endl;
    cout<<"first class: "<<a;
    cout<<" second class: "<<b<<endl;
}

template<>
void fun(char a){
    cout<<"overloaded template"<<endl;
    cout<<"class: "<<a;
}

///genric and with non gensric type func
template<class X>
void dual(X a,int b){
    cout<<"\ngenric: "<<a<<endl;
    cout<<"non genric: "<<b<<endl;
}

int main(){
    fun<char>('a');
    fun<int>(100);

    fun<int,char>(10,'D');
    fun('C');//or fun<char>('A');

    dual<string>("irtiza",1);
}*/
template<class T>
class AryList{
    private:
    int capacity;
    T *arrlist;
    public:
    AryList(int capacity){
        this->capacity=capacity;
        arrlist=new T[capacity];
    }


    void AddNum(int index, T data){
        if(index>=0&&index<=capacity-1){
            arrlist[index]=data;
        }
        else{
            cout<<"index not valid! "<<endl;
        }
    }

    void ViewNum(int index,T& data){
        if(index>=0&&index<=capacity-1){
          data=arrlist[index];
        }
        else{
            cout<<"index not valid! "<<endl;
        }
    }

    void ViewList(){
        for(int i=0;i<capacity;i++){
            cout<<arrlist[i]<<" ";
        }
    }
};
int main(){
    //task1 is to make  template<class t,class t1> 
    //task2 is to male  template<class t,int (specific type) data_type>
    int data;
    AryList<int> list(4);
    list.AddNum(0,1);
    list.AddNum(1,2);
    list.AddNum(2,3);
    list.AddNum(3,4);
    list.ViewList();
    cout<<endl;
    list.ViewNum(2,data);
    cout<<data;
    cout<<endl;
    
    float odo;
    AryList<float>list1(4);
    list1.AddNum(0,1.2);
    list1.AddNum(1,2.5);
    list1.AddNum(2,3.8);
    list1.AddNum(3,4.9);
    list1.ViewList();
    cout<<endl;
    list1.ViewNum(2,odo);
    cout<<odo<<endl;

    string line;
    AryList<string>list2(4);
    list2.AddNum(0,"irtiza");
    list2.AddNum(1,"subhan");
    list2.AddNum(2,"sadiq");
    list2.AddNum(3,"ahmed");
    list2.ViewList();
    cout<<endl;
    list2.ViewNum(2,line);
    cout<<line;

}
