#ifndef IEDITABLE_H
#define IEDITABLE_H



#include <iostream>
#include <ostream>
#include <string>

#include "CstCodErr.h"
#include "CException.h"

using namespace std;
using namespace nsUtil;

namespace nsUtil {
    class IEditable {
        virtual void display (ostream & os ) = 0;
        virtual ~IEditable(void){}
    public :
        ostream & operator << (ostream & os, const IEditable & editable)
        {
            editable.display (os);
            return os;

        } // operator <<()
    };
}


#endif // IEDITABLE_H
