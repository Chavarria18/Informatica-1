module Main exposing (main)

import Browser
import Canvas
import CanvasColor as Color exposing (Color)
import Html exposing (Html,div)
import Html.Attributes exposing (style)

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

-- Las coordenadas de cada una de las esquinas del
-- poligono que se dibujara
init = [
    (300, 200),
    (400, 400),
    (200, 400)
    ]


initn n = case n of 
    0 -> init 
    a ->  siguiente (initn (n - 1) ) 
--if n == 0 then init else siguiente (initn (n - 1))


-- Dada una lista de coordesnadas, esta funcion
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
view = div
        [style "display" "flex"
        , style "justify-content" "center"
        , style "align-items" "center"
        ]
    [let
        width = 600
        height = 600
        poligono ctx = dibujar (initn 5) ctx
    in
        Canvas.element
            width
            height
            [ style "border" "8px solid black" ]
            (
                Canvas.empty
                |> Canvas.clearRect 0 0 width height
                |> poligono
                |> Canvas.stroke
            )
    ]
main = view
