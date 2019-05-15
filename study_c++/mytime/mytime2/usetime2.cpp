#include <iostream>
#include "mytime2.h"

int main()
{
    using std::cout;
    using std::endl;
    Time coding(4, 40);
    Time fixing(2, 55);
    Time total;
    Time diff;
    Time adjusted;

    cout << "Coding time = ";
    coding.Show();
    cout << endl;

    cout << "Fixing time = ";
    fixing.Show();
    cout << endl;

    total = coding + fixing;
    cout << "coding + fixing time = ";
    total.Show();
    cout << endl;

	diff = coding - fixing;
    cout << "coding time - fixing time = ";
	diff.Show();
	cout << endl;
	
	adjusted = total * 1.5;
	cout << "adjusted work time = ";
	adjusted.Show();
	cout << endl;

    return 0;
}
