#include <iostream>
#include <string>
#include "exception.h"

using namespace std;
using namespace nsUtil;

string CException::getLabel() const
{
    return Label;
}

unsigned CException::getCodErr() const
{
    return CodErr;
}

CException::CException(const string &Label_, const unsigned &CodErr_)
{
    Label = Label_;
    CodErr = CodErr_;
}

CException::~CException()
{

}

const char *nsUtil::CException::what() const noexcept
{
    return (Label.c_str());
}

void nsUtil::CException::display() const
{
    cout << "le libelle est : " << Label << endl
         << "ERREUR : " << CodErr << endl;
}
