#ifndef __BASE_HPP__
#define __BASE_HPP__

#include <string>
using namespace std;

class Base {
    protected:
	double val;
	string str_val;
        // Node* root;
        // Node* left;
        // Node* right;
        
    public:
        /* Constructors */
        Base() { 
	   // root = nullptr;
	}

        virtual ~Base() {
	   // delete left;
	   // delete right;
	}
    
        /* Pure Virtual Functions */
        virtual double evaluate() = 0;
        virtual std::string stringify() = 0;

};

#endif //__BASE_HPP__
