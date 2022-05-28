#include "export/tools.h"

#include <iostream>

int Tools::add(const int& a, const int& b)
{
    return a + b;
}

void print_message(const char* message)
{
    std::cout << message << "\n";
}