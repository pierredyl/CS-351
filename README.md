# CS-351
A repository to hold the work done in CS-351. 



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
   - 

2. **hash-01 and hash-02 both dynamically allocate memory for each hash computation. Is there much difference time-wise between their two allocation methods?**
   - 

3. **hash-03 avoids the allocation by using a fixed-size array. Is there an appreciable speed difference?**
   - 

4. **Why is hash-04's memory usage so much larger than any of the other versions?**
   - 

5. **What other compiler options did you try, and did they help at all?**
   - 
