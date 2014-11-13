#ifndef BST__HPP
#define BST__HPP
#include "node.hpp"

class BST{
private:
	Node* m_root;
public:
	BST();
	Node* get_root() const;
	void add(Comparable* v, Node* root = nullptr);
	Node* search(Comparable *v, Node* root = nullptr);
};

#endif
