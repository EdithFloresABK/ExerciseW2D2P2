#include <iostream>
#include <string>

using namespace std;

//function declaration
int cubeNumber(int num);

int main()
{
	cout << "Hello Traveler. What number would you like to cube? ";
	int number;
	cin >> number;
	int cubed = cubeNumber(number);
	cout << "Thank you. The cube of " << number << " is " << cubed <<"." << endl;
	cout << "Please dont be a stranger and come back again!" << endl;

}

//function definition
int cubeNumber(int num) {
	return num * num * num;
}
