#include<iostream>
using namespace std;

int* func() {
   int* p = new int(10);
    return p;
}

int main() {
    int* p = func();
    cout << p << endl;
    delete p;
    return 0;
}