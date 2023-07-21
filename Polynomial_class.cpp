class Polynomial{
    public:

    int *degCoeff;
    int capacity;    

    Polynomial(){
        capacity = 5;
        degCoeff = new int[capacity];
        std::fill_n(degCoeff, capacity, 0);
    }
    
    //Polynomial p2(p1);
    Polynomial(const Polynomial &p1){
        this -> capacity = p1.capacity;
        this ->degCoeff = new int[p1.capacity];
        for(int i = 0;i < capacity;i++){
            this -> degCoeff[i] = p1.degCoeff[i];
        }

    }

    void setCoefficient(int degree, int coeff){
        while(degree>=capacity){
            int *newData = new int[capacity*2];
            std::fill_n(newData, capacity*2, 0);
            for(int i = 0;i<capacity;i++){
                newData[i] = degCoeff[i];
            }
            delete [] degCoeff;
            degCoeff = newData;
            capacity *=2;            
        }
        degCoeff[degree] = coeff;        
    }

    void print(){
        for(int i = 0;i < capacity;i++){
            if(degCoeff[i]==0){
                continue;
            }
            cout<<degCoeff[i]<<"x"<<i<<" ";
        }
        cout<<endl;
    }

    void operator=(Polynomial const &p2){
        int *var = new int[p2.capacity];
        std::fill_n(var, p2.capacity, 0);
        for(int i = 0;i < p2.capacity; i++){
            var[i] = p2.degCoeff[i];
        }
        this -> degCoeff = var;
        this -> capacity = p2.capacity;
        
    }
    

   Polynomial operator+(Polynomial const &p2){
        Polynomial p;
        int max;
        int min;
        if(capacity > p2.capacity){
            max = capacity;
            min = p2.capacity;
            for(int i = 0;i < min;i++){
                p.setCoefficient(i, degCoeff[i]+p2.degCoeff[i]);
            }
            for(int i = min; i < max;i++){
                p.setCoefficient(i, degCoeff[i]);
            }
        }
        else{
            max = p2.capacity;
            min = capacity;
            for(int i = 0; i < min;i++){
                p.setCoefficient(i, degCoeff[i]+p2.degCoeff[i]);                
            }
            for(int i = min; i < max ;i++){
                p.setCoefficient(i, p2.degCoeff[i]);
            }
        }
        p.capacity = max;

        return p;
    }

    Polynomial operator-(Polynomial const &p2){
        Polynomial p;
        int max;
        int min;
        if(capacity>p2.capacity){
            max = capacity;
            min = p2.capacity;
            for(int i = 0; i < min; i++){
                p.setCoefficient(i,degCoeff[i]-p2.degCoeff[i]);
            }
            for(int i = min; i < max;i++){
                p.setCoefficient(i,degCoeff[i]);
            }
        }
        else{
            max = p2.capacity;
            min = capacity;
            for(int i = 0; i < min;i++){
                p.setCoefficient(i,degCoeff[i]-p2.degCoeff[i]);

            }
            for(int i = min; i < max;i++){
                p.setCoefficient(i,degCoeff[i]*(-1));
            }
        }
        p.capacity = max;
        return p;

    }

    Polynomial operator*(Polynomial const &p2){
        Polynomial result;
        int newCapacity = this -> capacity + p2.capacity;
        result.capacity = newCapacity;
        result.degCoeff = new int [newCapacity];
        std::fill_n(result.degCoeff, result.capacity, 0);
       

        for(int i = 0; i < this -> capacity; i++){
            for(int j = 0; j < p2.capacity;j++){
                result.degCoeff[i+j] += (p2.degCoeff[j])*( this -> degCoeff[i]);
            }
        }
        return result;

    }

};
