module Main exposing (..)
--ejercicio 1
suma: Int -> Int -> Int 
suma a b = a + b 

multiplicacion: Int -> Int -> Int 
multiplicacion a b = a * b 

--ejerciocio 2
type Expresion = Suma Expresion Expresion | Multiplicacion Expresion Expresion  | Valor Int 
    

reducir : (Int -> Int -> Int , Int -> Int -> Int) -> Expresion -> Int
reducir (iSuma, iMultiplicacion) oper =
    case oper of
        Suma op1 op2 -> iSuma (reducir (iSuma, iMultiplicacion) op1) (reducir (iSuma, iMultiplicacion) op2)
        Multiplicacion op1 op2 -> iMultiplicacion (reducir (iSuma, iMultiplicacion) op1) (reducir (iSuma, iMultiplicacion) op2)
        Valor n -> n

        