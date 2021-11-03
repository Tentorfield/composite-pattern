#include "Add.hpp"
// #include "stdlib.h"

Add::Add(Base* left, Base* right){

       this->str_val = "+";
	// recursively adds the values in that subtree	
        left_val = left->evaluate();
        right_val = right->evaluate();

}

double Add::evaluate(){
	this->val = left_val + right_val;
	return val;
}

string Add::stringify(){
	string op1 = to_string(left_val);
	string op2 = to_string(right_val);

	return (op1 << " " << str_val << " " << op2);
}
