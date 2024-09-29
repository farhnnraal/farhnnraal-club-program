PROGRAM konversi_suhu_dari_celsius

DECLARE
var c, k, f, r, user_input : float

ALGORITHM
INPUT user_input
SET c = user_input
SET f = (user_input * 9 / 5) + 32
SET k = user_input + 273.15
SET r = (user_input * 4) / 5
OUTPUT c, k, f, r