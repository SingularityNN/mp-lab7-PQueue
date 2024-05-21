#include <gtest.h>
#include "PQueue.h"
//Constructors
TEST(PQueue, DefaultConstructorTest) {
	ASSERT_NO_THROW(PQueue<int> q(3));
}


TEST(PQueue, Throws_InitializeConstructorTest_ZeroSize) {
	ASSERT_ANY_THROW(PQueue<int> q(0));
}

//IsEmpty()
TEST(PQueue, IsEmptyTest_Empty) {
	PQueue<int> q(3);
	EXPECT_TRUE(q.IsEmpty());
}

TEST(PQueue, IsEmptyTest_NotEmpty) {
	PQueue<int> q(3);
	q.enqueue(2, 0);
	EXPECT_FALSE(q.IsEmpty());
}

//enqueue()
TEST(PQueue, enqueueTest_QueueIsEmpty) {
	PQueue<int> q(2);
	ASSERT_NO_THROW(q.enqueue(1, 0));
}

TEST(PQueue, PushTest_QueueIsNotEmpty) {
	PQueue<int> q(2);
	q.enqueue(1, 0);
	ASSERT_NO_THROW(q.enqueue(2, 0));
}

//dequeue()
TEST(PQueue, Throws_dequeueTest_QueueIsEmpty) {
	PQueue<int> q(2);
	ASSERT_ANY_THROW(q.dequeue());
}

TEST(PQueue, dequeueTest_QueueIsNotEmpty) {
	PQueue<int> q(2);
	q.enqueue(1, 0);
	q.enqueue(2, 1);
	ASSERT_NO_THROW(q.dequeue());
}