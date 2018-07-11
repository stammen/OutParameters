#pragma once

namespace WindowsRuntimeComponent1
{
    public ref class Class1 sealed
    {
    public:
        Class1();
        unsigned int GetVersion(unsigned int* majorVersion, unsigned int* minorVersion);
    };
}
