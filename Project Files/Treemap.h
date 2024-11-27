#pragma once
#include <iostream>
#include "BinaryTree.h"
#include "Pair.h"

template<class K, class V>

class Treemap {
	BinaryTree<Pair<K, V>> TM;


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

};

template<class K, class V>
Treemap<K, V>::Treemap(const Treemap<K, V>& other) {

};


template <class K, class V>
void Treemap<K, V>::clear() {
	TM.clear();
};

template <class K, class V>
bool Treemap<K, V>::containsKey(K key) {
	Pair<K, V> searchKey(key, V());
	try
	{
		TM.get(searchKey);
			return true;
	}
	catch (const std::logic_error&)
	{
		return false;
	}
};

template <class K, class V>
V& Treemap<K, V>::get(K key) {
	try
	{
		Pair<K, V> searchKey(key, V());
		return TM.get(searchKey).value;
	}
	catch (const std::logic_error&)
	{
		throw std::logic_error("Key wasnt found!");
	}
};

template<class K, class V>
BinaryTree<K> Treemap<K, V>::keySet() {
	BinaryTree<K> keys;
	Pair<K, V>* pairs = TM.toArray();
	int size = TM.count();
	for (int i = 0; i < size; i++) {
		keys.add(pairs[i].key);
	}
	delete[] pairs;
	return keys;
};

template<class K, class V>
void Treemap<K, V>::put(K key, V value) {
	try
	{
		Pair<K, V> searchKey(key, V());
		TM.add(searchKey);
	}
	catch (const std::logic_error&)
	{
		throw std::logic_error("Key wasnt added!");
	}
};

template<class K, class V>
int Treemap<K, V>::size() {
	return TM.count();
};

template<class K, class V>
bool Treemap<K, V>::removeKey(K key) {
	try
	{	
		//V temp()
		Pair<K, V> searchKey( key, V());
		TM.remove(searchKey);
	}
	catch (const std::logic_error&)
	{
		throw std::logic_error("Key wasnt removed!");
	}
};

template<class K, class V>
V& Treemap<K, V>::operator[](K key) {
	return get(key);
};

template<class K, class V>
Treemap<K, V>::~Treemap() {

};



