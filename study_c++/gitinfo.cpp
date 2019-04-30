#include <iostream>

int main()
{
    using namespace std;

    int carrote;

    cout << "How many carrote do you have" << endl;
    cin >> carrote;
    cout << "Here two more, ";
    carrote += 2;
    cout << "Now you have " << carrote << " carrote" << endl;
    return 0;
}
