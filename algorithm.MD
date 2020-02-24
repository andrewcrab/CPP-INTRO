# Algorithm

```c++
#include <algorithm>
#include <functional>
#include <array>
#include <iostream>
 
int main()
{
    std::array<int, 10> s = {5, 7, 4, 2, 8, 6, 1, 9, 0, 3}; 
    
    // sort using a lambda expression 
    std::sort(s.begin(), s.end(), [](int a, int b) {
        return a > b;   
    });
    
    // Output
    for (auto a : s) {
        std::cout << a << " ";
    } 
}
```
