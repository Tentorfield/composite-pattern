#ifndef __MIX_TEST_HPP__
#define __MIX_TEST_HPP__

#include "gtest/gtest.h"

TEST(MixTest, MixTestAllPosEvaluate){
  //(17 - 6 / 2 + 4 * 3 ^ 5)
  Base* seventeen = new Op(17);
  Base* six  = new Op(6);
  Base* two  = new Op(2);
  Base* four = new Op(4);
  Base* three = new Op(3);
  Base* five = new Op(5);
  Base* pow  = new Pow(three, five);
  Base* div = new Div(six, two);
  Base* mult = new Mult(four, pow);
  Base* sub = new Sub(seventeen, div);
  Base* add = new Add(sub, mult);
  EXPECT_EQ(add->evaluate(), 986);
}

TEST(MixTest, MixTestAllPosStringify){
  //(17 - 6 / 2 + 4 * 3 ^ 5)
   Base* seventeen = new Op(17);
   Base* six  = new Op(6);
   Base* two  = new Op(2);
   Base* four = new Op(4);
   Base* three = new Op(3);
   Base* five = new Op(5);
   Base* pow  = new Pow(three, five);
   Base* div = new Div(six, two);
   Base* mult = new Mult(four, pow);
   Base* sub = new Sub(seventeen, div);
   Base* add = new Add(sub, mult);
   string result = "17 - 6 / 2 + 4 * 3 ** 5";
   EXPECT_EQ(add->stringify(), result);
}

TEST(MixTest, MixTestNegValEvaluate){
   //(-7 -6 / (-2) + 4 * -3 ^ 5)
   Base* negSeven = new Op(-7);
   Base* six = new Op(6);
   Base* negTwo = new Op(-2);
   Base* four = new Op(4);
   Base* negThree = new Op(-3);
   Base* five = new Op(5);
   Base* pow = new Pow(negThree, five);
   Base* div = new Div(six, negTwo);
   Base* mult = new Mult(four, pow);
   Base* sub = new Sub(negSeven, div);
   Base* add = new Add(sub, mult);
   EXPECT_EQ(add->evaluate(), -976); 
}

TEST(MixTest, MixTestNegValStringify){
   Base* negSeven = new Op(-7);
   Base* six = new Op(6);
   Base* negTwo = new Op(-2);
   Base* four = new Op(4);
   Base* negThree = new Op(-3);
   Base* five = new Op(5);
   Base* pow = new Pow(negThree, five);
   Base* div = new Div(six, negTwo);
   Base* mult = new Mult(four, pow);
   Base* sub = new Sub(negSeven, div);
   Base* add = new Add(sub, mult);
   string result = "-7 - 6 / -2 + 4 * -3 ** 5";
   EXPECT_EQ(add->stringify(), result);
}

#endif
