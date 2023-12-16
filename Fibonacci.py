//F(0) = 0
//F(1) = 1
//F(n) = F(n-1) + F(n-2), for n > 1


class Solution(object):
    def fib(self, n):
       
        if n < 2:
            return n
        
        Fibo = [0] * (n+1)
        Fibo[0] = 0
        Fibo[1] = 1

        for i in range(2, n+1):
            Fibo[i] = Fibo[i-1] + Fibo[i-2]
        return Fibo[n]
        

