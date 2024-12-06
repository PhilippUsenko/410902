#include <iostream>
#include <string>
using namespace std;
int main()
{
    
    string sentence = "";
    getline(cin, sentence);
    int firstDotNum = -1;
    int secondDotNum = -1;
    bool isFirstDot = false;
    bool isSecondDot = false;
    int count = 0;
    for(const char symbol:sentence)
    {
        if (isFirstDot == false && symbol == '.')
        {
            isFirstDot = true;
            firstDotNum = count;
        }
        else if (isSecondDot == false && symbol == '.')
        {
            isSecondDot = true;
            secondDotNum = count;
            break;
        }
        count ++;
    }
    if (isFirstDot && isSecondDot)
    {
        cout << sentence.substr(firstDotNum + 1, secondDotNum - firstDotNum - 1);
    }
    else
    {
        cout << sentence;
    }
}