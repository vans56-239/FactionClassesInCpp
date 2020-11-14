#pragma once
// ���������� ������
class FractionClass
{
public:
	// ��������
	int upper;
	int down;

	// ���������
	void print();
	double toDouble();

	FractionClass* add(const FractionClass* other);
	
	// TODO: �������
	FractionClass* div(const FractionClass* other);
	
	// TODO: ���������
	FractionClass* sub(const FractionClass* other);

private:
	int minDivider();
	void printNormalized();
};
