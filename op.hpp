#ifndef __OP_HPP__
#define __OP_HPP__

#include "../header/base.hpp"

class Op : public Base {
    protected: 
        double val;
	string string_val; 

    public:
        Op(double value) : Base();

        virtual double evaluate();

        virtual std::string stringify();
};

#endif //__OP_HPP__
