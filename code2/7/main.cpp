#include "Gun.h"
#include "Soldier.h"

void test() {
    Soldier sanduo("xusanduo");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(0);
    sanduo.fire();
}

int main() {
    test();
    return 0;
}
