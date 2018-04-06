#include <iostream>
#include <iomanip>
#include <exception>
#include <string>
#include "exception.h"

using namespace std;
using namespace nsUtil;

namespace {

void TestException() {
    string Libelle;
    unsigned CErr;
    for ( ; ; ) {
        cout << "Entrer un libelle : ";
        getline (cin, Libelle);
        if (cin.fail())
            return;
        cout << "Entrer un code erreur : ";
        cin >> CErr;
        CException Cex (Libelle, CErr);
        Cex.display();
    }
}
}

int main() {
    TestException();
    return 0;
}
