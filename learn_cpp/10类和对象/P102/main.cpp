#include<iostream>
using namespace std;

class C1 {
    int m_A;
}

struct C2 {
    int m_A;
}

int main() {
    C1 c1;
    c1.m_A = 10;

    C2 c2;
    c2.m_A = 20;

    return 0;
}
