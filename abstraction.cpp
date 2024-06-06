
//abstraction
#include<iostream>

class Animal{
public: 
	virtual void eat()=0;
};

class human: public Animal
{
public:
	void eat(){
		std::cout<<"irtiza playing game"<<std::endl;
	}
};


int main(){
	human obj;
	obj.eat();
	return 0;
}
