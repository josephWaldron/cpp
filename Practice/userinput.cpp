#include<iostream>

using namespace std;

int main()
{
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;
    // cout << "You are " << age << " years old" << endl;

    string name;
    cout << "What is your name: ";
    getline(cin, name);
    cout << "Hello " << name;
    return 0;
}
