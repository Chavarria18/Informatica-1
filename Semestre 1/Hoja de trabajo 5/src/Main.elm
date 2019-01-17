module Main exposing (..)
 
esPrimo: Int -> Bool
esPrimo n = esPrimoN 2 n 

esPrimoN count n   =
    if n == 1
    then True
    else if n == 2 then True       
    else if modBy count n  == 0
    then False  
    else if count == n - 1  
    then True    
    else esPrimoN  (count + 1 ) n

fibbonaci: Int -> Int 
fibbonaci x = 
    if x == 0 
    then 0 
    else if x == 1 
    then 1
    
    else if x > 1
    then fibbonaci (x-1) + fibbonaci (x-2) 
    else 0

primos: Int -> List Int 
primos n =
    
    if n < 1 
    then []
    else if esPrimo n == False 
    then primos (n-1) 
    else n::primos (n-1)

nPrimos: Int -> List Int
nPrimos n = contn (n,2) 
contn (n,y) =  
    --if n == 1
    --then []
    if n == 0 
    then [] 
    else if esPrimo y == False
    then contn (n, y + 1)
    else y:: contn (n - 1, y + 1) --repite el proceso

espar: Int -> Bool
espar n = 
    if modBy 2 n == 0 then True else False 


