class A{
   private:
      float A1;
      int A2;
   public:
      getA1();
      setA1(float valor1);
      getA2();
      setA2(int valor2);
      MA1();
      MA2();
};

A::A(){
  A1 = 0;
  A2 = 0;
}

float A::getA1(){
  return A1;
}

float A::setA1(float valor1){
  A1 = valor1;
}

int A::getA2(){
  return A2;
}

int A::setA2(int valor2){
  A2 = valor2;
}

float A::MA1(){
  cout << A1 << endl;
}

int A::MA2(){
  cout << A2 << endl;
}






