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

## Troubleshooting

### `no member named 'gets' in the global namespace`

Caused by:

```
clang++-3.8 -o main -std=c++14 main.cpp
```

The error message is rather clear:

```
In file included from main.cpp:1:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/iostream:39:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/ostream:38:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/ios:42:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/bits/ios_base.h:41:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/bits/locale_classes.h:40:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/string:52:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/bits/basic_string.h:2815:
In file included from /usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/ext/string_conversions.h:43:
/usr/bin/../lib/gcc/x86_64-linux-gnu/4.8/../../../../include/c++/4.8/cstdio:120:11: error: 
      no member named 'gets' in the global namespace
  using ::gets;
        ~~^
1 error generated.
```

Background:

 * https://bugs.launchpad.net/ubuntu/+source/llvm-toolchain-3.6/+bug/1620181/comments/2
 * http://stackoverflow.com/questions/17775390/clang-3-3-in-c1y-mode-cannot-parse-cstdio-header