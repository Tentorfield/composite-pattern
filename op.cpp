#include "op.hpp"
#include "stdlib.h"
#include <cstddef> 

        Op::Op(double value){
		val = value;
	}

        double Op::evaluate(){
  		return val;
	}

        string Op::stringify(){
		string_val = to_string(val);
		string Zero = "0";
		string Dot = ".";
		size_t found_Zero = string_val.find_last_not_of(Zero);
		size_t found_Dot = string_val.find_last_not_of(Dot);
      		string_val.erase(found_Zero + 1, string::npos);
      		string_val.erase(found_Dot + 1, string::npos); 
	        return string_val; 	
	}
