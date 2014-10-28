qsort [] = []
qsort (x:xs) = qsort large ++ [x] ++ qsort small
 where large = [a | a <- xs, a > x || a == x]
       small = [b | b <- xs, b < x]
