--Dada una lista de nuermos enteros (los numeros de la lista son del 1 al 100), pasar a otra lista los mismos numeros,
--pero transformados a numeros romanos, y en otra lista con los nuermos en base 8.
--Ejemplo:
--entrada               salida romano               salida base8
--[3,9,23,45,100]     [III,IX,XXIII,XLV,C]           [3,11,43,105,400]
--CODIGO POR COLQUE C
num = [100, 90, 50, 40, 10, 9, 5, 4, 1]
roma = ["C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
conv :: Integer->String
conv n | n > 0&& n < 100 = r 0 n
            | otherwise = "fuera de rango"
r _ 0 = " "
r p n | n >= num !! p = roma !! p ++ r p (n-num!!p)
          | otherwise = r (p + 1) n
decimal::Integer->String
decimal 1= "1"
decimal 2= "2"
decimal 3= "3"
decimal 4= "4"
decimal 5= "5"
decimal 6= "6"
decimal 7= "7"
decimal n = (decimal $ div n 8)++(show $ mod n 8)
convertirDeciRoma ::Integer->String
convertirDeciRoma n= (decimal n) ++" "++ (conv n)
