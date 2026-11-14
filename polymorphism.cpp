#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};

int main()
{
    Math m;

    cout << m.add(5, 3) << endl;
    cout << m.add(5, 3, 2);

    return 0;
} // if you use the same thing for diffrent forms and differnt purpose then it is polymorphism.
// at home => son, at office => employee, with friends => friend
