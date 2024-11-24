#include "pch.h"
#include "MergeSort.h"
#include <vector>

// Test dla posortowanej rosnąco tablicy
TEST(MergeSortTest, AlreadySortedArray) {
    std::vector<int> arr = { 1, 2, 3, 4, 5 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test dla odwrotnie posortowanej tablicy
TEST(MergeSortTest, ReverseSortedArray) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 2, 3, 4, 5}));
}

// Test dla losowej tablicy
TEST(MergeSortTest, RandomArray) {
    std::vector<int> arr = { 3, 1, 4, 1, 5, 9, 2, 6, 5 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 3, 4, 5, 5, 6, 9}));
}

// Test dla pustej tablicy
TEST(MergeSortTest, EmptyArray) {
    std::vector<int> arr = {};
    MergeSort::sort(arr);
    EXPECT_TRUE(arr.empty());
}

// Test dla tablicy z jednym elementem
TEST(MergeSortTest, SingleElementArray) {
    std::vector<int> arr = { 42 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{42}));
}

// Test dla tablicy z liczbami ujemnymi
TEST(MergeSortTest, NegativeNumbersArray) {
    std::vector<int> arr = { -3, -1, -4, -2, -5 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-5, -4, -3, -2, -1}));
}

// Test dla tablicy mieszanej
TEST(MergeSortTest, MixedNumbersArray) {
    std::vector<int> arr = { -3, 1, -4, 2, 5, 0 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{-4, -3, 0, 1, 2, 5}));
}

// Test dla tablicy z duplikatami
TEST(MergeSortTest, DuplicatesArray) {
    std::vector<int> arr = { 3, 3, 2, 2, 1, 1 };
    MergeSort::sort(arr);
    EXPECT_EQ(arr, (std::vector<int>{1, 1, 2, 2, 3, 3}));
}