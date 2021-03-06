# Vec3
Составить описание класса для объектов-векторов,
задаваемых координатами концов в трехмерном пространстве, считая, что компоненты векторов представлены вещественными числами типа <strong>double.</strong> Компоненты векторов
должны быть скрыты (инкапсулированы) в объекте.
Предусмотреть в классе деструктор и, как минимум, два
конструктора:

а) для инициализации векторов нулевыми компонентами и

б) заданным набором компонентов.

Можно использовать параметры по умолчанию для
сокращения количества конструкторов.

Организовать в конструкторах и деструкторе вывод
на экран информационных сообщений, например, «<em>Конструктор 1</em>», «<em>Деструктор</em>» и т.д.

I. С помощью <strong>функций-элементов</strong> класса обеспечить
1) доступ к элементам вектора (чтение/запись);
2) вычисление модуля вектора;
3) копирование вектора;
4) умножение вектора на скаляр;
5) нормировку вектора (получение вектора еди-
ничной длины).

II. C помощью <strong>внешних функций</strong> обеспечить двуместные операции над векторами A и B:

a) с получением нового вектора C:
1) сложение (C = A + B);
2) вычитание (C = A – B);
3) векторное произведение (С = A × B);

б) с получением скалярных величин:
1) скалярного произведения двух векторов;
2) косинуса и синуса угла между двумя векто-
рами;
3) величины угла в градусах между векторами в
пределах [–180º, 180º].

Создайте функцию-элемент класса для вывода на
экран компонентов вектора в удобной форме, например, в
виде строки:

x = <значение x>; y = <значение y>; z = <значение z>.
