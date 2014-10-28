qsort [] = []
qsort (x:xs) = reverse (qsort small ++ [x] ++ qsort large)
 where small = [a | a <- xs, a <= x]
       large = [b | b <- xs, b > x]
