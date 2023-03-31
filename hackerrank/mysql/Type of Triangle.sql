SELECT(
	IF(A+B<=C OR A+C<=B OR B+C<=A, "Not A Triangle",
    IF(A=B AND A=C, "Equilateral",
    IF(A=B OR A=C OR B=C, "Isosceles",
    "Scalene")))
) as type_of_triangle
FROM TRIANGLES