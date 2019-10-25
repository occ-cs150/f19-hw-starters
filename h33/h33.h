/**
    @file h33.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H33_H_
#define H33_H_
#include <string>

/**
    Compute recursively the number of times that sub appears inside
    str, without the substrings overlapping.

    @param str the string to search through.
    @param sub the string to look for.
    @return number of times that sub appears in str (without overlap).

    Here are some examples:
        subCount("catcowcat", "cat") returns 2
        subCount("catcowcat", "cow") returns 1
        subCount("catcowcat", "dog") returns 0

*/
int subCount(const std::string& str, const std::string& sub);

#endif
