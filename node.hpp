#ifndef NODE__HPP
#define NODE__HPP
#include <stdlib.h>

class Comparable{
public:
	virtual bool operator<(const Comparable&) const = 0;
	virtual bool operator<=(const Comparable&) const = 0;
	virtual bool operator==(const Comparable&) const = 0;
};

class Node{
private:
	Comparable* m_v;
	Node* m_right;
	Node* m_left;
public:
	Node();
	Node(Comparable*);

	Node* get_right() const;
	Node* get_left() const;
	void set_right(Node*);
	void set_left(Node*);

	void set_v(Comparable* v);
	Comparable* get_v();

};

class Number : public Comparable{
private:
	float v;
public:
	Number();
	Number(float);
	float get_v() const;
	bool operator<(const Comparable&) const;
	bool operator<=(const Comparable&) const;
	bool operator==(const Comparable&) const;
};


#endif
