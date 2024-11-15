#include "Utils.h"
#include "Stack.h"
#include <iostream>

void reverse(int* nums, int size) {
    Stack s;
    initStack(&s);

    for (int i = 0; i < size; i++) {
        push(&s, nums[i]);
    }

    for (int i = 0; i < size; i++) {
        nums[i] = pop(&s);
    }

    cleanStack(&s);
}

int* reverse10() {
    int* nums = new int[10];

    std::cout << "Enter 10 integers: \n";
    for (int i = 0; i < 10; i++) {
        std::cin >> nums[i];
    }

    for (int i = 0, j = 9; i < j; i++, j--) {
        std::swap(nums[i], nums[j]);
    }

    return nums;
}
