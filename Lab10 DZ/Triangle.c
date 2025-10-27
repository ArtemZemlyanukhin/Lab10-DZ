#include <stdio.h>
#include <Locale.h>
#include <math.h>
float area_triangle(float a, float b, float c);
void draw_triangle(char s);
void name(int x);
main()
{
    setlocale(LC_CTYPE, "RUS");
    int act, x;
    float a, b, c;
    char s;

    printf("***************************************************\
\n*\t\t\tМеню действий:\
            *\n*1-Рассчитать площадь равнобедренного треугольника*\n*2-Вывести определение фигуры  \
                   *\n*3-Нарисовать фигуру\
                              *\n**********\
*****************************************\n");
    printf("Выберите действие:\n");
    scanf("%d", &act);
    switch (act)
    {
    case 1:

        printf("Введите a:\n");
        scanf("%f", &a);
        printf("Введите b:\n");
        scanf("%f", &b);
        printf("Введите c:\n");
        scanf("%f", &c);
        area_triangle(a, b, c);
        break;
    case 2:
        printf("Введите кол-во сторон фигуры:\n");
        scanf("%d", &x);
        name(x);
        break;
    case 3:
        printf("Введите символ:\n");
        getchar();
        scanf("%c", &s);
        draw_triangle(s);

        break;
    default:
        printf("Такого действия нет");
    }

}
float area_triangle(float a, float b, float c)
{
    double per, square;
    per = (a + b + c) / 2;
    square = sqrt(per * (per - a) * (per - b) * (per - c));
    if (a == b || a == c || b == c) printf("Площадь равнобедренного треугольника равна:%lf\n", square);
    else printf("Это не равнобедренный треугольник\n");

}
void draw_triangle(char s)
{
    int h, i, j, sp;
    printf("Введите высоту треугольника: \n");
    scanf("%d", &h);
    for (i = 1; i <= h; i++) {
        // Печатаем пробелы
        for (sp = 1; sp <= h - i; sp++) {
            printf(" ");
        }

        // Печатаем звездочки
        for (j = 1; j <= 2 * i - 1; j++) {
            // Печатаем звездочки только по краям
            if (j == 1 || j == 2 * i - 1 || i == h) {
                printf("%c", s);
            }
            else {
                printf(" ");
            }
        }

        printf("\n");
    }
    system("pause");
}
void name(int x)
{
    int st = x;
    switch (st)
    {
    case 3:
        printf("Треугольник — это геометрическая фигура, образованная тремя точками, не лежащими на одной прямой, которые соединены между собой отрезками.\n");
        break;
    case 4:
        printf("Прямоугольник — это четырёхугольник, у которого все углы прямые (равны 90°).\n");
        break;
    case 0:
        printf("Круг — простейшая геометрическая фигура, все точки на границе которой равноудалены от центра.\n");
        break;


    }
}