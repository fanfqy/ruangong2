#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int maxSubArray(int* nums, int numsSize) {
    int flag = 1;
    int pre = 0, maxAns = nums[0];
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] >= 0)
        {
            flag = 0;
            break;
        }
    }
    for (int i = 0; i < numsSize; i++) {
        pre = fmax(pre + nums[i], nums[i]);
        maxAns = fmax(maxAns, pre);
    }
    if (flag == 1)
    {
        return 0;
    }
     return maxAns;
}

int main() {
    int capacity = 10;
    int numsSize = 0;
    int* nums = (int*)malloc(capacity * sizeof(int));
    printf("请输入数组元素，用空格隔开，按回车键停止：\n");
    while (scanf_s("%d", &nums[numsSize]) == 1) {
        numsSize++;
        if (numsSize >= capacity) {
            capacity *= 2;
            nums = (int*)realloc(nums, capacity * sizeof(int));
        }
        // 检查是否按下了回车键
        if (getchar() == '\n') {
            break;
        }
    }
    int maxSum = maxSubArray(nums, numsSize);
    printf("最大子序和是 %d\n", maxSum);
    free(nums);
    return 0;
}
