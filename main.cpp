#include <iostream>

// 리터럴을 참조하는 방법 = r-value reference <우측값 참조>

void Print(int& p)
{

}

void Print2(int x)
{

}

void Print3(const int& x)
{
	std::cout << x << std::endl;
}

int main()
{
	// r-value reference
	const int& p = 10;

	int x {};

	Print(x);
	Print2(x);
	// 참조형이 일반변수나, 포인터변수나 똑같다
	// Print2에 x대신 10 리터럴을 추가할 수 있듯이,
	// Print에도 10 리터럴을 넣을 수 있을까?

	Print3(10);
	// r-value = 이름이 없기 때문에, 해당 라인을 건너뛰면 사라짐
	// 이름이 없어도 주소는 존재하므로, 참조가 가능해진다 (r-value reference)
	// 역참조는 안되므로 const를 반드시 붙여야한다.
	// 전달이 되고나도, 유지가 된다. (리터럴의 특징과 다름)

	Print3(10 + 20);

	const int y{ 1 };
	Print3(y);  //  역시 가능하다
}