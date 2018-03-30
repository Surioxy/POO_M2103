#include <duree.h>
#include <iostream>
#include <iomanip>

using namespace std;
using namespace nsUtil;

void Duree::normaliser() noexcept {
    myDays = myDuree / (60*60*24);
    myHours = (myDuree - myDays * 60 * 60 * 24) / (60*60);
    myMinutes = (myDuree - myDays * 60 * 60 * 24 - myHours * 60 * 60) / (60);
    mySecond = myDuree % 60;
}

Duree::Duree (const unsigned & myDuree_) noexcept :
    myDuree (myDuree_){
    normaliser();
}

void Duree::display() const{
    //0 jour(s)  0 heure(s)  1 minute(s) 40 seconde(s)
    cout << setw (4) << myDays << "jour(s)" <<
            setw (4) << myHours << "heure(s)" <<
            setw (4) << myMinutes << "minute(s)" <<
            setw (4) << mySecond << "seconde(s)" << endl;
}

void Duree::inc(const unsigned long long & delta) noexcept{

    myDuree += delta;
    normaliser();
}

void Duree::dec(const unsigned long long & delta) noexcept{

    if(delta > myDuree) return;
    myDuree = myDuree-delta;
    normaliser();
}

unsigned long long Duree::getDuree() const noexcept{
    return myDuree;
}

Duree Duree::operator +(const Duree &d) const
{
    return Duree (myDuree + d.getDuree());
}

Duree Duree::operator -(const Duree &d) const
{
    if(d.getDuree() >= myDuree)
        return Duree(0);
    else
        return Duree (myDuree - d.getDuree());
    //  return Duree ((d.getDuree() >= myDuree) ?
    //                    0 :
    //                    myDuree - d.getDuree())

}

bool Duree::operator <(const Duree &d) const {
    if (d.getDuree() < myDuree)
        return false;
    else
        return true;
}

bool Duree::operator ==(const Duree &d) const {
    if (d.getDuree() != myDuree)
        return false;
    else
        return true;
}



