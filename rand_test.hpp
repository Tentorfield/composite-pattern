#ifndef __RAND__TEST_HPP__
#define __RAND__TEST_HPP__

#include "gtest/gtest.h"
#include "base.hpp"
#include "Rand.cpp"
#include <string>
#include <stdlib.h>



TEST(randTest, EvalutateNegOneLT){
    Rand* test = new Rand();
    EXPECT_LT(-1, test->evaluate());
}

TEST(randTest, Evaluate101GT){
     Rand* test = new Rand();
     EXPECT_GT(101, test->evaluate());
}

TEST(randTest, StringifyNot101){
    Rand* test = new Rand();
    std::string result = "101";
    EXPECT_NE(result, test->stringify());
}

TEST(randTest, EvauateVal83){
    srand(2);
    Rand* test = new Rand();
    EXPECT_EQ(90, test->evaluate());
}

TEST(randTest, StringVal83){
    srand(2);
    Rand* test = new Rand();
    EXPECT_EQ("90", test->stringify());
}


#endif
