#include "Add.hpp"
// #include "stdlib.h"

Add::Add(){

       this->str_val = "+";
	// assign operands to children (operand1 = currNode->child1, etc)	
        operand1 = 0;
        operand2 = 0;

}

double Add::evaluate(){
	this->val = operand1 + operand2;
	return val;
}

string Add::stringify(){
	string op1 = to_string(operand1);
	string op2 = to_string(operand2);

	return (op1 << " " << str_val << " " << op2);
}
