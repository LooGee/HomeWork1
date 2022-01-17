
#include <iostream>

void StringTrimRemove(const char* _Left, char* _Right)
{
    // 말은 좋은데 그래서 코드는?
    // 막쳤든 뭐했던 되게만든놈이 승자다.
    // for while if switch
    // "aaabbbcccddd";

    int j = 0;
    for (int i = 0; 0 != _Left[i]; i++)
    {
        char empty = _Left[i];
        if (empty != ' ')
        {
            _Right[j] = _Left[i];
            j++;
        }
    }
    return;
}

int main()
{
    char Text[10000] = { 0, };
    StringTrimRemove("a d dddd", Text);
    // "aaabbbcccddd"
    printf_s(Text);
}
