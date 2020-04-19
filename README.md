# CS250_ALCO_Project_2
Programming the RISC-V Code

# Problem Description
Problem 1送分暖身，Problem 2中等，Problem 3難，Problem 4最難。

要交的成品如下(上傳至portal作業區)：
1. C code
2. RISC-V code (只要simulator可以跑的pseodoinstruction都可接受)
3. README (說明如何時做以上程式碼)

評分方式：由助教親自驗收DEMO檢查完整度。



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
