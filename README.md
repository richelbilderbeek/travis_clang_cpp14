# travis_clang_cpp14

Branch|[![Travis CI logo](TravisCI.png)](https://travis-ci.org)
---|---
master|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_clang_cpp14.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_clang_cpp14)
develop|[![Build Status](https://travis-ci.org/richelbilderbeek/travis_clang_cpp14.svg?branch=develop)](https://travis-ci.org/richelbilderbeek/travis_clang_cpp14)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:

 * Build system: none
 * C++ compiler: `clang`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Source: one single file, `main.cpp`

More complex builds:

 * Add GCC: [travis_clang_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_clang_gcc_cpp14)
 * Add `qmake`: [travis_qmake_clang_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_clang_cpp14)

Equally complex builds:

 * Replace clang by GCC: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)

Less complex builds:

 * Use of C++98: [travis_clang_cpp98](https://www.github.com/richelbilderbeek/travis_clang_cpp98)
 * Use of C++11: [travis_clang_cpp11](https://www.github.com/richelbilderbeek/travis_clang_cpp11)
