module Main exposing (..)

--Ejercicio 1

zipWith : (a -> b -> c) -> List a -> List b -> List c
zipWith aux lista1 lista2 = case (lista1, lista2) of 
    ([], lista2_) -> []
    (lista1_, []) -> []
    (x::xs, y::ys) -> aux x y :: zipWith aux xs ys

--Ejercicio 2

groupBy : (a -> Bool) -> List a -> (List a, List a) 
groupBy z list = (funciona z list, nofunciona z list)

funciona a list = case list of 
    [] -> []
    (x::xss) -> if a x 
                then funciona a xss 
                else x:: funciona a xss

nofunciona a list = case list of 
    [] -> []
    (b::bss) -> if a b 
                then b:: nofunciona a bss 
                else nofunciona a bss


--Ejercicio 3
bind : Maybe a -> (a -> Maybe b) -> Maybe b
bind xs b = 
  case xs of 
    Nothing -> Nothing 
    Just a -> b a