#include <stdio.h>
#include <stdint.h>

#include "Vector.h"
#include "FixedVector.h"
struct Type{
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
};

struct TypeAndValue {
	Type T;
	T.T Value;
};

struct ConstNumberHolder {
	const size_t Value;
};

template<size_t N>
ConstNumberHolder ConstructConstNumberHolder<N>() {
	ConstHolder C = { N };

	return C;
}
struct ConstTHolder {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	const T Value;
};

template<class T,T N>
ConstTHolder ConstructConstTHolder<T>() {
	const T Value = N;
	ConstHolder C = { Value };

	return C;
}
struct GraphSystem {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	T Value;
	intmax_t N = 0;
	Node Root;
};
struct GraphParam {//plz rewrite this.

	void* Arrow[16];
	void* Weight = 0xdeadbeef;
};

struct Node {
	Vector<GraphParam> Param;
	Vector<TypeAndValue> Node;
};
struct GraphNode {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	T Value;
	intmax_t N = 0;
	Vector<Node> Node;
};
struct FixedGraphNode {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	ConstHolder C;

	T Value;
	intmax_t N = 0;
	FixedVector<Node,C.Value> Node;
};

struct EndPointA{
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	
	T Value;
	intmax_t N = 0;
	GraphParam P;
};
struct EndPointB{
	intmax_t N = 0;
	GraphParam P;
};
struct EndPointC{
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	
	T Value;
	intmax_t N = 0;
	Node Back;
};
struct EndPointD{
	intmax_t N = 0;
	Node Back;
};