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
    int count_words = 0;
    bool first_up = false;
    bool in_word = false;
    for (int i = 0; str[i] != '\0'; i++){
        if (!isspace(str[i])){
            if (!in_word){
                first_up = isupper(str[i]);
                in_word = true;
            }
            else{
                if(!islower(str[i])) first_up = false;
            }
        }
        else{
            if(in_word && first_up) count_words++;
        }
    }
    return count_words;
}

unsigned int faStr3(const char *str) {
    int length = 0;
    int count_words = 0;
    int sum_length = 0;
    bool in_word = false;
    for (int i = 0; str[i] != '\0'; i++){
        if (!isspace(str[i])){
            if (!in_word){
                in_word = true;
                length = 1;
            }
            else{
                length++;
            }
        }
        else{
            if (in_word){
                count_words++;
                sum_length += length;
                in_word = false;
            }
        }
    }

    if(in_word){
        count_words++;
        sum_length += length;
    }

    if (count_words == 0) return 0;
    else{
        double result = (double) sum_length / count_words;
        return (int)(result + 0.5);
    }
}
