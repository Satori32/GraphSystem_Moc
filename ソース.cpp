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

struct ConstHolder {
	//type Type = NULL;
	typedef void* Type;
	//type T = Type;
	const T Value;
};

template<size_t N>
ConstHolder ConstructConstHolder<N>() {
	ConstHolder C = { N };

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