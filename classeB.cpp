class B{
   private:
      float B1;
      int B2;
   public:
      getB1();
      setB1(float valor1);
      getB2();
      setB2(int valor2);
      MB1();
      MB2();
};

B::B(){
  B1 = 0;
  B2 = 0;
}

float B::getB1(){
  return B1;
}

float B::setB1(float valor1){
  B1 = valor1;
}

int B::getB2(){
  return B2;
}

int B::setB2(int valor2){
  B2 = valor2;
}

float B::MB1(){
  cout << B1 << endl;
}

int B::MB2(){
  cout << B2 << endl;
}
