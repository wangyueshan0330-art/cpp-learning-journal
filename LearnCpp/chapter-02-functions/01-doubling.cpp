#include <iostream>
using namespace std;
int readNumber()
{
    cout << "Please input your number: ";
    int input{};
    cin >> input;
    return input;
}

int doubleNumber()
{
    return readNumber() * 2;
}

void output()
{
    int result=doubleNumber();
    std::cout << "The result is: " << result << '\n';
}

int main()
{
    output();
    return 0;
}