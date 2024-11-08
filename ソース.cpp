#include <stdio.h>

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

	TypeAndValue Root;
};
struct GraphParam {//plz rewrite this.

	void* Arrow[16];
	void* Weight = 0xdeadbeef;
};
struct GraphNode {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	T Value;
	GraphParam P;
	Vector<TypeAndValue> Node;
};
struct FixedGraphNode {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;

	ConstHolder C;

	T Value;
	GraphParam P;
	FixedVector<TypeAndValue,C.Value> Node;
};

struct EndPointA{
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	
	T Value;
	GraphParam P;
};
struct EndPointB{
	GraphParam P;
};
struct EndPointC{
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	
	T Value;
	GraphParam P;
	TypeAndValue Back;
};
struct EndPointD{
	GraphParam P;
	TypeAndValue Back;
};