#include <hello/hello.hpp>
#include <hello_header_only/hello_header_only.hpp>
#include <hello_object/hello_object.hpp>

int main(int argc, const char *argv[])
{
    hello_header_only::print_hello("eg");
    hello::Hello hello("eg");
    hello.greet();

    const std::string obj_name {"eg"};
    hello_object::HelloObject obj(obj_name);
    obj.greet();
}