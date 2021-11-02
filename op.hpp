#ifndef __OP_HPP__
#define __OP_HPP__

 #include "header/base.hpp"
using namespace std;

class Op : public Base{
    protected: 
        double val;
	string string_val; 

    public:
        Op(double);

        virtual double evaluate();

        virtual string stringify();
};

#endif //__OP_HPP__
