#ifndef STRING_H
#define STRING_H

#include <string>

namespace nsUtil {
class String : public std::string
{
public :
    String ();
    String (const char * NTCTS);
    String (const char * NTCTS, size_type size);
    String (const std::string & S, size_type pos = 0, size_type size = npos);
    String (size_type size, char c);
    String & toupper (void);
    String & tolower (void);
    bool isalpha (void);
    bool isdigit (void);
    bool isalnum (void);
    bool isxdigit (void);
    bool islower (void);
    bool isupper (void);
    bool isspace (void);
};

}

#endif // STRING_H
