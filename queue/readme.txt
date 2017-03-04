Example usage of test fixture

kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/queue$ make && ./sample1_unittest
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -std=c++11 -g -Wall -Wextra -pthread -c ./sample1.cpp
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -std=c++11 -g -Wall -Wextra -pthread -c ./sample1_unittest.cpp
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -std=c++11 -I/home/kuyu/dkuyu/bin/googletest-master/googletest -g -Wall -Wextra -pthread -c \
            /home/kuyu/dkuyu/bin/googletest-master/googletest/src/gtest-all.cc
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -std=c++11 -I/home/kuyu/dkuyu/bin/googletest-master/googletest -g -Wall -Wextra -pthread -c \
            /home/kuyu/dkuyu/bin/googletest-master/googletest/src/gtest_main.cc
ar rv gtest_main.a gtest-all.o gtest_main.o
ar: creating gtest_main.a
a - gtest-all.o
a - gtest_main.o
g++ -isystem /home/kuyu/dkuyu/bin/googletest-master/googletest/include -std=c++11 -g -Wall -Wextra -pthread -lpthread sample1.o sample1_unittest.o gtest_main.a -o sample1_unittest
Running main() from gtest_main.cc
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from QueueTest
[ RUN      ] QueueTest.IsEmptyInitially
[       OK ] QueueTest.IsEmptyInitially (1 ms)
[ RUN      ] QueueTest.DequeueWorks
[       OK ] QueueTest.DequeueWorks (0 ms)
[----------] 2 tests from QueueTest (1 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (1 ms total)
[  PASSED  ] 2 tests.
kuyu@ub16:~/dkuyu/Dropbox/practice/cpp/google_test/queue$ 
