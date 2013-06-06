//------------------------------------------------------------------------------
// Author: Pavel Karneliuk
// Description: Entry point of program.
// Copyright (c) 2013 EPAM Systems. All Rights Reserved.
//------------------------------------------------------------------------------
#include <iostream>
#include <exception>

#include "controller/controller.h"
//------------------------------------------------------------------------------
using namespace NST::controller;
//------------------------------------------------------------------------------
int main(int argc, char **argv) try
{
    Controller controller;
    return controller.run(argc, argv);
}
catch(const std::exception& e)
{
    std::cerr << e.what() << std::endl;
    exit(-1);
}
catch(...)
{
    std::cerr << "unknown error" << std::endl;
    exit(-1);
}
//------------------------------------------------------------------------------

