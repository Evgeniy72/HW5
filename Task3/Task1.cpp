
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
	virtual std::string correct() {
		if (sides_count == 0)
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}; 
	virtual void print(){
		correct();
		std::cout << name << std::endl << "Количество сторон   " << sides_count << std::endl << corr << std::endl;
	}
	Figure() {
		sides_count = 0;
		name = "Фигура";
	}
};
class Triangle : public Figure {
public:
	std::string correct() override {
		if ((sides_count == 3) and (a + b + c == 180))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	void print() override{
		correct();
		std::cout << name << std::endl << "Количество сторон   " << sides_count << std::endl << corr << std::endl << "с углами " << a << ", " << b << ", " << c << "   и сторонами   " << A << ", " << B << ", " << C << std::endl;
	}
	Triangle() {
		sides_count = 3;
		name = "Треугольник";
		a = 30; b = 60; c = 90; A = 5; B = 6; C = 7;
	}
};
class Quadrangle : public Triangle {
protected:
	int d, D;
public:
	std::string correct() override {
		if ((sides_count == 4) and (a + b + c + d == 360))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Quadrangle() {
		sides_count = 4;
		name = "Четырехугольник";
		a = 60; b = 120; c = 60; d = 120; A = 5; B = 6; C = 5; D = 6;
	}
	void print() override {
		correct();
		std::cout << name << std::endl << corr << std::endl << "с углами " << a << ", " << b << ", " << c << ",  " << d << "   и сторонами   " << A << ", " << B << ", " << C << ", " << D << std::endl;
	}
};
class Triangle_pryam : public Triangle {
public:
	std::string correct() override {
		if (c == 90)
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Triangle_pryam() {
		name = "Прямоугольный треугольник";
		a = 60; b = 120; c = 90; A = 5; B = 6; C = 5;
	}
};
class Triangle_ravnobedr : public Triangle {
public:
	std::string correct() override {
		if ((A == C) and (a == c))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Triangle_ravnobedr() {
		name = "Равнобедренный треугольник";
		a = c = 60; b = 120; A = C = 5; B = 6;
	}
};
class Triangle_ravnostoron : public Triangle {
public:
	std::string correct() override {
		if ((a == b == c == 60) and (A == B == C))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Triangle_ravnostoron() {
		name = "Равносторонний треугольник";
		a = c = b = 60; A = C = B = 6;
	}
};
class Pryamougol : public Quadrangle {
public:
	std::string correct() override {
		if ((sides_count == 4) and (a + b + c + d == 360))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Pryamougol() {
		name = "Прямоугольник";
		a = c = b = d = 90; A = C = 10; D = B = 6;
	}
};
class Kvadrat : public Quadrangle {
public:
	std::string correct() override {
		if ((a == b == c == d == 90) and (A == B == C == D))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Kvadrat() {
		name = "Квадрат";
		a = c = b = d = 90; A = C = D = B = 6;
	}
};
class Parallelogram : public Quadrangle {
public:
	std::string correct() override {
		if ((a == c == b == d == 90) and (A == C) and (B == D))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Parallelogram() {
		name = "Параллелограм";
		a = c = 60; b = d = 90; A = C = 7; D = B = 6;
	}
};
class Romb : public Quadrangle {
public:
	std::string correct() override {
		if ((a == c) and (b == d) and (A == B == C == D))
		{
			corr = "Правильная";
			return corr;
		}
		else {
			corr = "Неправильная";
			return corr;
		}
	}
	Romb() {
		name = "Ромб";
		a = c = 60; b = d = 90; A = C = D = B = 6;
	}
};

int main() {
	{
		setlocale(LC_ALL, "Russian");}
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
