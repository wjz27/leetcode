
# Question
Write an algorithm to determine if a number is "happy".

A happy number is a number defined by the following process: Starting with any positive integer, replace the number by the sum of the squares of its digits, and repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1. Those numbers for which this process ends in 1 are happy numbers.

> Example: 19 is a happy number

> 1^2 + 9^2 = 82

> 8^2 + 2^2 = 68

> 6^2 + 8^2 = 100

> 1^2 + 0^2 + 0^2 = 1


# Answer
It is easy to calculate the square sum.
What makes it difficult is that we could not find the end point of square-sum loop.
A direct way is to use an assistant array/vector to record the square-sum history, if new square-sum, add into the array/vector, else, the number is unhappy, return false.

But here is a magic number 4, if square_sum==4, return false.
You could find the magic from wikipedia, search for 'happy number', then you will see that for any unhappy number, they will fall into one specific loop "4->16->37->...->2->4"
haha...
