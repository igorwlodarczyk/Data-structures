#include <gtest/gtest.h>
#include "double_linked_list.h"
#include "dynamic_array.h"
#include "binary_heap.h"


TEST(DoubleLinkedListTest, Test1) {
    DoublyLinkedList list1;
    list1.addFirst(1);
    list1.addFirst(2);
    list1.addLast(3);
    ASSERT_EQ(list1.get(0), 2);
    ASSERT_EQ(list1.get(1), 1);
    ASSERT_EQ(list1.get(2), 3);
}

TEST(DoubleLinkedListTest, Test2) {
    DoublyLinkedList list1;
    list1.addFirst(1);
    list1.addFirst(2);
    list1.addLast(3);
    list1.addAtIndex(10, 2);
    list1.addAtIndex(5, 3);
    list1.removeLast();
    ASSERT_EQ(list1.getSize(), 4);
    ASSERT_EQ(list1.get(2), 10);
    ASSERT_EQ(list1.get(1), 1);
    ASSERT_EQ(list1.get(3), 5);
}

TEST(DoubleLinkedListTest, Test3) {
    DoublyLinkedList list1;
    list1.addFirst(1);
    list1.addFirst(2);
    list1.addLast(3);
    list1.addAtIndex(10, 0);
    ASSERT_EQ(list1.get(0), 10);
}

TEST(DoubleLinkedListTest, Test4) {
    DoublyLinkedList list1;
    list1.addFirst(1);
    list1.addFirst(2);
    list1.addLast(3);
    list1.addAtIndex(10, 1);
    ASSERT_EQ(list1.get(1), 10);
}

TEST(DoubleLinkedListTest, Test5) {
    DoublyLinkedList list1;
    list1.addFirst(1);
    list1.addFirst(2);
    list1.addLast(3);
    list1.removeAtIndex(1);
    ASSERT_EQ(list1.get(1), 3);
}

TEST(DynamicArray, Test6) {
    DynamicArray array1;
    array1.add(3);
    array1.add(4);
    ASSERT_EQ(array1.getSize(), 2);
    ASSERT_EQ(array1.getValue(0), 3);
}

TEST(DynamicArray, Test7) {
    DynamicArray array1;
    array1.add(3);
    array1.add(4);
    array1.add(5);
    array1.removeAtIndex(1);
    ASSERT_EQ(array1.getValue(1), 5);
}

TEST(DynamicArray, Test8) {
    DynamicArray array1;
    array1.add(3);
    array1.add(4);
    array1.add(5);
    array1.addAtIndex(20, 1);
    ASSERT_EQ(array1.getValue(1), 20);
}

TEST(BinaryHeap, Test9) {
    BinaryHeap heap1;
    ASSERT_EQ(heap1.getSize(), 0);
}

TEST(BinaryHeap, Test10) {
    BinaryHeap heap1;
    heap1.add(10);
    heap1.add(50);
    heap1.add(10);
    heap1.add(50);
    heap1.add(25);
    int max = heap1.popMax();
    ASSERT_EQ(heap1.popMax(), 50);
    ASSERT_EQ(max, 50);
    ASSERT_EQ(heap1.popMax(), 25);
}


int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}