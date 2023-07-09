
class ComplexNumbers {
    private:
    int real;
    int imaginary;

    public:
    ComplexNumbers(int real,int imaginary){
        this -> real = real;
        this -> imaginary = imaginary;
    }

    void plus(ComplexNumbers c2){
        this -> real = this -> real + c2.real;
        this -> imaginary = this -> imaginary + c2.imaginary;
    }

    void print(){
        cout<<real<<" + "<<"i"<<imaginary;
    }

    void multiply(ComplexNumbers c2){
        int r = (this->real*c2.real)-(this->imaginary*c2.imaginary);
        int i = (this->real*c2.imaginary)+(this->imaginary*c2.real);
        this -> real = r;
        this -> imaginary = i;
    }

    
};



int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}
 


