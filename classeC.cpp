class C{
    private:
    int C1;
    string C2;
    public:
    C();
    void MC1();
    void MC2();
};

C::C(){
    C1 = 0;
    C2 = "";
}

void C::MC1(){
    cout << "MC1" << endl;
}

void C::MC2(){
    cout << "MC2" << endl;
}
