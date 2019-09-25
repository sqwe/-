// Date: 2019.9.25
// Author: sqwe
// Description: 输入一个无序整数数组，调整数组中数字的顺序， 所有偶数位于数组的前半部分，使得所有奇数位于数组的后半部分。
// 要求时间复杂度为O(n)。
// 思路：利用位运算来判断数的奇偶，

#include <iostream>

void adapt_array(int *arr){
    int size = sizeof(arr)/sizeof(arr[0]);
    if (size == 0 || size == 1){
        return;
    }
    int i = 0, j = size - 1;
    int temp = 0;
    while(i<j){
        if ((i&1) == 0){
            // arr[i]为偶数，跳到下一个循环，直到为奇数时判断arr[j]
            i++;
            contiune;
        }
        if ((j&1) == 1){
            // arr[j]为奇数, 跳到下一个循环，直到为偶数时与arr[i]交换位置
            j--;
            continue;
        }
        // 交换位置，将奇数换到数组后半部分
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    
    return 0;
}
