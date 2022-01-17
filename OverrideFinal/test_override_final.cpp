//https://www.cnblogs.com/whlook/p/6501918.html

void test_override() {
    class A
    {
        virtual void foo();
    };

    class B : public A
    {
        void foo(); //OK
        virtual void foo(); // OK
        void foo() override; //OK
        virtual void f0o()override;//Error: 父类没有同名的可重载函数
    };
}

void test_final() {
    class Base
    {
        virtual void foo();
    };

    class A : Base
    {
        void foo() final; // foo 被override并且是最后一个override，在其子类中不可以重写
        void bar() final; // Error: 父类中没有 bar虚函数可以被重写或final
    };

    class B final : A // 指明B是不可以被继承的
    {
        void foo() override; // Error: 在A中已经被final了
    };

    class C : B // Error: B is final
    {
    };
}

int main() {

}
