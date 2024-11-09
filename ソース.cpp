#include <stdio.h>
#include <stdint.h>
#include <time.h>

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

struct SomeFileSystem {
	void* F = NULL;
}

struct SomeCompressonSystem {
	void* C = NULL;
}
struct Ticket {
	void* T = NULL;
};
struct Handle {
	void* H = NULL;
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

	Handle System;
	Ticket Huda;

	Bit Mind;
	//type W = unsigned char ;
	typedef unsigned char W;
	//type Word = W;
	Word Strage;//are you the stateful? and are you need SomeFileSystem. and are you need SomeCompressionSystem.
	//Word Pamission;
	//Word Chash;

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

bool OpenKABARU(ErrorChecher& In, Ticket& T) {
	Bit KABARU;
	//do it.
	return KABARU;
}
bool CloseKABARU(ErrorChecher& In) {
	Bit KABARU;
	//do it.
	return KABARU;
}
bool SendHELLOW(ErrorChecher& In) {
	Bit KABARU;
	//Do Send "Hellow World!!".
	return KABARU;
}
bool ConnectKABARU(ErrorChecher& In, Bit CA,Ticket& T) {//Ticket is same to Open time.
	Bit KABARU;
	//do it.
	return KABARU;
}
bool IsArraiveConnectToKABARU(ErrorChecher& In) {
	Bit KABARU;
	//do it.
	return KABARU;
}
bool WriteToKABARU(ErrorChecher In, In.Word* Data, intmax_t L) {
	Bit KABARU;
	//do it.
	return KABARU;
}
bool IsWriteOKToKABARU(ErrorChecher& In) {
	Bit KABARU;
	//do it.
	return KABARU;
}
bool ReadFromKABARU(ErrorChecher& In) {
	Bit KABARU;
	//Do it.
	return KABARU;
}
bool SendRequest(ErrorChecher& In, Null& N) {
	Bit KABARU;
	//Do Send N?
	return KABARU;
}
Void GetSendRequestAnther(ErrorChecher& In) {
	Bit KABRU;
	Void R;
	//Do Negotiation to Get Anther to user sender.
}
bool IsReadOKFromKABARU(ErrorChecher& In) {
	Bit KABARU;
	//DO it.
	return KABARU;
}
bool DisConnectByKABARU(ErrorChecher& In) {
	Bit KABARU;
	//do it/
	return KANARU;
}
Void MakeWriteFormat(ErrorChecher& In, In.Word* Data, intmax_t L) {
	Void V = { Data,L };
	//do it?
	return V;
}
bool SendEndProsessMessage(ErrorChecher& In) {
	Bit KABARU;
	Void V = "I am Main Prosess is End.try to Disconnect.";
	//do Send V;
	return KABARU;
}
bool SendThankYou(ErrorChecher& In) {
	Bit KABARU;
	Void V = "Thank You.";
	//do Send V;
	return KABARU;
}
bool HardwereSleep(ErrorChecher& In, clock_t C) {
	Bit Ok;
	//do local hardwere Sleep to C.C by spec of time.
	return Ok;
}
bool ConnectFlow(ErrorChecher& In) {
	Bit B;
	Bit KABARU;
	Null N;
	Void V;
	if (OpenKABARU(In, In.Huda) == false) { return B; }
	if (ConnectKABARU(In, B, In.Huda) == false) { CloseKABARU(In); return{ B, KABARU}; }
	if (IsArraiveConnectToKABARU(In) == false) { CloseKABARU(In); return { B,KABARU }; }
	if (SendHELLOW(In) == false) { DisConnectByKABARU(In); CloseKABARU(In); return { B,KABARU }: }
	if (IsArraiveConnectToKABARU(In) == false) { DisConnectByKABARU(In); CloseKABARU(In); return{ B,KABARU }; }
	Void X;
	if (SendRequest(In, N) == false) { X = GetSendRequestAnther(In); DisConnectByKABARU(In); CloseKABARU(In); return { B,KABARU,X }; }
	X = GetSendRequestAnther(In);//if reason is negative. i prosess to convert to false.

	if (X == false) { DisConnectByKABARU(In); CloseKABARU(); return { B,KABARU,X }l; }

	do
	{
		if (IsArraiveConnectToKABARU(In) == false) { break; }
		if (X == "Read") {
			while (IsReadOKFromKABARU(In) == false) {
				ReadFromKABARU(In);
			}
		}
		if (X == "Write") {
			while (IsWriteOKToKABARU(In) == false) {
				In.Word W[2] = { V,N };
				WriteToKABARU(In, W, sizeof(W));
			}
		}

		if (SendRequest(In, N) != false) { X = GetSendRequestAnther(In); };

	} while (X!="EndOfStream");

	do {
		HardwereSleep(In, 3000 / CLOCKS_PER_SEC);
		SendEndProsessMessage(In);
		X = GetSendRequestAnther(In);
		B += X;
	} while (X == "Wait");//this loops end flag is nearly "Wait".

	SendThankYou(In);
	DisConnectByKABARU(In);
	CloseKABARU(In);

	return { B,KABARU };
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
	//Search is 6.
	//check is 8.
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

	if (ConnectFlow(In) == false) {//Shal I not use Far system? if no to return B;}

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