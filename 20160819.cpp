// 20160818.cpstandp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cassert>

char *ArrayAlloc(int n) {
    assert(n > 0);
    return new char[n];
}

int _tmain(int argc, _TCHAR* argv[])
{
    char* a = ArrayAlloc(0);

    return 0;
}

