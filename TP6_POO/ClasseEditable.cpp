#include <iostream>
#include "IEditable.hpp"
using namespace std;
using namespace nsUtil;

namespace {

void contenu (const IEditable & ed) { cout << ed << endl; }
class CA: public IEditable {
    void display(ostream & os) {

    }
};

class CB: public IEditable {
    void display(ostream & os) {

    }
};

void TestClassEditable(void) {
        CA A;
        CB B;
        contenu (A);
        contenu (B);
    }
}

int main() {

    try {
        TestClassEditable();
    }
    catch();
    catch();
    catch();
}
