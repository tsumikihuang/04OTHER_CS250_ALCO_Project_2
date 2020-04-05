# CS250_ALCO_Project_2
Programming the RISC-V Code
## Problem 1 - Euclidean algorithm
用Euclidean algorithm來求最大公因數

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

## Problem 3 - 精靈群島的傳送門
最近精靈王國的探險家發現了一片新的群島(假設有$N$個島嶼)。精靈國王非常高興，決定大規模開發這個群島，以緩解精靈王國的人口問題。開發群島的首要之務是解決交通問題。精靈有成熟的建造(雙向)傳送門的技術，因此第一步是建造足夠的傳送門使得這$N$個島嶼可以通過傳送門相互連通。在兩個島嶼之間建造一個傳送門的成本受多重複雜的因素影響，甚至有可能無法建造。但精靈工程師可以精確的評估出建造的基礎成本為何，並且已經調查出所有可建造傳送門的島嶼組合及其基礎成本

影響建造成本的另一個重要原因是使用的魔法設備的等級(為正整數)。假設島嶼$i$與$j$建造傳送門的基礎成本是$C(i,j)$，而使用的魔法設備等級為$t$，則實際的建造成本為$C(i,j)/t$。購買魔法設備本身也需要成本，魔法設備的成本與其等級成正比。也就是說，如果等級為1的設備成本為$X$,則等級為$t$的設備的成本為$t*X$。魔法設備的等級上限為$T$。一台魔法設備可以用來建造所有的傳送門。建造的總成本為魔法設備成本加上建造傳送門的成本總和

請你寫一個程式幫助精靈國王決定應該投資等級多高的魔法設備，以及應該在那些島嶼與島嶼之間建造傳送門，以利用最低的成本達成讓N個島嶼能通過傳送門相互連通

**輸入說明:**
先讀取四個正整數$N, M, T, X$。$N$為島嶼的數量, $M$為可建造傳送門的組合總數, $T$為魔法設備的等級上限, $X$為等級一魔法設備之價格

接下來的M行，每一行有三個整數$i, j, C(i,j)$。這表示島嶼$i$與$j$之間可建造傳送門，建造的基礎成本為$C(i,j)$

**輸出說明:**
第一行包含一個整數$t$表示投資的魔法設備等級$t$。第二行包含一個整數$m$表示總共建造的傳送門數目$m$。接下來$m$行每一行包含兩個數字$i, j$，表示要在島嶼$i$與$j$之間建立傳送門

- **範例:**
```javascript=
//輸入
3 3 100 2
1 2 4
1 3 5
2 3 4

//輸出
2
2
1 2
2 3
```
---
---

## Problem 4 - Independent Set
對任意簡單無向圖（simple undirected graph）$G=(V,E)$以及$S⊆V$，若所有$x、y∈S$都滿足$(x,y)∉E$，則我們稱$S$為$G$的一個獨立集，亦即，獨立集中的點兩兩不相鄰。求簡單無向圖的最大獨立集的點的數量

**輸入說明:**
先讀取2個正整數$N、M$，分別代表圖的點和邊的數量，接下來的m行分別給出每條邊之兩端點

**輸出說明:**
輸出最大獨立集的點的數量

- **範例1:**
```javascript=
//輸入
6 6
0 3
1 5
3 2
2 5
0 4
1 0

//輸出
3
```

- **範例2:**
```javascript=
//輸入
7 8
6 5
0 3
2 6
3 5
1 4
1 2
3 4
2 3

//輸出
4
```


# RISC-V 相關

## RISC-V Simulator
RARS:[下載點](https://github.com/TheThirdOne/rars)
(不一定要用這個)

## 組語指引
https://github.com/TheThirdOne/rars/wiki/Assembler-Directives

## Instruction 列表:
https://github.com/TheThirdOne/rars/wiki/Supported-Instructions

## Register Names
https://github.com/TheThirdOne/rars/wiki/Calling-Convention

### 重點圖:
![](https://i.imgur.com/YFdt5En.png)

## system calls的種類
https://github.com/TheThirdOne/rars/wiki/Environment-Calls

### 9個基本常見的systemCall動作:
- 分別是Call Number1~8+10
![](https://i.imgur.com/20WZxzj.png)
## 注意事項
- x10(a0), x11(a1) register 在除了使用輸入輸出時以外,不要修改。
- a7 固定為存system call 的call Number
- pc program counter不要修改
- x0 固定為0,無法修改
- ra 為return address 在特定情況可以修改存入address(如:recursive function),一般來說不動就不會改它。

## 補充其實這些東西在RARS裡面都有
- 將游標移到上方help欄位,點選跑出來的help(或是直接按F1)裡面就有instruction、register及其功能、syscall 

## 簡易程式碼範例
程式碼:
![](https://i.imgur.com/WvCxJz3.png)
![](https://i.imgur.com/9Sh3hzv.png)
## 編譯執行
- 1.請點這顆像工具的按紐
    - ![](https://i.imgur.com/BdtiB2R.png)
- 3.如果編譯沒錯,右邊兩個綠燈會亮起
    - ![](https://i.imgur.com/yWmvOmW.png)
    - 第一顆綠燈會全部執行,第二顆綠燈為逐行執行
### 範例輸出
- ![](https://i.imgur.com/yyzjijX.png)
![](https://i.imgur.com/P13MKKh.png)



