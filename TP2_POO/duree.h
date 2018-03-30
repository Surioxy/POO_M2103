#ifndef DUREE_H
#define DUREE_H

namespace nsUtil{
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
    Duree operator + (const Duree & d) const;
    Duree operator - (const Duree & d) const;
    bool operator < (const Duree & d) const;
    bool operator == (const Duree & d) const;
}; //Duree
}
#endif // DUREE_H



