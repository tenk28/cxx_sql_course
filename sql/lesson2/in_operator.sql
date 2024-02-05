-- SELECT CustomerName, Country
-- FROM Customers
-- WHERE Country IN ('Germany', 'France', 'UK');

SELECT CustomerName, Country
FROM Customers
WHERE Country NOT IN ('Germany', 'France', 'UK');
