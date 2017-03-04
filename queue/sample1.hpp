#ifndef GTEST_SAMPLES_SAMPLE1_H_
#define GTEST_SAMPLES_SAMPLE1_H_

#include <queue>

template <typename E>
class Queue
{
public:
    Queue();
    void Enqueue(const E& element);
    E* Dequeue(); // Returns NULL if the queue is empty.
    std::size_t size() const;

private:
    std::queue<E*> q;
};

#endif  // GTEST_SAMPLES_SAMPLE1_H_
