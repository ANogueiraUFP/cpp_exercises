//
// Created by Andre Nogueira on 24/03/2022.
//
#include <iostream>
#include "exercises.h"

using namespace std;

void print_helloworld() {

    cout << "Hello World" << endl;
    cout << "I'm learning c++" << endl;

}

void test_cons() {
    const int a = 10;

    /**
     * Como a variavel em cima foi declarada const
     * nao pode ser alterada, é como uma macro em c
     * Descomentado abaixo da um erro de compilação
     */
    //a = 15;
}

void input() {
    int x = 0;

    cout << "Insira um numero" << endl;
    cin >> x;

    cout << "O numero que inseriu foi:" << x << endl;

}

void pointers() {

    string food = "Pizza";  // A food variable of type string
    string *ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
    cout << food << "\n";

// Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    string foodd = "Pizza";
    string *ptrr = &foodd;

// Output the value of food (Pizza)
    cout << foodd << "\n";

// Output the memory address of food (0x6dfed4)
    cout << &foodd << "\n";

// Access the memory address of food and output its value (Pizza)
    cout << *ptrr << "\n";

// Change the value of the pointer
    *ptrr = "Hamburger";

// Output the new value of the pointer (Hamburger)
    cout << *ptrr << "\n";

// Output the new value of the food variable (Hamburger)
    cout << foodd << "\n";
}

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

void overload() {

    int num1 = plusFunc(2, 3);

    cout << "Overload with integers: " << num1 << endl;

    double num2 = plusFunc(2.3, 3.5);

    cout << "Overload with doubles and same function signature: " << num2 << endl;

}