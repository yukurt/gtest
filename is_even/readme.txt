To run, edit GTEST_DIR in Makefile.
Then execute:
% make 
% ./sample1_unittest

Sample execution:
kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/is_even$ make
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -g -Wall -Wextra -pthread -c ./sample1.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -g -Wall -Wextra -pthread -c ./sample1_unittest.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -I/home/kuyu/dkuyu/bin/googletest-master/googletest -g -Wall -Wextra -pthread -c \
            /home/kuyu/dkuyu/bin/googletest-master/googletest/src/gtest-all.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -I/home/kuyu/dkuyu/bin/googletest-master/googletest -g -Wall -Wextra -pthread -c \
            /home/kuyu/dkuyu/bin/googletest-master/googletest/src/gtest_main.cc
ar rv gtest_main.a gtest-all.o gtest_main.o
ar: creating gtest_main.a
a - gtest-all.o
a - gtest_main.o
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -g -Wall -Wextra -pthread -lpthread sample1.o sample1_unittest.o gtest_main.a -o sample1_unittest
kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/is_even$ ./sample1_unittest
Running main() from gtest_main.cc
[==========] Running 3 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 3 tests from IsEvenTest
[ RUN      ] IsEvenTest.EvenNumbers
[       OK ] IsEvenTest.EvenNumbers (0 ms)
[ RUN      ] IsEvenTest.OddNumbers
[       OK ] IsEvenTest.OddNumbers (0 ms)
[ RUN      ] IsEvenTest.OtherNumbers
[       OK ] IsEvenTest.OtherNumbers (0 ms)
[----------] 3 tests from IsEvenTest (1 ms total)

[----------] Global test environment tear-down
[==========] 3 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 3 tests.

