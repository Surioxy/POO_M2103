#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

namespace {
    class Duree {
    private :
        unsigned long long myDuree;
        unsigned long long mySecond;
        unsigned long long myMinutes;
        unsigned long long myHours;
        unsigned long long myDays;
        void normaliser ()noexcept;

    public :
        Duree (const unsigned & d = 0) noexcept;
        void display () const;
        void inc (const unsigned long long & delta) noexcept;
        void dec (const unsigned long long & delta) noexcept;
        unsigned long long getDuree() const noexcept;
    }; //Duree

//    unsigned long long Duree::getDuree() const noexcept{
//        return myDuree;
//    }

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

//    void Duree::dec(const unsigned long long & delta) noexcept{

//        if(delta > myDuree) return;
//        myDuree = myDuree-delta;
//        normaliser();
//    }

}



int main()
{
    Duree D (1);
    D.display();
    while (true) {
        sleep(1);
        D.inc(1);
        D.display();

    }
    return 0;
}
