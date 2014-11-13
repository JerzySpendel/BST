#include "node.hpp"
Number::Number(){

}
Number::Number(float v){
	this->v = v;
}
bool Number::operator<(const Comparable& n) const{
	const Number& t = dynamic_cast<const Number&>(n);
	if(v < t.v){
		return true;
	}
	return false;
}

bool Number::operator<=(const Comparable& n) const{
	const Number& t = dynamic_cast<const Number&>(n);
	if(v <= t.v){
		return true;
	}
	return false;
}

float Number::get_v() const{
	return v;
}

Node::Node(){
}

Node::Node(Comparable *v){
	m_v = v;
}

void Node::set_v(Comparable* v){
	delete m_v;
	m_v = v;
}

Comparable* Node::get_v(){
	return m_v;
}

Node* Node::get_right() const{
	return m_right;
}

Node* Node::get_left() const{
	return m_left;
}

void Node::set_right(Node* n){
	m_right = n;
}

void Node::set_left(Node* n){
	m_left = n;
}
