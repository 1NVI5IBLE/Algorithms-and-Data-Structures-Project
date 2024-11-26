#pragma once
#include <iostream>
#include "BinaryTree.h"
#include "Pair.h"

template<class K, class V>

class Treemap {
	BinaryTree<Pair<K, V>> BT;


public:
	Treemap();
	Treemap(const Treemap <K, V>& other);
	Treemap<K, V>& operator=(const Treemap <K, V>& other);

	void clear();
	bool containsKey(K key);
	V& get(K key);
	BinaryTree<K> keySet();
	void put(K key, V value);
	int size();
	bool removeKey(K key);
	V& operator[](K key);
	~Treemap();
};

template <class K, class V>
void Treemap<K, V>::clear() {
	BT.clear();
};

template <class K, class V>
bool Treemap<K, V>::containsKey(K key) {
	Pair<K, V> searchKey = { key, V()};
	Pair<K, V>* found = BT.get(searchKey);
	return found != nullptr;
}



