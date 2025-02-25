#include "Serializer.hpp"

int main()
{
	Data data = {42, "Seoul"};

	uintptr_t raw = Serializer::serialize(&data);

	Data* ptr = Serializer::deserialize(raw);

	if (ptr == &data)
	{
		std::cout << "Success: Pointers match!" << std::endl;
		std::cout << "Value: " << ptr->value << ", Name: " << ptr->name << std::endl;
	}
	else
		std::cout << "Failure: Pointers do not match!" << std::endl;

	return (0);
}
