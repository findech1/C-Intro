#include <iostream>// Header file for input and output
#include <string>
using namespace std;

int main()//main fucntion
{
    // Main code 
	string name;
    cout << "Enter Your Name: \n";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;

    return 0;
}
