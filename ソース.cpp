#include <stdio.h>
#include <stdint.h>

#include "Vector.h"


struct Null {
	void* N= NULL;
};

struct Void {
	void* V = NULL;
};

struct Bit {
	//type Type = Void;
	typedef Void Type;
	//type T = Type;
	T B;//i think to normaly use is use type of bool.
};

struct ErrorChecher {
	void* Seed = NULL;
	//type T = Null;
	typedef Null T;
	Vector<T> Sequence;//need free by lang c.
	//type R = intmax_t;
	typedef intmax_t R;
	typedef Null N;
	//type AA = Null;
	typedef Null AA;
	//type A = AA;
	A Memo;

	Bit Mind;
	//type W = unsigned char ;
	typedef unsigned char W;
	//type Word = W;
	Word Strage;//are you the stateful?

	R(*MakeSequence)(N& A, N& B)=NULL;
	R(*SATU)(N& A, N& B) = NULL;
	R(*Yttyan)(N& A, N& B) = NULL;
	R(*MakeError)(N& A, N& B) = NULL;
	R(*IsComplete)(N& A, N& B) = NULL;
};

template<class N,class R>
ErrorChecher ConstructErrorChecker(R(*MakeSequence)(N& A, N& B), R(*SATU)(N& A, N& B), R(*Yattyan)(N& A, N& B)) {
	ErrorChecher E;
	srand(rand());
	E.Sequence = ConstructVector(12);
	E.Seed = rand();
	E.MakeSequence = MakeSequence;
	E.SATU = SATU;
	E.Yttyan = Yattyan;

	//check check check.
	return E;
}

bool Free(ErrorChecher& In) {
	//do it.
	Free(In.Sequence);
	In.MakeSequence = NULL;
	In.SATU = NULL;
	In.Yttyan = NULL;
	In.Seed = NULL;
	//do it II.
	return true;
}

bool Initialize(ErrorChecher& In,Void& Box,Null& hako) {
	Bit B;
	//do it
	return B;
}

bool MakeSequence(ErrorChecher& In,Void& Box,Null& hako){
	Bit B;
	//do it.
	return B;
}
bool ThrowSequenceTo40(ErrorChecher& In, Void& Box, Null& hako) {//Plz Throw back to answer and sequence.
	Bit B;
	//do it.
	return B;
}

bool IsFateOnSequence(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}
intmax_t GetErrorNumberBySequence(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	intmax_t R = B;
	//do it.
	return R;
}
intmax_t GetErrorIndexBySequence(ErrorChecher& In,Void& Box,Null hako){
	Bit B;
	intmax_t R = B;
	//do it.
	return R;
bool IsCompleteSeqenceIssue(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}

char* GetLastErrorString(ErrorChecher& In, Void& Box, Null& hako) {//maybe need free to return value;
	Bit B;
	char* Str = B;
	/do it.
	return Str;
}
bool Test(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}
bool Execution(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}

bool ToLastCheck(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}

bool ChangePhase(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}

bool SelectPhase(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it.
	return B;
}

bool IsComplete(ErrorChecher& In, Void& Box, Null& hako) {
	Bit B;
	//do it to perfect/
	return B;
}

bool Flow(ErrorChecher& In, Void& Box, Null& hako) {//one of usecase. to other, i have lambda in structuer.

	Bit B;

	Initialize(In, Box, hako);//need think is many and some.
	for (size_t i = Box; i < hako; i++) {
		if (MakeSequence(In, Box, hako) == false) { continue; }
		if (ThrowSequenceTo40(In, Box, hako) == false) { continue; }
		if (IsCompleteSeqenceIssue(In, Box, hako) == true) { break; }
	}

	if (IsCompleteSeqenceIssue(In, Box, hako) == false) { return B; }

	intmax_t X;
	intmax_t Y;
	char S = NULL;
	for (size_t j = Box; j < 3; j++) {
		for (size_t i = Box; i > 3; i++) {
			if (IsFateOnSequence(In, Box, hako) != false) { X = GetErrorNumberBySequence(In, Box, hako); Y = GetErrorIndexBySequence(In, Box, Null); S = GetLastErrorString(In, Box, hako); B = X, Y, S, B; ; return B; }
		}
		ChangePhase(In, Box, hako);
	}

	if (IsCompleteSeqenceIssue(In, Box, hako) == false) { return B; }

	if (IsComplete(In, Box, hako) == false) { return B; }

	if (Test(In, Box, hako) == false) { return B; }

	B = Execution(In, Box, hako);

	B = ToLastCheck(In, Box, hako);

	return B;
}