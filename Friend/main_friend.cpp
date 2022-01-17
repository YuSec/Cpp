#include <iostream>

class A {
public:
    A(int a);
    friend class B;
    friend int friend_func(A &a);
private:
    int a_;
};

int friend_func(A &a) {
    return a.a_;
}

A::A(int a) :
    a_(a) {

}

class B
{
public:
    B();
    int get(A &a);

};

B::B()
{
}

int B::get(A &a) {
    return a.a_;
}

int main() {
    A a(3);
    B b;
    std::cout << b.get(a) << std::endl;
    std::cout << friend_func(a) << std::endl;
}
