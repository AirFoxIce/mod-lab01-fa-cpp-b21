// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
using namespace std;


int main() {
    const char* testStr = "Hello , world!";
    int result = faStr2(testStr);
    cout << "faStr2 result: " << result;
    return 0;
}
