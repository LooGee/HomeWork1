// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{

private:
    int num1, num2;
public:   
    MyInt(int num1, int num2) : num1(num1), num2(num2) { }


    MyInt operator++()
    {
        num1 += 1;
        num2 += 1;
        return *this;
    }
    MyInt operator++(int)
    {
        MyInt temp(*this);
        num1 += 1;
        num2 += 1;
        return temp;
    }

    void show()
    {
        std::cout << num1 << " , " << num2 << std::endl;
    }
  };

int main()
{
    MyInt myint(1, 11);
    MyInt MyIntOperator1 = myint.operator++(); 

    myint.show();
    MyIntOperator1.show();
    std::cout << std::endl;

    MyIntOperator1 = ++myint;
    myint.show();
    MyIntOperator1.show();
    std::cout << std::endl;

    MyIntOperator1 = myint++;
    myint.show();
    MyIntOperator1.show();
}
