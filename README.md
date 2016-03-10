# Gauss-Legendre Quadrature/Numerical Integration

A lightweight, simple, fast, and cross-platform double precision C++11 routine that computes the abscissas (nodes) and weights for an N-point Gauss-Legendre rule over an arbitrary interval (a,b). See the unit tests in the folder **test/** for examples.

## Latest Builds

[![Build Status](https://travis-ci.org/larzw/GaussLegendreQuadrature.svg?branch=master)](https://travis-ci.org/larzw/GaussLegendreQuadrature) <sup>**Travis CI: Linux (gcc) and OS X (clang)**<sup>

[![Build status](https://ci.appveyor.com/api/projects/status/s4e8j6sbuhleb8cn/branch/master?svg=true)](https://ci.appveyor.com/project/larzw/gausslegendrequadrature/branch/master) <sup>**AppVeyor: Windows (VS2015)**</sup>  

## Dependencies
* [Boost](http://www.boost.org/doc/libs/1_42_0/libs/test/doc/html/index.html) is used for the unit tests.
* [CMake](https://cmake.org/) is used for the builds.
* [Doxygen](http://www.stack.nl/~dimitri/doxygen/) is used to create documentation.

If your intentions are to simple use the code, the above dependencies don't apply. You only need GassLegendreRule.cpp and the corresponding header file.

# Documentation
The API reference can be found in the folder **doc/latex/refman.pdf**

## Algorithm
Newton's method is used to compute the abscissas, which are the roots of an N<sup>th</sup> order Legendre polynomial. Although alternative methods exits, direct root finding is typically faster by a factor of 3 to 5 [*Press et al., Numerical Recipes 3rd ed. (2007)*]. For further efficiency, pre-computed abscissas/weights correct to 25 decimal places for the orders = 2-20,32,64,96,100,128,256,512,1024 are used, otherwise abscissas/weights are computed on the fly.

# License
[![GPLv3](http://img.shields.io/badge/license-GPLv3-blue.svg)](https://www.gnu.org/copyleft/gpl.html)

This code is a modified version of the GNU Scientific Library function [glfixed](http://www.gnu.org/software/gsl/manual/html_node/Fixed-order-Gauss_002dLegendre-integration.html#Fixed-order-Gauss_002dLegendre-integration). The original project can be found at [Pavel Holoborodko](http://www.holoborodko.com/pavel/numerical-methods/numerical-integration/).
