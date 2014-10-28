f [] = []
f (x:xs) = f sm ++ [x] ++ f la
	where
		sm = [sm | sm <-xs, sm < x]
		la = [la | la <-xs, la > x]
{-large element = [xs list , condition(la > head]--which is a list -}
{-
-> less efficient and slow, as compared to #c code
-}
