#include "tools/tools_export.h"

class EXPORT_TOOLS Tools
{
public:
    int add(const int& a, const int& b);
};

EXPORT_TOOLS void print_message(const char* message); 