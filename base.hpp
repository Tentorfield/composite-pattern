#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
using namespace std;

class Base {
    protected:
	double val;
	string str_val;
        
    public:
        /* Constructors */
        Base() { }

        virtual ~Base() {
	   // delete left;
	   // delete right;
	}
    
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;

};

#endif //__BASE_HPP__
