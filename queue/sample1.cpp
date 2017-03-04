#include "sample1.hpp"

template <typename E>
Queue<E>::Queue()
{
}

template <typename E>
void Queue<E>::Enqueue(const E& val)
{
    q.push(new E(val));
}

template <typename E>
E* Queue<E>::Dequeue()
{
    if (q.empty())
    {
        return nullptr;
    }

    E* tmp = q.front();
    q.pop();
    return tmp;
}

template <typename E>
std::size_t Queue<E>::size() const
{
    return q.size();
}

template class Queue<int>;
