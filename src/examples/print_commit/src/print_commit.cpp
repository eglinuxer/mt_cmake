#include <iostream>

// special macros to convert definitions into c-strings:
#define str(s) #s
#define xstr(s) str(s)

int main(int argc, const char* argv[])
{
#if defined(SHA)
    std::cout << "GIT commit: " << xstr(SHA) << std::endl;
#endif
}