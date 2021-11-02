#include "op.hpp"


        Op::Op(double value){
		val = value;
	}

        double Op::evaluate(){
  		return val;
	}

        string Op::stringify(){
		string_val = to_string(val);
	        return string_val; 	
	}

