#include <iostream>
#include <cmath>

int main()
{
	using namespace std;

	double area;
	cout << "Enter the floor area, in aquare feet, or you home: ";
	cin >> area;
	double side;
	side = sqrt(area);
	cout << "this is the equivalent of a aquare " << side
		<< " feet to the side." << endl;
	cout << "How fasinating!" << endl;
	return 0;
}
