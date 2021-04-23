#include "LIST.h"
#include "Error.h"

LIST::LIST()
{
	Size = 0;
	data = nullptr;
	Begin.ptr = nullptr;
	End.ptr = nullptr;
	Current.ptr = nullptr;
}

LIST::LIST(int Size)
{
	if (Size > MAX_SIZE)
	{
		throw MaxSizeError();
	}
	else if (Size < 0)
	{
		throw SizeError();
	}
	else
	{
		this->Size = Size;
		data = new int[Size];
		for (int i = 0; i < Size; i++)
		{
			data[i] = 0;
		}
		Begin.ptr = &(this->data[0]);
		End.ptr = &(this->data[Size - 1]);
		Current.ptr = Begin.ptr; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	}
}

// ����������� �����������
LIST::LIST(const LIST& other)
{
	Size = other.Size;

	if (data != nullptr)
	{
		delete[] data;
	}

	data = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		data[i] = other.data[i];
	}

	this->Begin = other.Begin;
	this->Current = other.Current;
	this->End = other.End;
}


LIST::~LIST()
{
	if (this->data != nullptr)
	{
		delete[] this->data;
	}
	data = nullptr;
	Current.ptr = nullptr;
	Begin.ptr = nullptr;
	Current.ptr = nullptr;
	End.ptr = nullptr;
}

int LIST::GetSize()
{
	return this->Size;
}

int LIST::GetData()
{
	return *this->data;
}

void LIST::SetSize(int size)
{
	this->Size = size;
}

// �������� ������������
LIST& LIST::operator=(const LIST& a)
{
	if (this == &a) // ��������� �� ����������������
	{
		return *this;
	}

	Size = a.Size;
	if (data != 0) // ���� ������ �� �����, �� ������� ������
	{
		delete[] data;
	}

	data = new int[Size];
	for (int i = 0; i < Size; i++)
	{
		data[i] = a.Size;
	}

	return *this;
}

//�������� ������� �� ������� 
int& LIST::operator[](int index)
{
	if(index>=Size)
	{
		throw IndexError2();
	}
	else if (index < 0)
	{
		throw IndexError1();
	}
	else
	{
		return data[index];
	}
}

//����������  ��������� "*"
LIST& LIST::operator *(LIST& other)
{
	LIST* res = new LIST;
	if (this->Size > other.Size)
	{
		int Size1 = this->Size;
		res->Size = Size1;
		res->data = new int[Size1];
		Size1 = other.Size;
		int j = 0;
		for (int i = 0; i < Size1; i++)
		{
			res->data[i] = this->data[i] * other.data[i];
			j = i;
		}
		Size1 = this->Size;
		j++;
		for (j; j < Size1; j++)
		{
			res->data[j] = 0; // ��������� ������� 1 � 2 ����� ������, ��� ��� ����� �������� �� �� ���
		}
		return *res;
	}
	else
	{
		int Size1 = other.Size;
		res->Size = Size1;
		res->data = new int[Size1];
		Size1 = this->Size;
		int j = 0;
		for (int i = 0; i < Size1; i++)
		{
			res->data[i] = this->data[i] * other.data[i];
			j = i;
		}
		Size1 = other.Size;
		j++;
		for (j; j < Size1; j++)
		{
			res->data[j] = 0;
		}
		return *res;
	}
}

// ����������� ������� ������
int LIST::operator ()()
{
	return this->Size;
}



ostream& operator<<(ostream& out, const LIST& other)
{
	if (other.Size == 0)
	{
		throw EmptySizeError();
	}
	for (int i = 0; i < other.Size; i++)
	{
		out << other.data[i] << " ";
	}
	return out;
}

istream& operator>>(istream& in, LIST& other)
{
	for (int i = 0; i < other.Size; i++)
	{
		cout << "������� " << i << " ������� ������: ";

		in >> other.data[i];
	}
	return in;
}
