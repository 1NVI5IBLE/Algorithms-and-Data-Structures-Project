#pragma once
#include <iostream>
#include "BinaryTree.h"
#include "Pair.h"

template<class K, class V>

class Treemap {
	BinaryTree<Pair<K, V>> BT;


	void clear(){
		BT.clear;
	}
};