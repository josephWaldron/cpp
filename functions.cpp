#include<iostream>
#include<string>

using namespace std;

string sayHi(string name, int age){
    string age1 = to_string(age);
    return "hello " + name + " you are " + age1;
}

void epic(){
    cout << "Epic";
}

int main()
{
    cout << sayHi("Joseph", 20) << endl;
    epic();
    return 0;
}