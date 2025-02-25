#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <cstdint>
# include "Data.hpp"

class Serializer {
private:
	Serializer(void);
	Serializer(const Serializer& obj);
	Serializer& operator=(const Serializer& obj);
	~Serializer();

public://static 키워드: 클래스에 속하지만 특정 객체에는 속하지 않음, 객체없이 호출 가능
	static uintptr_t serialize(Data* ptr);//포인터와 크기가 같은 정수형
	static Data* deserialize(uintptr_t raw);
};

#endif
