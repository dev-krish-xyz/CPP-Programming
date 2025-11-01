class Base {
public: int a;
protected: int b;
private: int c;
};

class Pub : public Base {
    // a → public
    // b → protected
    // c → not inherited
};

class Prot : protected Base {
    // a → protected
    // b → protected
    // c → not inherited
};

class Priv : private Base {
    // a → private
    // b → private
    // c → not inherited
};
