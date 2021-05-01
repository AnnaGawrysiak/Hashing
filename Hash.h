#pragma once
#include <list> 
#include <iostream>

class Hash
{
private:
	const int nr_of_buckets = 7;
	//an array containing buckets
	std::list<int> hash_table[7];
	int hashFunction(int key);
public:
	Hash();
	void insertItem(int key);
	void deleteItem(int key);
	void displayHash();
	~Hash();
};

	

