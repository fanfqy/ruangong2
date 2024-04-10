#include "pch.h"

TEST(MaxSubArrayTest, HandlesPositiveInput) {
    int nums[] = { 1, 2, 3, 4, 5 };
    int result = maxSubArray(nums, 5);
    EXPECT_EQ(result, 15);  // 对于全正数数组，我们期望结果为所有数之和
}
TEST(MaxSubArrayTest, HandlesMixedInput) {
    int nums[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4 };
    int result = maxSubArray(nums, 9);
    EXPECT_EQ(result, 6);  // 对于包含正数和负数的数组，我们期望结果为最大子序和
}
TEST(MaxSubArrayTest, Handlesnegative) {
    int nums[] = { -2, -1, -3, -4, -1, -2, -1, -5, -4 };
    int result = maxSubArray(nums, 9);
    EXPECT_EQ(result, 0);  // 对于全是负数的数组，我们期望结果为0
}
