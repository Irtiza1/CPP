#include<iostream>
#include<conio.h>
class account{
private:
int balance;	//instance member variable
static float roi; //static member variable / class variable

public: 
void setbalance(int b){
	balance=b;
	
}

static void setROI(float r){ //static member function (they can be called without object)
	roi=r;
}
};

float account:: roi=3.5f; // declaring static variable out of class;
    /*member ship label*/
    
int main(){
	account a1,a2;
//	account::roi=4.5; this is use when roi is public instead of private
	/*a1.setROI(4.5f);     //when roi is private and the  function is instance function. then to call it without object (setROI(4.5f)) give error */
	
	
	
	 /*scope resolution*/	
	account::setROI(4.5f);
/*classname*/ 	
}