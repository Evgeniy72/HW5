
#include <iostream>
class Figure {
protected:
	int sides_count;
	std::string name, corr;
	int a, b, c, A, B, C;
public:
	int get_sides_count() {
		return sides_count;
	}
	std::string get_name() {
		return name;
	}
	virtual void print() {
		std::cout << name << std::endl << "Количество сторон   " << sides_count << std::endl << corr << std::endl;
	}
	Figure() {
		std::string corr;
		sides_count = 0;
		name = "Фигура";
		if (sides_count == 0)
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Triangle : public Figure {
public:
	void print() override {
		std::cout << name << std::endl << "Количество сторон   " << sides_count << std::endl << corr << std::endl << "с углами " << a << ", " << b << ", " << c << "   и сторонами   " << A << ", " << B << ", " << C << std::endl;
	}
	Triangle() {
		sides_count = 3;
		name = "Треугольник";
		a = 30; b = 60; c = 90; A = 5; B = 6; C = 7;
		if ((sides_count == 3) and (a + b + c == 180))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Quadrangle : public Triangle {
protected:
	int d, D;
public:
	Quadrangle() {
		sides_count = 4;
		name = "Четырехугольник";
		a = 60; b = 120; c = 60; d = 120; A = 5; B = 6; C = 5; D = 6;
		if ((sides_count == 4) and (a + b + c + d == 360))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
	void print() override {
		std::cout << name << std::endl << corr << std::endl << "с углами " << a << ", " << b << ", " << c << ",  " << d << "   и сторонами   " << A << ", " << B << ", " << C << ", " << D << std::endl;
	}
};
class Triangle_pryam : public Triangle {
public:
	Triangle_pryam() {
		name = "Прямоугольный треугольник";
		a = 60; b = 120; c = 90; A = 5; B = 6; C = 5;
		if (c == 90)
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Triangle_ravnobedr : public Triangle {
public:
	Triangle_ravnobedr() {
		name = "Равнобедренный треугольник";
		a = c = 60; b = 120; A = C = 5; B = 6;
		if ((A == C) and (a == c))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Triangle_ravnostoron : public Triangle {
public:
	Triangle_ravnostoron() {
		name = "Равносторонний треугольник";
		a = c = b = 60; A = C = B = 6;
		if ((a == b == c == 60) and (A == B == C))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Pryamougol : public Quadrangle {
public:
	Pryamougol() {
		name = "Прямоугольник";
		a = c = b = d = 90; A = C = 10; D = B = 6;
		if ((sides_count == 4) and (a + b + c + d == 360))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Kvadrat : public Quadrangle {
public:
	Kvadrat() {
		name = "Квадрат";
		a = c = b = d = 90; A = C = D = B = 6;
		if ((a == b == c == d == 90) and (A == B == C == D))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Parallelogram : public Quadrangle {
public:
	Parallelogram() {
		name = "Параллелограм";
		a = c = 60; b = d = 90; A = C = 7; D = B = 6;
		if ((a == c == b == d == 90) and (A == C) and (B == D))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
class Romb : public Quadrangle {
public:
	Romb() {
		name = "Ромб";
		a = c = 60; b = d = 90; A = C = D = B = 6;
		if ((a == c) and (b == d) and (A == B == C == D))
		{
			corr = "Правильная";
		}
		else {
			corr = "Неправильная";
		}
	}
};
	int main() {
		setlocale(LC_ALL, "Russian");
		Figure zero;
		zero.print();
		Triangle one;
		Figure* fi_tri = &one;
		fi_tri->print();
		Quadrangle two;
		Figure* fi_qua = &two;
		fi_qua->print();
		Triangle_pryam three;
		Triangle* tr_pryam = &three;
		tr_pryam->print();
		Triangle_ravnobedr four;
		Triangle* tr_ravnobedr = &four;
		tr_ravnobedr->print();
		Triangle_ravnostoron five;
		Triangle* tr_rsvnost = &five;
		tr_rsvnost->print();
		Pryamougol six;
		Quadrangle* pryam = &six;
		pryam->print();
		Kvadrat seven;
		Quadrangle* kva = &seven;
		kva->print();
		Parallelogram eleven;
		Quadrangle* parall = &eleven;
		parall->print();
		Romb eight;
		Quadrangle* romb = &eight;
		romb->print();

	}
