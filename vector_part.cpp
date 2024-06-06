//vector in oop
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    class MyVector{
        vector<int> data;
        public:
        void addElement(int element){
            data.push_back(element);
        }

        void removeElement(int index){
            if(index>=0&&index<data.size()){
                data.erase(data.begin()+index);
            }
        }

        int getElement(int index){
            if(index>=0&&index<data.size()){
                return data[index];
            }
            return -1;
        }

        int getSize(){
            return data.size();
        }
    };

    int main(){
        MyVector myvector;
        myvector.addElement(10);
        myvector.addElement(100);
        myvector.addElement(20);

        cout<<"size: "<<myvector.getSize()<<endl;
        cout<<"element at index 1: "<<myvector.getElement(1)<<endl;

        myvector.removeElement(0);
        cout<<"size: "<<myvector.getSize()<<endl;

        for(int i=0; i<myvector.getSize(); i++){
            cout<<myvector.getElement(i)<<" ";
        }

        

    return 0;
    }
/*
//Vector with 2D array
#include<iostream>
#include<vector>
using namespace std;
class Vector2D{
    private:
    double x;
    double y;
    public:
    Vector2D(double xValue,double yValue):x(xValue),y(yValue){}
    Vector2D operator +(const Vector2D& other)const{
        return Vector2D(x+other.x,y+other.y);
    }

    Vector2D operator -(const Vector2D& other)const{
        return  Vector2D(x-other.x,y-other.y);
    }

    void Print(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    
};


int main(){
    Vector2D v1(2.5,34);
    Vector2D v2(3,35);

    Vector2D sum=v1+v2;
    Vector2D diff=v2-v1;

    sum.Print();
    diff.Print();
    
}*/