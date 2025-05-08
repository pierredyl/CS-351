# CUDA IOTA
## iota.cpu times  
|Vector<br>Length|Wall Clock<br>Time|User Time|System Time|
|:--:|--:|--:|--:|
|10| 0.00| 0.00| 0.00|
|100| 0.00| 0.00| 0.00|
|1000| 0.00| 0.00| 0.00|
|10000| 0.00| 0.00| 0.00|
|100000| 0.00| 0.00| 0.00|
|1000000| 0.00| 0.00| 0.00|
|5000000| 0.02| 0.00| 0.02|
|100000000| 0.52| 0.08| 0.44|
|500000000| 2.66| 0.43| 2.22|
|1000000000| 5.33| 0.82| 4.51|
|5000000000|35.84| 6.41|29.43|  


## iota.gpu times
|Vector<br>Length|Wall Clock<br>Time|User Time|System Time|
|:--:|--:|--:|--:|
|10| 0.28| 0.00| 0.27|
|100| 0.19| 0.00| 0.18|
|1000| 0.19| 0.01| 0.18|
|10000| 0.19| 0.00| 0.18|
|100000| 0.20| 0.00| 0.19|
|1000000| 0.20| 0.00| 0.19|
|5000000| 0.23| 0.01| 0.21|
|100000000| 0.84| 0.15| 0.68|
|500000000| 3.18| 0.68| 2.50|
|1000000000| 6.48| 1.37| 5.10|
|5000000000|39.31| 8.39|30.92|  

### Question: Are the results what you expected? Speculate as to why it looks like CUDA isn’t a great solution for this problem.  
I would think that GPU performance would outperform CPU perform, especially with large vector sizes. However, I believe the overhead required using CUDA is outweighing the peformance to be gained from using a GPU for this parallelization. Also, the task we are performing, incrementing values in an array, is relatively straightforward. I believe this is why the performance of the CPU is better than that of the GPU. If the task were more complicated, the GPU would likely outperform the CPU.  


# PRETTY PICTURES
![image](https://github.com/user-attachments/assets/91444735-1b84-4d26-a5a1-10d6c4b8494b)
[Pretty Picture](julia.ppm)

