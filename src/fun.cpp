// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cctype>


unsigned int faStr1(const char *str) {
    int count_words = 0;
    bool has_number = false;
    bool in_word = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            if (in_word && !has_number) {
                count_words++;
            }
            in_word = false;
            has_number = false;
        } else {
            if (isdigit(str[i])) has_number = true;
            in_word = true;
        }
    }

    if (in_word && !has_number) {
        count_words++;
    }
    return count_words;
}

unsigned int faStr2(const char *str) {
    return 0;
}

unsigned int faStr3(const char *str) {
    return 0;
}
