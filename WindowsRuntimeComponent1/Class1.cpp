#include "pch.h"
#include "Class1.h"

using namespace WindowsRuntimeComponent1;
using namespace Platform;

Class1::Class1()
{
}

unsigned int Class1::GetVersion(unsigned int* majorVersion, unsigned int* minorVersion)
{
    *majorVersion = 2;
    *minorVersion = 1;
    return 2;
}

