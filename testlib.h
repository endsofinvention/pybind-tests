/*
 * File: testlib.h
 * Project: pybind-tests
 * File Created: Monday, 28th August 2023 6:12:31 pm
 * Author: Jeremy E. Coppin (jec@scopetechnology.com)
 * -----
 * Last Modified: Monday, 28th August 2023 6:12:40 pm
 * Modified By: Jeremy E. Coppin (jec@scopetechnology.com>)
 * -----
 * Copyright 2023 - 2023 Scope Logistical Solutions, Scope Logistical Solutions
 */

#include <string>
#include "adder.h"
using namespace std;

class greetingClass 
{

public:
    greetingClass() {};
    std::string getGreeting ()
    {
        return "Hello there!" + add(23, 14);
    }
};

        




