#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter you name:\n";
    cin.get(name, ArSize).get();
    cout << "Enter you favorit dassert:\n";
    cin.get(dessert, ArSize).get();
    cout << "I have some deliciout " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
