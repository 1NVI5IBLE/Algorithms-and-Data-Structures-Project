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
	void containsKey(K key);
	V& get(K key);
	BinaryTree<K> keySet();
	void put(K key, V value);
	int size();
	bool removeKey(K key);
	V& operator[](K key);
	~Treemap();
};