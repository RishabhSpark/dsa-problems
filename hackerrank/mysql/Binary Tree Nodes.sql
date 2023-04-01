SELECT N, 
	(CASE WHEN P is NULL THEN "Root"
    	 WHEN (SELECT N IN (SELECT P FROM BST)) THEN "Inner"
         ELSE "Leaf"
    END) as type
FROM BST
ORDER BY N