#include "mock.hpp"

    SevenOpMock:SevenOpMock() { }

    SevenOpMock:evaluate() { return 7.5; }
    SevenOpMock:string stringify() { return "7.5"; }


    ZeroOpMock:ZeroOpMock() { }

    ZeroOpMock:evaluate() { return 0.0; }
    ZeroOpMock:string stringify() { return "0.0"; }


    NegativeOpMock:NegativeOpMock() { }

    NegativeOpMock:evaluate() { return 5.6; }
    NegativeOpMock:string stringify() { return "5.6"; }

