-- Задание
-- Выведите все позиций списка товаров принадлежащие какой-либо категории с названиями товаров и названиями категорий. Список должен быть отсортирован по названию товара, названию категории.
-- Ожидаемый формат результата:

-- +-------------+----------------+
-- | good_name   | category_name  |
-- +-------------+----------------+
-- | good 1      | category 1     |
-- | good 1      | category 2     |
-- | good 2      | category 3     |
-- | good 2      | category 4     |
-- | good 3      | category 7     |
-- ...


-- NB!

--     Выборки, полученные с помощью оператора SELECT могут быть отсортированы по нескольким атрибутам. Для этого необходимо в операторе ORDER BY указать набор атрибутов через запятую в необходимом порядке.
--     В запросе для соединения нескольких источников данных операцию соединения можно использовать многократно. Например, для соединения таблиц A, B и C можно использовать запрос вида:

-- SELECT * FROM A
--   INNER JOIN B
--     ON A.b_id = B.id
--   INNER JOIN C
--     ON a.c_id = C.id
-- ;

select g.name, cat.name from good as g join category_has_good as c on c.good_id = g.id join category as cat on cat.id = c.category_id order by 1, 2;


-- Query result:
-- +--------------+-------------------+
-- | name         | name              |
-- +--------------+-------------------+
-- | Bio Hotin    | Bath Products     |
-- | Bio Hotin    | Dental Care       |
-- | Bio Hotin    | Health & Medicine |
-- | Bio Hotin    | Juices            |
-- | Bio Hotin    | Water             |
-- ...