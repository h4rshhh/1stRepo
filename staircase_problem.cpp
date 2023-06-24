int staircase(int n){
    if(n==0 || n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    int x,y,z;
    x = staircase(n-1);
    y = staircase(n-2);
    z = staircase(n-3);

    return x+y+z;    
}
