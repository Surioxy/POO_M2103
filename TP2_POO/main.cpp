#include <duree.h>
#include <utility>

using namespace std;
using namespace nsUtil;
using namespace rel_ops;
/**
 *
 * \file     TestDuree.cpp
 *
 * \authors  M. Laporte, D. Mathieu
 *
 * \date     29/10/2007
 *
 * \version  V1.0
 *
 * \brief    Test des operateurs + et -
 *
 **/
#include <iostream>
#include <iomanip>            // setw()
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

#include "duree.h"

using namespace nsUtil;

#define classdef typedef

namespace
{
void testDuree (void)
{
    Duree d1 (30);
    Duree d2 (40);
    Duree d3 (50);

    cout << boolalpha;
    /*         */
    d1.display ();
    cout << " <  ";
    d2.display ();
    cout << " : " << (d1 <  d2) << '\n';

    d2.display ();
    cout << " <  ";
    d1.display ();
    cout << " : " << (d2 <  d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " >  ";
    d2.display ();
    cout << " : " << (d1 >  d2) << '\n';

    d2.display ();
    cout << " >  ";
    d1.display ();
    cout << " : " << (d2 >  d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " <= ";
    d2.display ();
    cout << " : " << (d1 <= d2) << '\n';

    d2.display ();
    cout << " <= ";
    d1.display ();
    cout << " : " << (d2 <= d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " >= ";
    d2.display ();
    cout << " : " << (d1 >= d2) << '\n';

    d2.display ();
    cout << " >= ";
    d1.display ();
    cout << " : " << (d2 >= d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " == ";
    d2.display ();
    cout << " : " << (d1 == d2) << '\n';

    d2.display ();
    cout << " == ";
    d1.display ();
    cout << " : " << (d2 == d1) << "\n\n";
    /*         */

    /*         */
    d1.display ();
    cout << " == ";
    d3.display ();
    cout << " : " << (d1 == d3) << '\n';
    /*         */

    /*         */
    d1.display ();
    cout << " != ";
    d2.display ();
    cout << " : " << (d1 != d2) << '\n';
    /*         */

    /*         */
    d1.display ();
    cout << " != ";
    d3.display ();
    cout << " : " << (d1 != d3) << '\n';
    /*         */

    cout << noboolalpha;

} // testDuree()

typedef vector<Duree> CVDuree;
const unsigned long long KDureeMax (100);

void InitCVDuree (CVDuree & vD) {
    unsigned taille;
    cin >> taille;
    vD.resize(taille);
    //    for (auto & val : vD)
    //        val = Duree (rand () %KDureeMax);
    for (CVDuree::iterator it (vD.begin());
         it != vD.end(); ++it)
        *it = Duree (rand () % KDureeMax);
}

void ShowCVDuree (const CVDuree & vD) {
    for (CVDuree::const_iterator it (vD.begin());
         it != vD.end(); ++it)
        it->display();
    cout << string (75, '-') << endl;
}

void testFind(const CVDuree & vD) {
    unsigned d;
    cin >> d;
    CVDuree::const_iterator it = (find (vD.begin (), vD.end(), Duree (d)));
    if(it == vD.end())
        cout << "pas trouve" << endl;
    else
        cout << "trouver" << endl << it - vD.begin() << endl;
}

} // namespace anonyme

int main (void) {
    std::srand(std::time(nullptr));
    CVDuree VDuree;
    InitCVDuree(VDuree);
    ShowCVDuree(VDuree);
    sort (VDuree.begin(), VDuree.end());
    ShowCVDuree(VDuree);
    for (unsigned i(0) ; i<5 ; ++i)
        testFind(VDuree);
} // main()

