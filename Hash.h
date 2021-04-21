#pragma once
#include <list> 
#include <iostream>

class Hash
{
private:
	int nr_of_buckets;
	// Pointer to an array containing buckets
	std::list<int>* hash_table;
	int hashFunction(int key);
public:
	Hash(int buckets);
	void insertItem(int key);
	void deleteItem(int key);
	void displayHash();
};

