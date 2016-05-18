-- Query the sum of LAT_N, followed by the sum of LONG_W, from STATION. The two results should be separated by a space and rounded to 2 decimal places.

select round(sum(LAT_N),2), round(sum(LONG_W),2) from STATION;
