#include<iostream>
using namespace std;

class LivingThing{
    public:
    void breathe(){
        cout<<"I am breathing as a living thing"<<endl;
    }
};
class Animal: virtual public LivingThing{
    public:
    void breathe(){
        cout<<"I am breathing as an animal"<<endl;
    }
};
class Reptile:virtual public LivingThing{
    public:
    void crawl(){
        cout<<"I am breathing as Reptile"<<endl;
    }
};
class Snake:public Animal,public Reptile{};
int main(){
    Snake snake;
    snake.breathe();
    snake.crawl();
    return 0;
}
