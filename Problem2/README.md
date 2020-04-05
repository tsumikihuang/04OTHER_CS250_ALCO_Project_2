
## Problem 2 - Special sort
Here you are asked to do a simple sorting. You will be given $N$ numbers and a positive integer $M$. You will have to sort the $N$ numbers in ascending order of their modulo $M$ value. If there is a tie between an odd number and an even number (that is their modulo $M$ value is the same) then the odd number will precede the even number. If there is a tie between two odd numbers (that is their modulo $M$ value is the same) then the larger odd number will precede the smaller odd number and if there is a tie between two even numbers (that is their modulo $M$ value is the same) then the smaller even number will precede the larger even number.

**輸入說明:**
先輸入2個正整數$N、M$，$N$代表要排序的數列大小，$M$代表要mod的值，之後的$N$個數字代表欲排序的數列


**輸出說明:**
把排序好的陣列依序輸出

- **範例:**
```javascript=
//輸入
15 3
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15

//輸出
15
9
3
6
12
13
7
1
4
10
11
5
2
8
14
```
---
---
