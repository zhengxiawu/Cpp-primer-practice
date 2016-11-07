﻿# C++primer第一章

标签（空格分隔）： C++ 编程

---

### 编写一个简单的程序
在linux当中，通常我们需要使用g++命令对C++文件进行编译。 并且利用-o参数，来指定对应的输出。

---
>练习1.2：什么也没有输出

---

### 初识输入输出

---

"流"所表达的思想就是，随着时间的推移，字符是顺序生成或者消耗的。

* cin标准输入
* cout标准输出
* cerr输出警告以及错误信息
* clog输出程序运行的一般信息

输出运算符<< 接受两个运算对象 左边是一个ostream对象 右边是需要打印的字符值。 这个运算符主要的作用就是，把右边的字符值写到具体的ostream对象当中。

计算方式，从做往右。具体的来说 std::cout << "enter" << std::endl;首先计算左边把"enter"通过输出运算符赋值到ostream当中，然后再把std::endl也输入到ostream对象当中去。

std::endl是一个操作符将内存当中的内容刷入到设备当中去。

**注意要跟上endl不然的话输出一直待在内存当中，会导致调试的时候出现错误**

 std::  std指出名字endl以及cout在std的命名空间中 ::为作用域运算符，指出命名空间当中的名字cout
 
 \>>：输入运算符，左侧为istream，具体的对象为右侧 从istream当中读取数据，存入到给定对象当中。顺序也是从左往右。
 
>练习 1.6 不合法，把前面两行的分号去掉。

**C++中注释不允许嵌套**

>练习1.12 for循环主要是让-100到100之间的数值相加 sum最终值为0

**在for循环当中前缀后缀++表达的意思一样，并且优先执行循环体，然后再执行前缀后缀符号**

>练习1.14 for循环我觉得更好操控，更方便执行，while的话更为直观，只管的表达控制流
>标准答案：在已经知道具体需要循环多少次的时候for循环明显更为简洁，但是在不知道循环次数具体需要多少次的时候，使用while更为方便。

>练习1.17 如果所有的值都是相等的，那么输出为： val occurs n times val为我们输入的至，n为我们输入的次数。

### 类的简介

C++最初的一个设计焦点就是能定义内置类型一样自然的类类型。

头文件可以使用不同的命名方式。













