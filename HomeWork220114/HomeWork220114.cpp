// HomeWork220114.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

void ToUpper(const char* _Left, char* _Right)
{	
	for (int i = 0; 0 != _Left[i] ;i++)
	{
		if (_Left[i] > 96 && _Left[i] < 123)
		{
			_Right[i] = _Left[i] - 32;
		}
		else
		{
			_Right[i] = _Left[i];
		}				
	}
}
void CharChange(char* _Text, char _Prev, char _Next)
{
	std::cout << std::endl;
	for (int i = 0; 0 != _Text[i]; i++)
	{
		if (_Text[i] == _Prev)
			_Text[i] = _Next;
	}		

}
void Cut(const char* _Sorce, int _Start, int _End, char* _Result)
{	
	std::cout << std::endl;
	int num = _End - _Start;

	for (int i = 0; i <= num; i++)
	{
		_Result[i] = _Sorce[_Start + i];
	}
}
int main()
{
	//대문자로 변경하기
	{
		char Text[100] = {};

		ToUpper("12abCcEee", Text);
		//      "12ABCCEEE"
		printf_s(Text);
	}
	
	{
		char Text[100] = "aa, bb, cc, dd";

		CharChange(Text, ',', '|');
		// aa| bb| cc| dd

		printf_s(Text);
	}	
	
	{
		char Text[100] = { };
		Cut("0123456789", 2, 7, Text);
		// "234567"
		printf_s(Text);
	}


}