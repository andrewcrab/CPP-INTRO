# List
List是双向链表，不支持随机访问。
因此，造成了多种算法无法使用。但是在中间操作元素的效率较高。
Vector的各种成员函数List基本都有，遍历、构造等方法也类似。这里仅距离具有List特色的方法。

### 特殊成员函数
```c++
lst.push_front(1);
lst.pop_front();  //双向链表可从头部快速的添加元素
```

```c++
lst.sort(); //因为不支持算法中的sort，链表自带了sort函数
lst.remove(2);  //删除素有和2相等的元素
lst.reverse(); //前后颠倒
```

例子：约瑟夫问题
https://github.com/andrewcrab/CPP-INTRO/blob/master/约瑟夫问题.md
