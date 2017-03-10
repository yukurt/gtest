Demonstration of Google Mock

To run, edit GTEST_DIR and GMOCK_DIR variables in Makefile.

Here is a sample output:

kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/turtle$ make && ./gmock_test
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -isystem /home/kuyu/dkuyu/bin/googletest-master/googlemock/include -g -Wall -Wextra -pthread -std=c++11 -c ./gmock_test.cpp
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -isystem /home/kuyu/dkuyu/bin/googletest-master/googlemock/include -I/home/kuyu/dkuyu/bin/googletest-master/googletest -I/home/kuyu/dkuyu/bin/googletest-master/googlemock -g -Wall -Wextra -pthread -std=c++11 \
            -c /home/kuyu/dkuyu/bin/googletest-master/googlemock/src/gmock-all.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -isystem /home/kuyu/dkuyu/bin/googletest-master/googlemock/include -I/home/kuyu/dkuyu/bin/googletest-master/googletest -I/home/kuyu/dkuyu/bin/googletest-master/googlemock -g -Wall -Wextra -pthread -std=c++11 \
            -c /home/kuyu/dkuyu/bin/googletest-master/googletest/src/gtest-all.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -isystem /home/kuyu/dkuyu/bin/googletest-master/googlemock/include -I/home/kuyu/dkuyu/bin/googletest-master/googletest -I/home/kuyu/dkuyu/bin/googletest-master/googlemock -g -Wall -Wextra -pthread -std=c++11 \
            -c /home/kuyu/dkuyu/bin/googletest-master/googlemock/src/gmock_main.cc
ar rv gmock_main.a gmock-all.o gtest-all.o gmock_main.o
ar: creating gmock_main.a
a - gmock-all.o
a - gtest-all.o
a - gmock_main.o
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -isystem /home/kuyu/dkuyu/bin/googletest-master/googlemock/include -g -Wall -Wextra -pthread -std=c++11 -lpthread gmock_test.o gmock_main.a -o gmock_test
Running main() from gmock_main.cc
[==========] Running 7 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 7 tests from PainterTest
[ RUN      ] PainterTest.CanDrawSomething
[       OK ] PainterTest.CanDrawSomething (8 ms)
[ RUN      ] PainterTest.CanDrawSquare
[       OK ] PainterTest.CanDrawSquare (0 ms)
[ RUN      ] PainterTest.CanGetTurtleLocation
[       OK ] PainterTest.CanGetTurtleLocation (0 ms)
[ RUN      ] PainterTest.CanDrawTriangle
[       OK ] PainterTest.CanDrawTriangle (0 ms)
[ RUN      ] PainterTest.CanDrawHexagon
[       OK ] PainterTest.CanDrawHexagon (1 ms)
[ RUN      ] PainterTest.CanDrawDecagon
[       OK ] PainterTest.CanDrawDecagon (0 ms)
[ RUN      ] PainterTest.CanDrawHeptagon
[       OK ] PainterTest.CanDrawHeptagon (0 ms)
[----------] 7 tests from PainterTest (9 ms total)

[----------] Global test environment tear-down
[==========] 7 tests from 1 test case ran. (10 ms total)
[  PASSED  ] 7 tests.
kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/turtle$ 
