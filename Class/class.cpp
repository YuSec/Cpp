#include <iostream>

class CMember
{
public:
    CMember()
    {
        std::cout << "CMember constructor 1" << std::endl;
        cmember = 0;
    }
    CMember(CMember& obj)
    {
        std::cout << "CMember copy constructor" << std::endl;
    }
    CMember(int _cmember)
    {
        std::cout << "CMember constructor 2" << std::endl;
        cmember = _cmember;
    }

    CMember& operator =(CMember& obj)
    {
        std::cout << "CMember =" << std::endl;
        return *this;
    }

    int cmember;
};

class MClass
{

public:
    MClass(CMember& _cm) :  //注意这里我们用的是引用，如果没有用引用，则会多一次copy构造函数的调用
        cm(_cm)//调用一次构造函数
    {
        //cm = _cm; 调用两次构造函数
    }

    CMember cm;

};

void init_method() {
    CMember c1(1);
    MClass m1(c1);
}

using namespace std;
class Father {
public:
    Father() = default;
    void Father_show1() {
        cout << "调用Father类的public方法：Father_show1" << endl;
    }
protected:
    void Father_show2() {
        cout << "调用Father类的protected方法：Father_show2" << endl;
    }
private:
    void Father_show3() {
        cout << "调用Father类的private方法：Father_show3" << endl;
    }
};

class Son : public Father {
public:
    Son() = default;
    void Son_fun1() {
        cout << "调用Son类的public方法：Son_fun1" << endl;
        Father_show1();
        Father_show2();
        //Father_show3(); //错误：无法调用Father类的private方法
    }
protected:
    void Son_fun2() {
        cout << "调用Son类的protected方法：Son_fun2" << endl;
        Father_show1();
        Father_show2();
        //Father_show3(); //错误：无法调用Father类的private方法
    }
private:
    void Son_fun3() {
        cout << "调用Son类的private方法：Son_fun3" << endl;
        Father_show1();
        Father_show2();
        //Father_show3();//错误：无法调用Father类的private方法
    }
};

void func(Father &f) {
    f.Father_show1();
}

void public_inheritance() {
    Son s;
    s.Son_fun1(); //正确，只能调用对象的public方法
    s.Father_show1();
    std::cout << std::endl;
    func(s);//?
    //s.Son_fun2(); //错误：不能调用对象的protected方法
    //s.Father_show2();
    //s.Son_fun3(); //错误：不能调用对象的private方法
    //s.Father_show3();
}

class AbstractClass {
public:
    AbstractClass() {
        std::cout << "AbstractClass()" << std::endl;
    }
    ~AbstractClass() {
        std::cout << "~AbstractClass()" << std::endl;
    }
protected:
    virtual void myprint() = 0;//pure virtual function
private:
};

class TheClass : public AbstractClass {
public:
    TheClass()
        //: AbstractClass() {//init abstract class function auto
    {
        std::cout << "TheClass()" << std::endl;
    }
    virtual void myprint() override {
        std::cout << "TheClass myprint" << std::endl;
    }
};

void test_abstract_class() {
    //AbstractClass ac;// can not directly instantiate 
    TheClass tc;
    tc.myprint();
}

int main() {
    //init_method();
    //public_inheritance();
    test_abstract_class();
}
