#ifndef __INTERNAL_H__
#define __INTERNAL_H__

#include <string>

namespace hello::details
{

void print_impl(const std::string& name);
    
}   // namespace hello::details

#endif  // __INTERNAL_H__