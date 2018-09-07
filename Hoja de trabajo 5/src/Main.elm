module Main exposing (..)
 
 
esPrimo n = esPrimoN n 2

esPrimoN n cont  = 
    if modBy cont n == 0 
    then False
    else if cont < n 
    then esPrimoN n (cont + 1)
    else True














   








 





































