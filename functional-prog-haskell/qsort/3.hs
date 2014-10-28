qsort [] = []
qsort xs = qsort large ++ qsort small ++ [x]
 where x = minimum xs
       small = [a | a <- xs, a <= x]
       large = [b | b <- xs, b > x]
