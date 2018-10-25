module Main exposing (..)

import Browser
import Canvas
import CanvasColor as Color exposing (Color)
import Html exposing (Html)
import Html.Attributes exposing (style)



-- Las coordenadas de cada una de las esquinas del
-- poligono que se dibujara

init = [
    
        (300 , 200), 
        (400, 400) ,
        (200,400) ]
    

--rsk (x1, y2) (x2, y2) (x3, y3) = 
sierpinski : Int -> List String
sierpinski n =
  let down a = sierpinski (n - 1)
      space a = List.repeat (2 ^ (n - 1)) " "
  in case n of
       0 -> ["*"]
       _ ->   List.map ((\st -> space n ++ st) << (\st -> st ++ space n)) (down n)   ++ List.map (join " " << List.repeat 2) (down n)


conectar (x1,y1) (x2,y2) = []

siguienteAux origen puntos =
    case puntos of
        [] -> []
        p1::[] -> conectar p1 origen
        p1::p2::resto -> conectar p1 p2 ++ siguienteAux origen (p2::resto)

siguiente puntos =
    case puntos of
        [] -> []
        x::xs -> siguienteAux x puntos 

initn n = case n of 
    0 -> init
    a ->  siguiente (initn (n - 1) ) 

vector: ((Float , Float),(Float , Float))-> (Float, Float)

vector ((x1, y1) ,(x2 , y2)) = ((x1 + x2)/2, (y1 + y2)/2)



--sk reps = fractal 
-- Dada una lista de coordenadas, esta funcion
-- genera los comandos necesarios para dibujar
-- las lineas que connectan dichas coordenadas
dibujar triangulo context =
    let
        acc (x,y) s = s |> Canvas.lineTo x y
    in
        case triangulo of
            (x0,y0)::xs ->
                List.foldl acc (context |> Canvas.moveTo x0 y0) ((x0,y0)::xs)
                |> Canvas.lineTo x0 y0
            _ -> context

-- Funcion que genera el html que corresponde al
-- poligono siendo dibujado
view : Html msg
view = 
    let
        width = 600
        height = 600
        poligono ctx = dibujar (sierpinski 2 ) ctx
    in
        Canvas.element
            width
            height
            [ style "border" "5px solid black" ]
            (
                Canvas.empty
                |> Canvas.clearRect 0 0 width height
                |> poligono
                |> Canvas.stroke
            )
    
main = view






