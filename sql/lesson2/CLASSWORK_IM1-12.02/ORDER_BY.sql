SELECT *
FROM Customers
ORDER BY CustomerID ASC;


SELECT *
FROM Customers
ORDER BY CustomerID DESC;


SELECT CustomerID, CustomerName
FROM Customers
WHERE NOT Country = 'USA'
ORDER BY CustomerID DESC;

