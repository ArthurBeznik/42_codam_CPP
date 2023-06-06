
#include <Serializer.hpp>

int	main(void) {

	Data	*data = new Data;

	data->id = 42;
	data->name = "Arthur";

	std::cout << "data->id: " << data->id << std::endl;
	std::cout << "data->name: " << data->name << std::endl;

	uintptr_t	serialized = Serializer::serialize(data);

	std::cout << "serialized: " << &serialized << std::endl;

	Data	*deserialized = Serializer::deserialize(serialized);

	std::cout << "deserialized->id: " << deserialized->id << std::endl;
	std::cout << "deserialized->name: " << deserialized->name << std::endl;

	std::cout << "deserialized: " << deserialized << std::endl;

	delete data;

	return (0);
}