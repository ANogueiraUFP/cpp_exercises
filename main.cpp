#include <iostream>
#include "exercises.h"
#include "MyClass.h"

using namespace std;

int main() {
    //print_helloworld();
    //test_cons();
    //input();
    //pointers();
    //overload();

    MyClass a;
    a.myNum = 2;
    a.myString = "andre";

    cout << a.myString << "\t" << a.myNum << endl;

    return 0;
}
