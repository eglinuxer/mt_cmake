#ifndef __OBSCURE_H__
#define __OBSCURE_H__

#include <string>

namespace obscure
{
    
/// Example class that is explicitly exported into a dll
class Obscure
{
public:
    Obscure(const std::string& name) : m_name{name}
    {
    }

    void greet() const;

private:
    const std::string m_name;
};

}   // namespace obscure

#endif  // __OBSCURE_H__