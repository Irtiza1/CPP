//polymorphism
#include<iostream>

class animal

{
	public:
	virtual void eat(){
		std::cout <<"parent class"<<std::endl;
	}	
	void sleep(){
		std::cout <<"sleep"<<std::ends;
		
	}
	void sleep(int para){
		std::cout <<"sleep1"<<std::ends;
	}
};

class harbivorous: public animal
{
public: 
void eat(){
	std::cout<<"harbivorus"<<std::endl;
}
};

class carnivorous: public animal
{
public: 
void eat(){
	std::cout<<"carnivorous"<<std::endl;
}
};


int main(){
	harbivorous harb_obj;
	harb_obj.eat();
	carnivorous carn_obj;	
	carn_obj.eat();
	animal a;
	a.sleep();
	a.sleep(1);
	return 0;
	
}

