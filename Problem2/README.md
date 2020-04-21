## Problem 2 - Special sort
### 題目
Here you are asked to do a simple sorting. You will be given N numbers and a positive integer M. You will have to sort the N numbers in ascending order of their modulo M value. If there is a tie between an odd number and an even number (that is their modulo M value is the same) then the odd number will precede the even number. If there is a tie between two odd numbers (that is their modulo M value is the same) then the larger odd number will precede the smaller odd number and if there is a tie between two even numbers (that is their modulo M value is the same) then the smaller even number will precede the larger even number.


有N個數字，N%M後，由小至大排序輸出。
若%相同，則奇數優先於偶數，且奇數字大至小，偶數小至大

### C++
>>main函式<<
將輸入的數字先分成奇數和偶數存在各自的vector
再將偶數由小到大排列
奇數由大至小排列
最後，將所有數字%M 從%=0奇數先開始輸出
>>sort函式<<
將傳入的vector排順序

### 說明
**輸入說明:**
先輸入2個正整數N、M，N代表要排序的數列大小，M代表要mod的值，之後的N個數字代表欲排序的數列


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
