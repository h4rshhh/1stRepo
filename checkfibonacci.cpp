
bool checkMember(int n){
  if(n==0||n==1){
    return true;
  }
  else{
    int a=0,b=1,c;
    while(c<n){
      c = a + b;
      a = b;
      b = c;      
    }
    if(c==n){
      return true;
    }
    else{
      return false;
    }
  }

}
