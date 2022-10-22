
#include <iostream>
class Figure {
protected:
	int sides_count;
	std::string name;
public:
	int get_sides_count() {
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
	Figure() {
		sides_count = 0;
		name = "Фигура";
		std::cout << "Количество сторон" << std::endl;
		std::cout << get_name() << ":  " << get_sides_count() << std::endl;
	}
};
class Triangle : public Figure {
public:
		Triangle() {
		sides_count = 3;
		name = "Треугольник";
		std::cout << "Количество сторон" << std::endl;
		std::cout << get_name() << ":  " << get_sides_count() << std::endl;
	}
};
class Quadrangle : public Triangle {
public:
	Quadrangle() {
		sides_count = 4;
		name = "Квадрат";
		std::cout << "Количество сторон" << std::endl;
		std::cout << get_name() << ":  " << get_sides_count() << std::endl;
	}
};
int main()
{
	setlocale(LC_ALL, "Russian");
	Quadrangle one;
}
