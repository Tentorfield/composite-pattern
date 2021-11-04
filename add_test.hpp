#ifndef __ADD_TEST_HPP
#define __ADD_TEST_HPP

#include "gtest/gtest.h"
#include "Add.cpp"
#include <string>

TEST(AddTest, AddEvaluationReg){
	Op* op1 = new Op(5);
	Op* op2 = new Op(3);
	Add* test = new Add(op1, op2);
        EXPECT_EQ(test->evaluate(), 8);
}


TEST(AddTest, AddStringDecimalPlusNum){
        Op* op1 = new Op(7.5);
        Op* op2 = new Op(9);
        string result = "7.5 + 9";
	Add* test = new Add(op1, op2);
	EXPECT_EQ(test->stringify(), result);
}


TEST(AddTest, AddEvaluateTwoNeg){
	Op* op1 = new Op(-4);
	Op* op2 = new Op(-4);
	Add* test = new Add(op1, op2);
	EXPECT_EQ(test->evaluate(), -8);
}


TEST(AddTest, AddEvaluateNegAndPosDec){
	Op* op1 = new Op(-6);
	Op* op2 = new Op(2.5);
	Add* test = new Add(op1, op2);
	EXPECT_EQ(test->evaluate(), -3.5);
}


TEST(AddTest, AddStringTwoNegDec){
	Op* op1 = new Op(-7);
	Op* op2 = new Op(-12.5);
	Add* test = new Add(op1, op2);
	string result = "-7 + -12.5";
	EXPECT_EQ(test->stringify(), result);
}


TEST(AddTest, AddStringTwoZeroes){
	Op* op1 = new Op(0.0);
	Op* op2 = new Op(0.0);
	Add* test = new Add(op1, op2);
	string result = "0 + 0";
	EXPECT_EQ(test->stringify(), result);
}

#endif
