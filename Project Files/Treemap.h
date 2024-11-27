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


template<class K, class V>
Treemap<K, V>::Treemap() {

}

template<class K, class V>
Treemap<K, V>::Treemap(const Treemap<K, V>& other) {

}


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

template <class K, class V>
V& Treemap<K, V>::get(K key) {
	Pair<K, V> searchKey = { key, V() };
	return BT.get(searchKey).value;
}

template<class K, class V>
BinaryTree<K> Treemap<K, V>::keySet() {

}

template<class K, class V>
void Treemap<K, V>::put(K key, V value) {

}

template<class K, class V>
int Treemap<K, V>::size() {
	return BT.count();
}

template<class K, class V>
bool Treemap<K, V>::removeKey(K key) {

}

template<class K, class V>
V& Treemap<K, V>::operator[](K key) {

}

template<class K, class V>
Treemap<K, V>::~Treemap() {

}



