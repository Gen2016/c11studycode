// 20160818.cpstandp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

const char* hello(){
    return __FUNCTION__; //__func__
}

const char* world(){
    return __FUNCTION__;//__func__
}

int _tmain(int argc, _TCHAR* argv[])
{
    std::cout << hello() << "," << world() << endl;

    return 0;
}

