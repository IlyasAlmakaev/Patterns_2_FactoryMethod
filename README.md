# Patterns_2_FactoryMethod

Factory Method

Фабричный метод - позволяет переложить отвественность за создание объекта на класс генератор.

Когда использовать: 1. Мы не до конца уверены объект какого класса мы хотим вернуть. Но метод который возвращает объект должен быть один. -> Для этого мы напишим в методе генераторе возвращает общего для этих объектов родителя. Схема:

![pattern2](https://user-images.githubusercontent.com/8353437/27411388-a9a84ab6-5717-11e7-8876-1b2bff31caf3.png)
