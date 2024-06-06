/*//week 2 class assignment
//task 2
#include<iostream>
#include<string>
using namespace std;
class Stock{
    private:
    char symbol;
    string name;
    float currentPrice;
    float previousClosingPrice;
   
    public:
    void setSymbol(char a){
        symbol=a;
        cout<<symbol<<endl;
    }
    void setCurrentPrice(float p){
        currentPrice=p;
        cout<<currentPrice<<endl;
    }
    void setPreviousClosingPrice(float c){
        previousClosingPrice=c;
        cout<<previousClosingPrice<<endl;
    }
    void setName(string n){
        name=n;
        cout<<name<<endl;
    }

    float getPreviousClosingPrice(){
        return previousClosingPrice;
    }
    float getCurrentPrice(){
        return currentPrice;
    }


    float getChangePercent(){
        return (currentPrice-previousClosingPrice);
    }

};

int main(){
    Stock s;
    s.setSymbol('&');
    s.setName("Irtiza");
    s.setPreviousClosingPrice(23.5);
    s.setCurrentPrice(50.5);
    cout<<s.getChangePercent()<<endl;
    return 0;
}*/

//task 1
#include<iostream>
    