#include <iostream>
using namespace std;

class Fraction{
    private:
    int numerator;
    int denominator;

    public:
    Fraction(int numerator , int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }

    void print(){
        cout<<this -> numerator<<"/"<<this -> denominator;
    }

    void simplify(){
        int gcd = 1;
        int var = min(this -> numerator, this -> denominator);
        for(int i = 2;i<=var;i++){
            if(this -> numerator%i == 0 && this -> denominator%i ==0){
                gcd = i;
            }
        }
        this -> numerator /= gcd;
        this ->denominator /= gcd;
    }

    void plus(Fraction f2){
        int lcm = this -> denominator*f2.denominator;
        int x = lcm/this -> denominator;
        int y = lcm/f2.denominator;

        int num = (x*this -> numerator) + (y*f2.numerator);
        this -> numerator = num;
        this -> denominator = lcm;   

        simplify();
    }

    void multiply(Fraction f2){
        this -> numerator *= f2.numerator;
        this -> denominator *= f2.denominator;

        simplify();
    }


};

int main(){
    Fraction f1(6,11);
    Fraction f2(3,11);

    int choice;
    cout<<"Enter 1 for Addition or Enter 2 for Multiplication"<<endl;
    cin>>choice;

    (choice == 1)? f1.plus(f2) : f1.multiply(f2) ;

    f1.print();

    return 0;
}
