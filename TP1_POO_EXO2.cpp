#include <iostream>
#include <iomanip>
#include <unistd.h>
using namespace std;

namespace {
    class Module;
    class Prof {
    private :
        string myName;
    public :
        void display() const;
        string getName();
        void setName (string Name);
        void addModule (Module module);
    }; //Prof

    class Module {
    private :
        string myName;
    public :
        void display() const;
        string getName();
        void setName (string Name);
        void addProf (Prof prof)
        {

        }

    }; //Module
}


void Prof::display() const
{

}

void Prof::setName(string Name)
{

}

void Prof::addModule(Module module)
{

}

void Module::display() const
{

}

void Module::setName(string Name)
{

}


int main()
{
    return 0;
}
