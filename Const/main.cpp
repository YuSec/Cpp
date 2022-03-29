#include <map>

class A
{
public:
    A();
    ~A();
    int get_int_var() const;
    double get_double_var();

private:
    int int_var_;
    double double_var_;
};

A::A() :int_var_(1), double_var_(1.1)
{
}

A::~A()
{
}

int A::get_int_var() const
{
    return int_var_;
}

double A::get_double_var()
{
    return ++double_var_;
}

void test_const_map() {
    std::map<int, int> test;
    test.insert(std::make_pair(1, 3));
    const std::map<int, int> test_const;
    test = test_const;
    //auto it = test_const[1];//can not use [] for const variable
}

int main() {
    test_const_map();
    A a;
    int int_var;
    double double_var;

    int_var = a.get_int_var();
    double_var = a.get_double_var();
}
