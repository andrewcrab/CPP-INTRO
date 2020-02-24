# Algorithm

自定义排序
```c++
struct Box {
    int value, weight;
    double rate;
};

vector<Box> v(n);

sort(v.begin(), v.end(), [](Box & a, Box & b){
    return a.rate < b.rate;
});
```
