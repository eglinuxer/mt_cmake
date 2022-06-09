#include <hello/hello.hpp>

#include "internal.hpp"

namespace hello
{

void Hello::greet() const
{
    details::print_impl(m_name);
}

}   // namespace hello