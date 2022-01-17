

#include <iostream>
#include <string>

int CountChar(const char* _Count)
{
	int i = 0;
	for (i; 0 != _Count[i]; i++)	
	return i;
}


int CountFirst(const char* _Text,int _Start,const char* _FindStr)
{	
	int CharLen = CountChar(_Text);
	
		char* CpyChar = (char*)_Text;
		char* _Text_S, * _FindStr_S;
		//비어있다면
		if (!*_FindStr)	
			return (char)*_Text;
		//비교 시작위치가 찾아야될 문자보다 뒤라면
		if (CharLen < _Start)
			return NULL;
	
		for (int i = 0; i <= CharLen; i++)
		{
			_Text_S = CpyChar;
			_FindStr_S = (char*)_FindStr;		
			while (*_Text_S && *_FindStr_S && !(*_Text_S - *_FindStr_S))
				_Text_S++, _FindStr_S++;
			if (!*_FindStr_S)
				return i;
			CpyChar++;
		}				
		return NULL;	
}

int main()
{
	{
		int Count = CountFirst("aaa bbb ccc dfasd eee ttt asdfasd", 0, " ttt");
		std::cout << Count << std::endl;
	}
	{
		int Count = CountFirst("aaa bbb ccc dfasd eee ttt asdfasd", 50, "eee");
		std::cout << Count;
	}

	}

