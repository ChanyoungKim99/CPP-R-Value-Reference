#include <iostream>

// ���ͷ��� �����ϴ� ��� = r-value reference <������ ����>

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
	// �������� �Ϲݺ�����, �����ͺ����� �Ȱ���
	// Print2�� x��� 10 ���ͷ��� �߰��� �� �ֵ���,
	// Print���� 10 ���ͷ��� ���� �� ������?

	Print3(10);
	// r-value = �̸��� ���� ������, �ش� ������ �ǳʶٸ� �����
	// �̸��� ��� �ּҴ� �����ϹǷ�, ������ ���������� (r-value reference)
	// �������� �ȵǹǷ� const�� �ݵ�� �ٿ����Ѵ�.
	// ������ �ǰ���, ������ �ȴ�. (���ͷ��� Ư¡�� �ٸ�)

	Print3(10 + 20);

	const int y{ 1 };
	Print3(y);  //  ���� �����ϴ�
}