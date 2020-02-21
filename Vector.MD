# Vector
Vector是一种可变长度的动态数组，支持随机访问。
同时，因为实现方法的原因，在尾部添加元素快，在中间添加、删除元素时间则与元素个数成正比。

### 构造函数
```c++
vector<int> v(); //空的Vector
```

```c++
vector<int> v(100); //有100个元素的Vector
```

```c++
vector<int> v(100，1); //有100个元素的Vector,并将所有值初始化为1
```
```c++
int a[5] = {1,2,3,4,5};
vector<int> v(a，a+5); //Vector初始化为a和a+5两个指针间的元素
```

### Vector的遍历
```c++
vector<int> v(100);

for (auto i = v.begin(); i != v.end(); ++i){
  cout << * i;
}
```

### 读写操作
```c++
int a = v[1];
int b = v.pop_back(); //读取并删除末尾元素
v.push_back(6); //将元素添加至末尾
v.erase(v.begin() + 1, v.begin() + 3); //删除中间数个元素
v.insert(v.begin()+2, 3); //在中间插入元素
v2.insert(v2.begin(), v.begin(), v.end();  //将v插入到v2的begin()位置
```
