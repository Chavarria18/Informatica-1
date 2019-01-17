module Main exposing (..)

--Ejercicio 1
 
type Natural = Suc Natural | Cero  

enteroAnatural : Int -> Natural
enteroAnatural i = if i == 0 then Cero else Suc (enteroAnatural(i-1))

sumar: Natural -> Natural -> Natural
sumar n1 n2 = case (n1, n2) of 
    (Cero, n2_) -> n2_
    (n1_, Cero) -> n1_
    (Suc n1_,Suc n2_) ->  Suc (Suc (sumar n1_ n2_))

restar: Natural -> Natural -> Natural
restar n1 n2 = case (n1, n2) of 
    (Cero,n2_) -> Cero
    (n1_,Cero) -> n1_
    (Suc n1_,Suc n2_) ->  restar n1_ n2_


multiplicacion: Natural -> Natural -> Natural
multiplicacion n1 n2 = case (n1,n2) of
    (Cero, n2_) -> Cero
    (n1_,Cero) -> Cero
    (n1_, Suc n2_) ->  sumar n1_ (multiplicacion n1_ n2_)

divn: Natural -> Natural -> Natural -> Natural
divn n1 n2 x = case (n1, n2, x) of
    (Cero , n2_ , x_) -> x_
    (n1_, Cero , x_) -> Cero    
    (n1_,  n2_ , x_) -> divn (restar n1_ n2_) n2_ (Suc x_)

division: Natural -> Natural -> (Natural, Natural)
division n1_ n2_ =
    if multiplicacion (divn n1_ n2_ Cero) n2_ == n1_ 
    then (divn n1_ n2_ Cero, Cero)  
    else (restar (divn n1_ n2_ Cero) (Suc Cero), restar (n1_ )(multiplicacion (restar(divn n1_ n2_ Cero)(Suc Cero)) n2_ ))




--factorial n1_ = 
  --  if n1_ == Suc Cero then n1_ else multiplicacion (restar (n1_ Suc n1_)) n1_

--Ejercicio 2

--type Expresion = Valor Int | Suma Expresion Expresion | Mult Expresion Expresion

--Ejercicio 3

type GExpresion a = Valor a | Suma (GExpresion a) (GExpresion a) | Mult (GExpresion a)  (GExpresion a) 

type alias Expresion = GExpresion Int 

type Estado = Final Int | Parcial (List Char)

type alias PExpresion = Expresion 

--buscarSuma : List Char -> Maybe (List Char, List Char)

--buscarMultiplicacion : List Char -> Maybe (List Char, List Char)

--parsear : Estado -> PExpresion
 
--parsear n = buscarSuma (String.toList "n") buscarMultiplicacion (String.toList "n") of
    --Nothing -> buscarMultiplicacion                             -- prober mult -- Valor (String.toInt "3")
   -- Just (iz, dr) -> Suma (parsear (Parcial iz)) (parsear (Parcial dr))



