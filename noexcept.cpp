#include "stdafx.h"
#include <iostream>
using namespace std;

void Throw(){
    throw 1;
}

void NoBlockThrow(){
    Throw();
}

void BlockThrow() noexcept {
    Throw();
}

int _tmain(int argc, _TCHAR* argv[])
{
    try {
        Throw();
    } 
    catch (...) {
        cout << "Found Throw" << endl;
    }

    try {
        NoBlockThrow();
    }
    catch (...) {
        cout << " Throw is not blocked" << endl;
    }

    try {
        BlockThrow();
    }
    catch (...) {
        cout << "Found Throw 1" << endl;
    }

    return 0;
}
