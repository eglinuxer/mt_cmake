#ifndef __HELLO_OBJECT_H__
#define __HELLO_OBJECT_H__

#include <string>

namespace hello_object
{

/// Example class that is explicitly exported into a dll
class HelloObject
{
public:
    HelloObject(const std::string& name) : m_name(name)
    {
    }

    void greet() const;

private:
    const std::string m_name;
};

} // namespace hello_object

#endif  // __HELLO_OBJECT_H__