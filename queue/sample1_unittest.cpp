#include "sample1.hpp"
#include "gtest/gtest.h"

class QueueTest : public ::testing::Test
{
protected:
    virtual void SetUp()
    {
        q1_.Enqueue(1);
        q2_.Enqueue(2);
        q2_.Enqueue(3);
    }

    // virtual void TearDown() {}

    Queue<int> q0_;
    Queue<int> q1_;
    Queue<int> q2_;
};

TEST_F(QueueTest, IsEmptyInitially)
{
    EXPECT_EQ(0, q0_.size());
}

TEST_F(QueueTest, DequeueWorks)
{
    int* n = q0_.Dequeue();
    EXPECT_EQ(NULL, n);

    n = q1_.Dequeue();
    ASSERT_TRUE(n != NULL);
    EXPECT_EQ(1, *n);
    EXPECT_EQ(0, q1_.size());
    delete n;

    n = q2_.Dequeue();
    ASSERT_TRUE(n != NULL);
    EXPECT_EQ(2, *n);
    EXPECT_EQ(1, q2_.size());
    delete n;

    n = q2_.Dequeue();
    ASSERT_TRUE(n != NULL);
    EXPECT_EQ(3, *n);
    EXPECT_EQ(0, q2_.size());
    delete n;

    q2_.Enqueue(5);

    n = q2_.Dequeue();
    ASSERT_TRUE(n != NULL);
    EXPECT_EQ(5, *n);
    EXPECT_EQ(0, q2_.size());
    delete n;

    n = q2_.Dequeue();
    EXPECT_EQ(NULL, n);
}
