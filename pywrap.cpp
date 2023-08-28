/*
 * File: pywrap.cpp
 * Project: pybind-tests
 * File Created: Monday, 28th August 2023 6:15:36 pm
 * Author: Jeremy E. Coppin (jec@scopetechnology.com)
 * -----
 * Last Modified: Monday, 28th August 2023 6:23:53 pm
 * Modified By: Jeremy E. Coppin (jec@scopetechnology.com>)
 * -----
 * Copyright 2023 - 2023 Scope Logistical Solutions, Scope Logistical Solutions
 */


#include <pybind11/pybind11.h>
#include "testlib.h"

namespace py = pybind11;
constexpr auto byref = py::return_value_policy::reference_internal;

PYBIND11_MODULE(PyBindTestLib, m)
{
    m.doc() = "optional module docstring";

    py::class_<greetingClass>(m, "greetingClass")
        .def(py::init<>())
        .def("getGreeting", &greetingClass::getGreeting, py::call_guard<py::gil_scoped_release>());
    // .def_readonly("v_data", &MyClass::v_data, byref)
    // .def_readonly("v_gamma", &MyClass::v_gamma, byref);
}

