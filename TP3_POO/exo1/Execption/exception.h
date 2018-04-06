#ifndef EXECEPTION_H
#define EXECEPTION_H

#include <string>
#include <exception>

using namespace std;

namespace nsUtil {

class CException :
        public exception {

private :
    string Label;
    unsigned CodErr;
public :
    CException(const string & Label, const unsigned & CodErr);
    ~CException();
    virtual const char* what() const noexcept;
    void display() const;
    string getLabel() const;
    unsigned getCodErr() const;
};
}

#endif // EXECEPTION_H
