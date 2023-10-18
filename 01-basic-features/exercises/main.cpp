#include <iostream>
#include <vector>

int main()
{
    std::cout << "main\n";

    std::cout << "version of C++ " << __cplusplus << '\n';

    // nullptr (std::nullptr_t)
    int x = NULL;

    // nullptr cannot be implicitly converted to int
    // int y = nullptr; // error

    // possible - C-style casting should not be perfomed!
    int z = (long long)nullptr;

    int zz = reinterpret_cast<long long>(nullptr);

    return 0;
}