'''
File: test.py
Project: pybind-tests
File Created: Monday, 28th August 2023 6:30:55 pm
Author: Jeremy E. Coppin (jec@scopetechnology.com)
-----
Last Modified: Monday, 28th August 2023 6:31:03 pm
Modified By: Jeremy E. Coppin (jec@scopetechnology.com>)
-----
Copyright 2023 - 2023 Scope Logistical Solutions, Scope Logistical Solutions
'''

import sys
sys.path.append("build/")
# from PyBindTestLib import greetingClass
from PyBindTestLib import greetingClass


greet = greetingClass()
print(greet.getGreeting())







