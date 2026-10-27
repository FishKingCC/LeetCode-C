// 弃九法：任意十进制整数，与它的各位数字之和，除9的余数相同
int addDigits(int num) {
    while (num/10 != 0) {
        num = num % 10 + num / 10;
    }
    return num;
}

// 进阶：不使用循环或者递归，在 O(1) 时间复杂度内解决这个问题
// 数根公式
int addDigits(int num) {
    if (num == 0) return 0;
    return (num - 1) % 9 + 1;
}