// Copyright 2022 UNN-IASR
#include <iostream>
#include "fun.h"

int main() {
    const char* testStr = "One two three";
    int result = faStr3(testStr);
    std::cout << "faStr3 result: " << result;
    return 0;
}
