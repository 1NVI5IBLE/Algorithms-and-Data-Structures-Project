#pragma once

template <class K, class V>

struct Pair {
	K key;
	V value;

	bool operator < (const Pair& other) const { return key < other.key; }
	bool operator > (const Pair& other) const { return key > other.key; }
	bool operator == (const Pair& other) const { return key == other.key; }
	bool operator != (const Pair& other) const { return key != other.key; }

};