#include "Hash.h"

Hash::Hash()
{
}

int Hash::hashFunction(int key)
{
	return key % nr_of_buckets;
}

void Hash::insertItem(int key)
{
	// add check if it exists
	int index = hashFunction(key);
	hash_table[index].push_back(key);
}
void Hash::deleteItem(int key)
{
	int index = hashFunction(key);

	// find the key in (index)th list

	std::list<int>::iterator iter = std::find(hash_table[index].begin(), hash_table[index].end(), key);

	if (iter != hash_table[index].end())
		hash_table[index].erase(iter);

}

void Hash::displayHash()
{
	for (int i = 0; i < nr_of_buckets; i++) {
		std::cout << i;
		for (const auto& x : hash_table[i])
			std::cout << " --> " << x;
		std::cout << std::endl;
	}
}

Hash::~Hash()
{
	delete hash_table;
}