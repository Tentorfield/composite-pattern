#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "Pow.cpp"

TEST(PowTest, PowEvaluationBothPos){
   Op* op1 = new Op(2);
   Op* op2 = new Op(3);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 8);
}

TEST(PowTest, PowEvaluateNegExp) {
   Op* op1 = new Op(2);
   Op* op2 = new Op(-3);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 0.125);
}

TEST(PowTest, PowEvaluateBothNeg) {
   Op* op1 = new Op(-2);
   Op* op2 = new Op(-3);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), -0.125);
}

TEST(PowTest, PowEvaluateDecBase){
   Op* op1 = new Op(2.5);
   Op* op2 = new Op(3);
   Pow* test = new Pow(op1, op2);
   EXPECT_EQ(test->evaluate(), 15.625);
}

TEST(PowTest, PowStringTwoPos) {
   Op* op1 = new Op(3);
   Op* op2 = new Op(4);
   Pow* test = new Pow(op1, op2);
   std::string result = "3 ^ 4";
   EXPECT_EQ(test->stringify(), result);
}

TEST(PowTest, PowStringDec){
   Op* op1 = new Op(3.5);
   Op* op2 = new Op(4);
   Pow* test = new Pow(op1, op2);
   std::string result = "3.5 ^ 4";
   EXPECT_EQ(test->stringify(), result);
}


TEST(PowTest, PowStringTwoNeg){
   Op* op1 = new Op(-3);
   Op* op2 = new Op(-4);
   Pow* test = new Pow(op1, op2);
   std::string result = "-3 ^ -4";
   EXPECT_EQ(test->stringify(), result);
}

#endif

