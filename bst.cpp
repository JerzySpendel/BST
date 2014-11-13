#include "bst.hpp"
#include <iostream>

BST::BST(){
	m_root = new Node();
}

Node* BST::get_root() const{
	return m_root;
}

void BST::add(Comparable *v, Node* root){
	if (root == nullptr){
		root = m_root;
	}
	if( root->get_v() == nullptr){
		root->set_v(v);
	}
	else if(*v < *(root->get_v())){
		if(root->get_left() == nullptr){
			root->set_left(new Node());
		}
		add(v, root->get_left());
	}
	else if(!(*v < *(root->get_v()))){
		if(root->get_right() == nullptr){
			root->set_right(new Node());
		}
		add(v, root->get_right());
	}
}
