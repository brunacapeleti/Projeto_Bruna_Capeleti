class A{
   private:
      float A1;
      int A2;
   public:
      float getA1();
      void setA1(float valor1);
      int getA2();
      void setA2(int valor2);
      void MA1();
      void MA2();
};

A::A(){
  A1 = 0;
  A2 = 0;
}

float A::getA1(){
  return A1;
}

void A::setA1(float valor1){
  A1 = valor1;
}

int A::getA2(){
  return A2;
}

void A::setA2(int valor2){
  A2 = valor2;
}

void A::MA1(){
  cout << A1 << endl;
}

void A::MA2(){
  cout << A2 << endl;
}






