#include <iostream>

int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter you name:\n";
    cin >> name;
    cout << "Enter you favorit dassert:\n";
    cin >> dessert;
    cout << "I have some deliciout " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
