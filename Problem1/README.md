## Problem 1 - Euclidean algorithm
用Euclidean algorithm來求最大公因數

### C++
用兩種方法實作輾轉相除法
法一:過去習慣的做法
法二:老師提供的pseudo code(下方)作法
### Risc V
實作第一種的輾轉相除法。
其中透過REM取餘數

- pseudo code
```python=
gcd(a, b):
    t = 1
    while t != 0:
        t = a mod b
        a = b
        b = t
    return a
```

**輸入說明:**
輸入2個正整數$A、B$，求2數的最大公因數


**限制:**
必須使用Euclidean algorithm

- 範例1:
```javascript=
//輸入
25 15

//輸出
5
```

- 範例2:
```javascript=
//輸入
1071 462

//輸出
21
```

---
---
