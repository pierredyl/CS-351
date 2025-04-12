# Project #1:

| Program   | Optimization Level | Real Time (s) | User Time (s) | System Time (s) | Memory (KB) | Throughput | Speedup vs hash-00 |
|-----------|---------------------|---------------|----------------|------------------|-------------|------------|---------------------|
| hash-00   | N/A                 | 352.90        | 342.91         | 7.05             |  2900       | 2833.66    | N/A                 |
| hash-01   | N/A                 | 23.48         | 16.99          | 3.00             | 2900        | 42589.44   | 15x improvement     |
| hash-02   | N/A                 | 20.45          | 14.58         | 2.94             | 2900        | 48899.76   | 17.2x improvement   |
| hash-03   | N/A                 | 17.01          | 15.12           | 1.33              | 2892       | 58788.95        | 20.75x improvement  |
| hash-04   | N/A                 | 14.49        | 13.82         | 0.43            | 5011796       | 69013.11         | 24.35x improvement |




| Program   | Optimization Level            | Real Time (s) | User Time (s)  | System Time (s)  | Memory (KB) | Throughput | Speedup vs hash-00 |
|-----------|-------------------------------|---------------|----------------|------------------ |-------------|------------|---------------------|
| hash-00   | OPT="-O2 -march=native -flto" | 343.10        |  331.24        | 6.74              |   2880      | 2914.60   | N/A                 |
| hash-01   | OPT="-O2 -march=native -flto" | 9.93         |   7.02          | 1.31              | 2880        | 100704.93   | 34.55x improvement     |
| hash-02   | OPT="-O2 -march=native -flto" | 8.11         | 6.89            |  1.07             | 2908        | 123304.56   | 42.31x improvement   |
| hash-03   | OPT="-O2 -march=native -flto" | 8.02         | 6.70            | 1.17             |  2880        | 124688.28        | 42.78x improvement  |
| hash-04   | OPT="-O2 -march=native -flto" | 7.29         | 6.68          | 0.43              |  5010064      | 137174.21       | 47.06x improvement  |



1. **What operation do you think accounts for most of hash-00's runtime?**
   - The nested for loop contributes to the large runtime of this program. For every hash, the inner for loop is repeated for as many bytes in that hash. Inside that for loop, an addition, multiplication, bit shift, and XOR operation are performed. This is repeated a huge number of times. This program has an upper bound of O(n^2). 

2. **hash-01 and hash-02 both dynamically allocate memory for each hash computation. Is there much difference time-wise between their two allocation methods?**
   - I do not bnelieve there is much difference time wise between the allocation methods. All three of these hash functions use nested for loops, however, hash-01 and hash-02 use dynamic memory allocation. There is a big difference between hash-00 and the hash programs hash-01 and hash-02 however, and that's the method the bytes are read. Hash-01 and Hash-02 use the **read** function, reading the bytes in binary mode instead of text mode.
   
3. **hash-03 avoids the allocation by using a fixed-size array. Is there an appreciable speed difference?**
   - I don't think the speed difference is appreciable. It could be slightly better because no allocation or deallocation are being performed and there is better cache locality. 

4. **Why is hash-04's memory usage so much larger than any of the other versions?**
   - Hash-04 loads the memory different than the other programs, because it uses an nmap. the line `void* memory = mmap(NULL, size, PROT_READ, MAP_PRIVATE, fd, 0);` maps the entire file into the process's virtual address space. Virtual memory is reserved for the entire file, rather than portions of it. 

5. **What other compiler options did you try, and did they help at all?**
   - I found huge success with the compiler options shown in the second table above. While hash-00 improved by rougly 10 seconds (which is still pretty good), the other hash programs improved significantly. This is shown in the speedup vs hash-00 column. The largest improvement seen over Hash-00 was about 47x with this compiler option, vs 24x with no compiler options. 
