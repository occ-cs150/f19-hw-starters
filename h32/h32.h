/**
    @file h32.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H32_H_
#define H32_H_
#include <string>
/**
    Compute recursively a new string where adjacent characters
    that are the same have been reduced to a single character.
    So "yyzzza" yields "yza". Here are some more examples:
        stringClean("yyzzza") -> "yza"
        stringClean("abbbcdd") -> "abcd"
        stringClean("Hello") -> "Helo"
    @param s the string to start with.
    @return the string modified as described.
*/
std::string stringClean(const std::string& str);


#endif
