-- SELECT TOP 2 CustomerName AS 'Customer Name'
-- FROM Customers;

SELECT CustomerName, Country
FROM Customers
WHERE Country = 'Mexico';

-- SELECT COUNT(DISTINCT Country) Country FROM Customers;
