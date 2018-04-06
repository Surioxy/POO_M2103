#include <string>
#include "string.h"
#include <cctype>
using namespace std;
using namespace nsUtil;


String::String()
{

}

String::String(const char *NTCTS):string (NTCTS)
{

}

String::String(const char *NTCTS, size_type size):string (NTCTS, size)
{

}

String::String(const string &S, size_type pos, size_type size):string (S, pos, size)
{

}

String::String(size_type size, char c):string (size, c)
{

}



String & String::toupper(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        (*this)[i] = std::toupper ((*this)[i]);
    return *this;
}

String & String::tolower(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        (*this)[i] = std::tolower ((*this)[i]);
    return *this;
}

bool String::isalpha(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isalpha((*this)[i])== false);
            return false;
        return true;
}

bool String::isdigit(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isdigit((*this)[i])== false);
            return false;
        return true;
}

bool String::isalnum(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isalnum((*this)[i])== false);
            return false;
        return true;
}

bool String::isxdigit(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isxdigit((*this)[i])== false);
            return false;
        return true;
}

bool String::islower(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::islower((*this)[i])== false);
            return false;
        return true;
}

bool String::isupper(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isupper((*this)[i])== false);
            return false;
        return true;
}

bool String::isspace(void)
{
    for (unsigned i=0; i< this -> length(); ++i)
        if(std::isspace((*this)[i]) == false);
            return false;
        return true;
}
