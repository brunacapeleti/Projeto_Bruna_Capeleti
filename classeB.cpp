class B{
   private:
      float B1;
      int B2;
   public:
      float getB1();
      void setB1(float valor1);
      int getB2();
      void setB2(int valor2);
      void MB1();
      void MB2();
      void MB3();
};

B::B(){
  B1 = 0;
  B2 = 0;
}

float B::getB1(){
  return B1;
}

void B::setB1(float valor1){
  B1 = valor1;
}

int B::getB2(){
  return B2;
}

void B::setB2(int valor2){
  B2 = valor2;
}

void B::MB1(){
  cout << B1 << endl;
}

void B::MB2(){
  cout << B2 << endl;
}

void B::MB3(){
    cout << "MB3" << endl;
}
