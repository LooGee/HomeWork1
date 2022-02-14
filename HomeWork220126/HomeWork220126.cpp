// HomeWork220126.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class MyInt
{

private:
    int num1;
public:   
    MyInt(int num1) : num1(num1) { }


    MyInt& operator++()
    {
        num1 += 1;      
        return *this;
    }
    MyInt operator++(int)
    {
        MyInt temp(*this);
        num1 += 1;    
        return temp;
    }

    void show()
    {
        std::cout << num1 << std::endl;
    }
  };

int main()
{
    MyInt myint(1);
    MyInt MyIntOperator1 = myint.operator++();
    MyInt MyIntOperator2 = myint.operator++(1);

    MyIntOperator1.show();
    MyIntOperator2.show();
    std::cout << std::endl;

    MyIntOperator1++;
    MyIntOperator2++;

    MyIntOperator1.show();
    MyIntOperator2.show();
    std::cout << std::endl;

    ++MyIntOperator1;
        MyIntOperator1.show();
    ++MyIntOperator2;

    MyIntOperator1.show();
    MyIntOperator2.show();
    std::cout << std::endl;


}