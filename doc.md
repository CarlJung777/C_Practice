* %d  (decimal)
#### 手动分配内存意义：
1. 自行决定内存大小
2. 跨函数使用
3. 处理大量数据或复杂数据结构时灵活性高
4. 避免栈溢出（递归深度较大的情况下，堆内存可以避免溢出）  
* stack(自动分配内存区域)
* heap (手动管理内存区域)
* malloc (memory allocation) 
```C
ptr = (cast-type*) malloc(byte-size);
```
动态分配一块长度为size字节的连续区域，返回该区域首地址，分配失败返回NULL。不能初始化所分配的内存空间。
* calloc (contiguous allocation) 
```C
ptr = (cast-type*)calloc(n, element-size);
```
分配的内存都初始化为0，如果是分配指针元素，那么都是初始化为空指针。
* realloc (reallocation) 对申请的内存大小进行调整
```c
ptr = realloc(ptr, newSize);
```
* free (释放内存)
```c
free(ptr);
```
* C++ 运算符：new (堆上动态分配内存) ，delete（释放）
