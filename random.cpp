#include <cstdlib>
#include <iostream>
using namespace std;

int main() 
{
    srand(time(0));
    int num1 = rand() % (100 - 1 + 1) + 1;
    int num2 = rand() % (100 - 1 + 1) + 1;
    int num3 = rand() % (100 - 1 + 1) + 1;

    /*int greatestNum = num1;
    int middleNum = num2;
    int smallestNum = num3;  
    */

    if (num2 > num3 && !(num2 > num1))
    {
        cout << num1 << "->" << num2 << "->" << num3 << "\n";
    }
    else if (num1 > num3 && !(num1 > num2))
    {
        cout << num2 << "->" << num1 << "->" << num3 << "\n";
    }
    else if (num3 > num1 && !(num3 > num2))
    {
        cout << num2 << "->" << num3 << "->" << num1 << "\n";
    }
    else if (num2 > num1 && !(num2 > num3))
    {
        cout << num3 << "->" << num2 << "->" << num1 << "\n";
    }
    else if (num1 > num2 && !(num1 > num3))
    {
        cout << num3 << "->" << num1 << "->" << num2 << "\n";
    }
    else
    {
        cout << num1 << "->" << num3 << "->" << num2 << "\n";
    }
}
