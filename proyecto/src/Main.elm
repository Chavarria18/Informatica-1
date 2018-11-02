module Main exposing (..)

import Browser
import Canvas
import CanvasColor as Color exposing (Color)
import Html exposing (Html)
import Html.Attributes exposing (style)


fractal = [
    (300, 200),
    (400, 400),
    (200, 400)]

fractal2 : List (List (Float, Float))
fractal2 = [[
    (300, 200),
    (400, 400),
    (200, 400)]]

pm : (Float, Float) -> (Float, Float) -> (Float, Float)
pm x y = case (x,y) of
        ((x1 , y1),(x2, y2) ) ->  ((x1 + x2)/2, (y1 + y2)/2)

vuelta n = case n of
    x1::x2::x3::xs -> (pm x1 x2)::(pm x1 x3)::(pm x2 x3)::[]
    _ -> []

--trianguloizquierdo n = case n of 
   -- x1::x2::x3::xs -> x1::(pm x1 x2)::(pm x3 x1)::[]
   -- _ -> []

--trianguloderecho n = case n of 
   -- x1::x2::x3::xs -> x1::(pm x3 x1)::(pm x2 x3)::[]
    --_ -> []

--trianguloarriba n = case n of 
    --x1::x2::x3::xs -> x1::(pm x1 x2)::(pm x2 x3)::[]
   -- _ -> []

--recursion sn cont =  case (sn, cont) of 
       -- (0, []) -> []
       -- (0, x::xs) -> []
       -- (x , x::xs) -> (x::xs)::(vuelta())

--fase2 c x = 
    --if c == 0 then [] else 
        --case (x , vuelta x) of 
            --(x1::x2::x3::xxs , i1::i2::i3::iis) ->
             --   let
                  --  st1 = [x1 , i1 , i3 ]
                   -- st2 = [i1 , x2 , i2 ]
                  --  st3 = [i3 , i2 , x3 ]
               -- in
                --    [[(pm x1 x2),(pm x1 x3),(pm x3 x2)]] ++ fase2 (c-1) st1 ++ fase2 (c-1) st2 ++ fase2 (c-1) st3
           -- _ -> []

t3 : List (Float , Float) -> List (Float , Float)
t3 lm = case lm of 
    x1::x2::x3::xs -> x1::(pm x1 x2)::(pm x3 x1)::[]
    _ -> []

t4 : List (Float , Float) -> List (Float , Float)
t4 lm = case lm of 
    x1::x2::x3::xs -> x2::(pm x1 x2)::(pm x2 x3)::[]
    _ -> []

t5 : List (Float , Float) -> List (Float , Float)
t5 lm = case lm of 
    x1::x2::x3::xs -> x3::(pm x3 x1)::(pm x2 x3)::[]
    _ -> []

---fase : Int -> List (Float, Float) -> List(List (Float , Float))
--fase h n = case (h , n) of 
    ---(0 , []) -> []
   --(0 , x::xs) -> []
   -- (hs , x::xs) -> fase2(x , vuelta x)
  --  (_ , []) -> []

recu : Int -> List (Float, Float) -> List(List (Float , Float))
recu h n = case (h , n) of 
    (0 , []) -> []
    (0 , x::xs) -> []
    (hs , x::xs) -> (x::xs)::(vuelta (x::xs))::(recu (hs - 1)(t3(x::xs)))++(recu (hs - 1)(t4(x::xs)))++(recu (hs - 1)(t5(x::xs)))
    (_ , []) -> []

sierpinsky x = if x == 0 then fractal2 else recu x fractal 

dibujarTriangulo : List (List (Float, Float)) -> Canvas.Commands -> Canvas.Commands
dibujarTriangulo triangulo context = case triangulo of 
    [] -> context
    x::xs -> dibujar x (dibujarTriangulo xs context)

--fold : (b -> a -> b) -> b -> List a -> b
--fold acc base lista =  case lista of
      --  [] -> base
       -- x::xs -> acc (fold acc base xs) x



-- Dada una lista de coordenadas, esta funcion
-- genera los comandos necesarios para dibujar
-- las lineas que connectan dichas coordenadas

dibujar triangulo context =
    let
        acc (x,y) s = s |> Canvas.lineTo x y
    in
        case triangulo of
            (x0,y0)::xs ->
                List.foldl acc (Canvas.moveTo x0 y0 context) xs
                |> Canvas.lineTo x0 y0
            _ -> context

-- Funcion que genera el html que corresponde al
-- poligono siendo dibujados

view : Html msg
view =
    let
        width = 600
        height = 600
        poligono = sierpinsky 0
    in
        Canvas.element
            width
            height
            [ style "border" "5px solid black" ]
            (
                Canvas.empty
                |> Canvas.clearRect 0 0 width height
                |> dibujarTriangulo poligono
                |> Canvas.stroke
            )



