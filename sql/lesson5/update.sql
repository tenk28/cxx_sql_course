-- SELECT * FROM personMoiseyev;

-- INSERT INTO personMoiseyev(name, age, class, class_group, Best_lesson) 
-- VALUES 
-- ('Dmytro', '21', '4', '04', 'Math');

UPDATE personMoiseyev
SET Best_lesson = 'IT'
WHERE name = 'Dmytro'
